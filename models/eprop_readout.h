/*
 *  eprop_readout.h
 *
 *  This file is part of NEST.
 *
 *  Copyright (C) 2004 The NEST Initiative
 *
 *  NEST is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  NEST is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with NEST.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef EPROP_READOUT_H
#define EPROP_READOUT_H

// nestkernel
#include "connection.h"
#include "eprop_archiving_node.h"
#include "event.h"
#include "nest_types.h"
#include "ring_buffer.h"
#include "universal_data_logger.h"

namespace nest
{

/* BeginUserDocs: neuron, e-prop plasticity

Short description
+++++++++++++++++

Current-based leaky integrate readout neuron model with delta-shaped
postsynaptic currents for e-prop plasticity

Description
+++++++++++

``eprop_readout`` is an implementation of a integrate-and-fire neuron model
with delta-shaped postsynaptic currents used as readout neuron for e-prop plasticity [1]_.
An additional state variable and the corresponding differential
equation represents a piecewise constant external current.

.. math::
    v_j^t &= \alpha v_j^{t-1}+\sum_{i \neq j}W_{ji}^\mathrm{rec}z_i^{t-1}
              + \sum_i W_{ji}^\mathrm{in}x_i^t-z_j^{t-1}v_\mathrm{th} \\
    \alpha &= e^{-\frac{\delta t}{\tau_\mathrm{m}}}

See the documentation on the ``iaf_psc_delta`` neuron model for more information
on the integration of the subthreshold dynamics.

More details on the event-based NEST implementation of e-prop can be found in [2]_.

Parameters
++++++++++

The following parameters can be set in the status dictionary.

================= ======= ======================================================
 V_m              mV      Initial value of the membrane voltage
 E_L              mV      Leak membrane potential
 C_m              pF      Capacity of the membrane
 tau_m            ms      Time constant of the membrane
 I_e              pA      Constant external input current
 V_min            mV      Absolute lower value of the membrane voltage
 start_learning   ms      Time point to start sending learning signals
 regression       boolean If True, regression; if False, classification
================= ======= ======================================================

References
++++++++++

.. [1] Bellec G, Scherr F, Subramoney F, Hajek E, Salaj D, Legenstein R,
       Maass W (2020). A solution to the learning dilemma for recurrent
       networks of spiking neurons. Nature Communications, 11:3625.
       DOI: https://doi.org/10.1038/s41467-020-17236-y
.. [2] Korcsak-Gorzo A, Stapmanns J, Espinoza Valverde JA, Dahmen D,
       van Albada SJ, Bolten M, Diesmann M. Event-based implementation of
       eligibility propagation (in preparation)

Sends
++++++++

LearningSignalConnectionEvent, DelayedRateConnectionEvent

Receives
++++++++

SpikeEvent, CurrentEvent, DelayedRateConnectionEvent, DataLoggingRequest

See also
++++++++

EndUserDocs */

class eprop_readout : public EpropArchivingNode
{

public:
  eprop_readout();
  eprop_readout( const eprop_readout& );

  using Node::handle;
  using Node::handles_test_event;

  using Node::sends_secondary_event;

  void
  sends_secondary_event( LearningSignalConnectionEvent& )
  {
  }

  void
  sends_secondary_event( DelayedRateConnectionEvent& )
  {
  }

  void handle( SpikeEvent& ) override;
  void handle( CurrentEvent& ) override;
  void handle( DelayedRateConnectionEvent& ) override;
  void handle( DataLoggingRequest& ) override;

  size_t handles_test_event( SpikeEvent&, size_t ) override;
  size_t handles_test_event( CurrentEvent&, size_t ) override;
  size_t handles_test_event( DelayedRateConnectionEvent&, size_t ) override;
  size_t handles_test_event( DataLoggingRequest&, size_t ) override;

  void get_status( DictionaryDatum& ) const;
  void set_status( const DictionaryDatum& );

  std::string get_eprop_node_type() const;

private:
  std::string eprop_node_type_ = "readout";

  void init_state_( const Node& proto );
  void init_buffers_();
  void pre_run_hook();

  void update_( Time const&, const long, const long );

  void update( Time const&, const long, const long );

  friend class RecordablesMap< eprop_readout >;
  friend class UniversalDataLogger< eprop_readout >;

  struct Parameters_
  {
    double tau_m_;          //!< membrane time constant (ms)
    double C_m_;            //!< membrane capacitance (pF)
    double E_L_;            //!< leak potential (mV)
    double I_e_;            //!< external DC current (pA)
    double V_min_;          //!< lower membrane voltage bound relative to leak potential (mV)
    double start_learning_; //!< time point to start sending learning signals
    bool regression_;       //!< if True, perform regression; if False, classification

    Parameters_();

    void get( DictionaryDatum& ) const;
    double set( const DictionaryDatum&, Node* );
  };

  struct State_
  {
    double y0_;             //!< current (pA)
    double y3_;             //!< membrane voltage relative to leak potential (mV)
    double readout_signal_; //!< integrated signal read out from the recurrent network
    double target_signal_;  //!< signal the network should learn
    double error_signal_;   //!< deviation between the readout and target signal

    State_();

    void get( DictionaryDatum&, const Parameters_& ) const;
    void set( const DictionaryDatum&, const Parameters_&, double, Node* );
  };

  struct Buffers_
  {
    Buffers_( eprop_readout& );
    Buffers_( const Buffers_&, eprop_readout& );

    RingBuffer delayed_rates_;
    RingBuffer normalization_rates_;

    RingBuffer spikes_;
    RingBuffer currents_;

    UniversalDataLogger< eprop_readout > logger_;
  };

  struct Variables_
  {
    double P30_;
    double P33_; //!< corresponds to kappa in eprop_synapse
    double P33_complement_;
    int start_learning_step_; //!< time step to start sending learning signals
    double readout_signal_;
    double target_signal_;
    double readout_signal_unnorm_;
  };

  /**
   * Minimal spike receptor type.
   * @note Start with 1 so we can forbid port 0 to avoid accidental
   *       creation of connections with no receptor type set.
   */
  static const size_t MIN_RATE_RECEPTOR = 1;

  /**
   * Spike receptors.
   */
  enum RateSynapseTypes
  {
    READOUT_SIG = MIN_RATE_RECEPTOR,
    TARGET_SIG,
    SUP_RATE_RECEPTOR
  };

  static const size_t NUM_RATE_RECEPTORS = SUP_RATE_RECEPTOR - MIN_RATE_RECEPTOR;

  double
  get_V_m_() const
  {
    return S_.y3_ + P_.E_L_;
  }

  double
  get_readout_signal_() const
  {
    return S_.readout_signal_;
  }

  double
  get_target_signal_() const
  {
    return S_.target_signal_;
  }

  double
  get_error_signal_() const
  {
    return S_.error_signal_;
  }

  /**
   * @defgroup eprop_readout_data
   * Instances of private data structures for the different types
   * of data pertaining to the model.
   * @note The order of definitions is important for speed.
   * @{
   */
  Parameters_ P_;
  State_ S_;
  Variables_ V_;
  Buffers_ B_;
  /** @} */

  static RecordablesMap< eprop_readout > recordablesMap_;
};

inline void
eprop_readout::update( Time const& origin, const long from, const long to )
{
  update_( origin, from, to );
}

inline size_t
eprop_readout::handles_test_event( SpikeEvent&, size_t receptor_type )
{
  if ( receptor_type != 0 )
    throw UnknownReceptorType( receptor_type, get_name() );

  return 0;
}

inline size_t
eprop_readout::handles_test_event( CurrentEvent&, size_t receptor_type )
{
  if ( receptor_type != 0 )
    throw UnknownReceptorType( receptor_type, get_name() );

  return 0;
}

inline size_t
eprop_readout::handles_test_event( DelayedRateConnectionEvent& e, size_t receptor_type )
{
  size_t step_rate_model_id = kernel().model_manager.get_node_model_id( "step_rate_generator" );
  size_t model_id = e.get_sender().get_model_id();

  if ( step_rate_model_id == model_id && receptor_type != TARGET_SIG )
    throw StepRateGeneratorExpected();

  if ( receptor_type < MIN_RATE_RECEPTOR || receptor_type >= SUP_RATE_RECEPTOR )
    throw UnknownReceptorType( receptor_type, get_name() );

  return receptor_type - MIN_RATE_RECEPTOR;
}

inline size_t
eprop_readout::handles_test_event( DataLoggingRequest& dlr, size_t receptor_type )
{
  if ( receptor_type != 0 )
    throw UnknownReceptorType( receptor_type, get_name() );

  return B_.logger_.connect_logging_device( dlr, recordablesMap_ );
}

inline void
eprop_readout::get_status( DictionaryDatum& d ) const
{
  P_.get( d );
  S_.get( d, P_ );
  EpropArchivingNode::get_status( d );
  ( *d )[ names::recordables ] = recordablesMap_.get_list();

  DictionaryDatum receptor_dict_ = new Dictionary();
  ( *receptor_dict_ )[ names::readout_signal ] = READOUT_SIG;
  ( *receptor_dict_ )[ names::target_signal ] = TARGET_SIG;

  ( *d )[ names::receptor_types ] = receptor_dict_;
}

inline void
eprop_readout::set_status( const DictionaryDatum& d )
{
  // temporary copies in case of errors
  Parameters_ ptmp = P_;
  State_ stmp = S_;

  // make sure that ptmp and stmp consistent - throw BadProperty if not
  const double delta_EL = ptmp.set( d, this );
  stmp.set( d, ptmp, delta_EL, this );

  // make sure that properties to be set in parent class consistent
  EpropArchivingNode::set_status( d );

  P_ = ptmp;
  S_ = stmp;
}

} // namespace nest

#endif // EPROP_READOUT_H
