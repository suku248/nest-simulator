/*
 *  nest_names.cpp
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
#include "nest_names.h"

namespace nest
{

namespace names
{
const Name A_LTD( "A_LTD" );
const Name A_LTD_const( "A_LTD_const" );
const Name A_LTP( "A_LTP" );
const Name A_minus( "A_minus" );
const Name A_plus( "A_plus" );
const Name Act_m( "Act_m" );
const Name Act_n( "Act_n" );
const Name AMPA( "AMPA" );
const Name Aminus( "Aminus" );
const Name Aminus_triplet( "Aminus_triplet" );
const Name Aplus( "Aplus" );
const Name Aplus_triplet( "Aplus_triplet" );
const Name ASCurrents( "ASCurrents" );
const Name ASCurrents_sum( "ASCurrents_sum" );
const Name a( "a" );
const Name a_acausal( "a_acausal" );
const Name a_causal( "a_causal" );
const Name a_thresh_th( "a_thresh_th" );
const Name a_thresh_tl( "a_thresh_tl" );
const Name acceptable_latency( "acceptable_latency" );
const Name activity( "activity" );
const Name adapt_beta( "adapt_beta" );
const Name adapt_tau( "adapt_tau" );
const Name adaptation( "adaptation" );
const Name adapting_threshold( "adapting_threshold" );
const Name adaptive_target_buffers( "adaptive_target_buffers" );
const Name add_compartments( "add_compartments" );
const Name add_receptors( "add_receptors" );
const Name after_spike_currents( "after_spike_currents" );
const Name ahp_bug( "ahp_bug" );
const Name allow_autapses( "allow_autapses" );
const Name allow_multapses( "allow_multapses" );
const Name allow_offgrid_times( "allow_offgrid_times" );
const Name allow_oversized_mask( "allow_oversized_mask" );
const Name alpha( "alpha" );
const Name alpha_1( "alpha_1" );
const Name alpha_2( "alpha_2" );
const Name amp_slow( "amp_slow" );
const Name amplitude( "amplitude" );
const Name amplitude_times( "amplitude_times" );
const Name amplitude_values( "amplitude_values" );
const Name anchor( "anchor" );
const Name archiver_length( "archiver_length" );
const Name asc_amps( "asc_amps" );
const Name asc_decay( "asc_decay" );
const Name asc_init( "asc_init" );
const Name asc_r( "asc_r" );
const Name available( "available" );
const Name average_gradient( "average_gradient" );
const Name axonal_delay( "axonal_delay" );
const Name azimuth_angle( "azimuth_angle" );

const Name b( "b" );
const Name batch_size( "batch_size" );
const Name beta( "beta" );
const Name beta_1( "beta_1" );
const Name beta_2( "beta_2" );
const Name beta_Ca( "beta_Ca" );
const Name biological_time( "biological_time" );
const Name box( "box" );
const Name buffer_size( "buffer_size" );
const Name buffer_size_spike_data( "buffer_size_spike_data" );
const Name buffer_size_target_data( "buffer_size_target_data" );

const Name C_m( "C_m" );
const Name Ca( "Ca" );
const Name Ca_astro( "Ca_astro" );
const Name Ca_tot( "Ca_tot" );
const Name c( "c" );
const Name c_1( "c_1" );
const Name c_2( "c_2" );
const Name c_3( "c_3" );
const Name c_reg( "c_reg" );
const Name capacity( "capacity" );
const Name center( "center" );
const Name circular( "circular" );
const Name clear( "clear" );
const Name comp_idx( "comp_idx" );
const Name comparator( "comparator" );
const Name compartments( "compartments" );
const Name configbit_0( "configbit_0" );
const Name configbit_1( "configbit_1" );
const Name connection_count( "connection_count" );
const Name connection_rules( "connection_rules" );
const Name connection_type( "connection_type" );
const Name consistent_integration( "consistent_integration" );
const Name continuous( "continuous" );
const Name count_covariance( "count_covariance" );
const Name count_histogram( "count_histogram" );
const Name covariance( "covariance" );

const Name Delta_T( "Delta_T" );
const Name Delta_V( "Delta_V" );
const Name d( "d" );
const Name data( "data" );
const Name data_path( "data_path" );
const Name data_prefix( "data_prefix" );
const Name dead_time( "dead_time" );
const Name dead_time_random( "dead_time_random" );
const Name dead_time_shape( "dead_time_shape" );
const Name delay( "delay" );
const Name delay_u_bars( "delay_u_bars" );
const Name deliver_interval( "deliver_interval" );
const Name delta( "delta" );
const Name delta_IP3( "delta_IP3" );
const Name delta_P( "delta_P" );
const Name delta_tau( "delta_tau" );
const Name dendritic_curr( "dendritic_curr" );
const Name dendritic_delay( "dendritic_delay" );
const Name dendritic_exc( "dendritic_exc" );
const Name dendritic_inh( "dendritic_inh" );
const Name dg( "dg" );
const Name dg_ex( "dg_ex" );
const Name dg_in( "dg_in" );
const Name dI_syn_ex( "dI_syn_ex" );
const Name dI_syn_in( "dI_syn_in" );
const Name dict_miss_is_error( "dict_miss_is_error" );
const Name diffusion_factor( "diffusion_factor" );
const Name dimension( "dimension" );
const Name distal_curr( "distal_curr" );
const Name distal_exc( "distal_exc" );
const Name distal_inh( "distal_inh" );
const Name drift_factor( "drift_factor" );
const Name driver_readout_time( "driver_readout_time" );
const Name dt( "dt" );
const Name dU( "U" );

const Name E_ahp( "E_ahp" );
const Name E_ex( "E_ex" );
const Name E_in( "E_in" );
const Name E_K( "E_K" );
const Name E_L( "E_L" );
const Name E_Na( "E_Na" );
const Name E_rev( "E_rev" );
const Name E_rev_AMPA( "E_rev_AMPA" );
const Name E_rev_GABA_A( "E_rev_GABA_A" );
const Name E_rev_GABA_B( "E_rev_GABA_B" );
const Name E_rev_h( "E_rev_h" );
const Name E_rev_KNa( "E_rev_KNa" );
const Name E_rev_NaP( "E_rev_NaP" );
const Name E_rev_NMDA( "E_rev_NMDA" );
const Name E_rev_T( "E_rev_T" );
const Name E_rr( "E_rr" );
const Name E_sfa( "E_sfa" );
const Name e_L( "e_L" );
const Name edge_wrap( "edge_wrap" );
const Name element_type( "element_type" );
const Name elements( "elements" );
const Name elementsize( "elementsize" );
const Name ellipsoidal( "ellipsoidal" );
const Name elliptical( "elliptical" );
const Name eprop_learning_window( "eprop_learning_window" );
const Name eprop_reset_neurons_on_update( "eprop_reset_neurons_on_update" );
const Name eprop_update_interval( "eprop_update_interval" );
const Name eps( "eps" );
const Name epsilon( "epsilon" );
const Name equilibrate( "equilibrate" );
const Name error_signal( "error_signal" );
const Name eta( "eta" );
const Name events( "events" );
const Name extent( "extent" );

const Name f_target( "f_target" );
const Name file_extension( "file_extension" );
const Name filename( "filename" );
const Name filenames( "filenames" );
const Name frequency( "frequency" );
const Name frozen( "frozen" );

const Name GABA_A( "GABA_A" );
const Name GABA_B( "GABA_B" );
const Name g( "g" );
const Name g_AMPA( "g_AMPA" );
const Name g_ahp( "g_ahp" );
const Name g_C( "g_C" );
const Name g_ex( "g_ex" );
const Name g_GABA_A( "g_GABA_A" );
const Name g_GABA_B( "g_GABA_B" );
const Name g_in( "g_in" );
const Name g_K( "g_K" );
const Name g_KL( "g_KL" );
const Name g_Kv1( "g_Kv1" );
const Name g_Kv3( "g_Kv3" );
const Name g_L( "g_L" );
const Name g_m( "g_m" );
const Name g_Na( "g_Na" );
const Name g_NaL( "g_NaL" );
const Name g_NMDA( "g_NMDA" );
const Name g_pd( "g_pd" );
const Name g_peak_AMPA( "g_peak_AMPA" );
const Name g_peak_GABA_A( "g_peak_GABA_A" );
const Name g_peak_GABA_B( "g_peak_GABA_B" );
const Name g_peak_h( "g_peak_h" );
const Name g_peak_KNa( "g_peak_KNa" );
const Name g_peak_NaP( "g_peak_NaP" );
const Name g_peak_NMDA( "g_peak_NMDA" );
const Name g_peak_T( "g_peak_T" );
const Name g_ps( "g_ps" );
const Name g_rr( "g_rr" );
const Name g_sfa( "g_sfa" );
const Name g_sp( "g_sp" );
const Name gamma( "gamma" );
const Name gamma_shape( "gamma_shape" );
const Name gaussian( "gaussian" );
const Name global_id( "global_id" );
const Name grid( "grid" );
const Name grid3d( "grid3d" );
const Name growth_curve( "growth_curve" );
const Name growth_curves( "growth_curves" );
const Name growth_factor_buffer_spike_data( "growth_factor_buffer_spike_data" );
const Name growth_factor_buffer_target_data( "growth_factor_buffer_target_data" );
const Name growth_rate( "growth_rate" );
const Name gsl_error_tol( "gsl_error_tol" );

const Name h( "h" );
const Name h_IP3R( "h_IP3R" );
const Name has_connections( "has_connections" );
const Name has_delay( "has_delay" );
const Name histogram( "histogram" );
const Name histogram_correction( "histogram_correction" );

const Name I( "I" );
const Name I_ahp( "I_ahp" );
const Name I_e( "I_e" );
const Name I_h( "I_h" );
const Name I_KNa( "I_KNa" );
const Name I_NaP( "I_NaP" );
const Name I_SIC( "I_SIC" );
const Name I_sp( "I_sp" );
const Name I_stc( "I_stc" );
const Name I_syn( "I_syn" );
const Name I_syn_ex( "I_syn_ex" );
const Name I_syn_in( "I_syn_in" );
const Name I_T( "I_T" );
const Name Inact_h( "Inact_h" );
const Name Inact_p( "Inact_p" );
const Name IP3( "IP3" );
const Name IP3_0( "IP3_0" );
const Name indegree( "indegree" );
const Name index_map( "index_map" );
const Name individual_spike_trains( "individual_spike_trains" );
const Name init_flag( "init_flag" );
const Name inner_radius( "inner_radius" );
const Name instant_unblock_NMDA( "instant_unblock_NMDA" );
const Name instantiations( "instantiations" );
const Name interval( "interval" );
const Name is_refractory( "is_refractory" );

const Name Kd_act( "Kd_act" );
const Name Kd_IP3_1( "Kd_IP3_1" );
const Name Kd_IP3_2( "Kd_IP3_2" );
const Name Kd_inh( "Kd_inh" );
const Name Km_SERCA( "Km_SERCA" );
const Name Kplus( "Kplus" );
const Name Kplus_triplet( "Kplus_triplet" );
const Name k_IP3R( "k_IP3R" );
const Name keep_source_table( "keep_source_table" );
const Name kernel( "kernel" );

const Name label( "label" );
const Name lambda( "lambda" );
const Name lambda_0( "lambda_0" );
const Name learning_signal( "learning_signal" );
const Name len_kernel( "len_kernel" );
const Name linear( "linear" );
const Name linear_summation( "linear_summation" );
const Name local( "local" );
const Name local_num_threads( "local_num_threads" );
const Name local_spike_counter( "local_spike_counter" );
const Name lookuptable_0( "lookuptable_0" );
const Name lookuptable_1( "lookuptable_1" );
const Name lookuptable_2( "lookuptable_2" );
const Name loss( "loss" );
const Name lower_left( "lower_left" );

const Name m( "m" );
const Name major_axis( "major_axis" );
const Name make_symmetric( "make_symmetric" );
const Name mask( "mask" );
const Name max( "max" );
const Name max_buffer_size_target_data( "max_buffer_size_target_data" );
const Name max_delay( "max_delay" );
const Name max_num_syn_models( "max_num_syn_models" );
const Name max_update_time( "max_update_time" );
const Name mean( "mean" );
const Name memory( "memory" );
const Name message_times( "messages_times" );
const Name messages( "messages" );
const Name min( "min" );
const Name min_delay( "min_delay" );
const Name min_update_time( "min_update_time" );
const Name minor_axis( "minor_axis" );
const Name model( "model" );
const Name model_id( "model_id" );
const Name modules( "modules" );
const Name mpi_address( "mpi_address" );
const Name ms_per_tic( "ms_per_tic" );
const Name mu( "mu" );
const Name mu_minus( "mu_minus" );
const Name mu_plus( "mu_plus" );
const Name mult_coupling( "mult_coupling" );
const Name music_channel( "music_channel" );

const Name N( "N" );
const Name N_channels( "N_channels" );
const Name N_NaP( "N_NaP" );
const Name N_T( "N_T" );
const Name NMDA( "NMDA" );
const Name n( "n" );
const Name n_events( "n_events" );
const Name n_messages( "n_messages" );
const Name n_proc( "n_proc" );
const Name n_receptors( "n_receptors" );
const Name n_synapses( "n_synapses" );
const Name network_size( "network_size" );
const Name neuron( "neuron" );
const Name next_readout_time( "next_readout_time" );
const Name no_synapses( "no_synapses" );
const Name node_models( "node_models" );
const Name node_uses_wfr( "node_uses_wfr" );
const Name noise( "noise" );
const Name noisy_rate( "noisy_rate" );
const Name num_connections( "num_connections" );
const Name num_corrections( "num_corrections" );
const Name num_processes( "num_processes" );
const Name number_of_connections( "number_of_connections" );

const Name off_grid_spiking( "off_grid_spiking" );
const Name offset( "offset" );
const Name offsets( "offsets" );
const Name omega( "omega" );
const Name optimizer( "optimizer" );
const Name order( "order" );
const Name origin( "origin" );
const Name other( "other" );
const Name outdegree( "outdegree" );
const Name outer_radius( "outer_radius" );
const Name overwrite_files( "overwrite_files" );

const Name P( "P" );
const Name p( "p" );
const Name p_copy( "p_copy" );
const Name p_primary( "p_primary" );
const Name p_third_if_primary( "p_third_if_primary" );
const Name p_transmit( "p_transmit" );
const Name pairwise_bernoulli_on_source( "pairwise_bernoulli_on_source" );
const Name pairwise_bernoulli_on_target( "pairwise_bernoulli_on_target" );
const Name pairwise_avg_num_conns( "pairwise_avg_num_conns" );
const Name params( "params" );
const Name parent_idx( "parent_idx" );
const Name phase( "phase" );
const Name phi_max( "phi_max" );
const Name pairwise_poisson( "pairwise_poisson" );
const Name polar_angle( "polar_angle" );
const Name polar_axis( "polar_axis" );
const Name pool_size( "pool_size" );
const Name pool_type( "pool_type" );
const Name port( "port" );
const Name port_name( "port_name" );
const Name port_width( "port_width" );
const Name ports( "ports" );
const Name positions( "positions" );
const Name post_synaptic_element( "post_synaptic_element" );
const Name post_trace( "post_trace" );
const Name pre_synaptic_element( "pre_synaptic_element" );
const Name precise_times( "precise_times" );
const Name precision( "precision" );
const Name prepared( "prepared" );
const Name primary( "primary" );
const Name print_time( "print_time" );
const Name proximal_curr( "proximal_curr" );
const Name proximal_exc( "proximal_exc" );
const Name proximal_inh( "proximal_inh" );
const Name psi( "psi" );
const Name published( "published" );
const Name pulse_times( "pulse_times" );

const Name q_rr( "q_rr" );
const Name q_sfa( "q_sfa" );
const Name q_stc( "q_stc" );

const Name radius( "radius" );
const Name rate( "rate" );
const Name rate_IP3R( "rate_IP3R" );
const Name rate_L( "rate_L" );
const Name rate_SERCA( "rate_SERCA" );
const Name rate_slope( "rate_slope" );
const Name rate_times( "rate_times" );
const Name rate_values( "rate_values" );
const Name ratio_ER_cyt( "ratio_ER_cyt" );
const Name readout_cycle_duration( "readout_cycle_duration" );
const Name readout_signal( "readout_signal" );
const Name readout_signal_unnorm( "readout_signal_unnorm" );
const Name receptor_idx( "receptor_idx" );
const Name receptor_type( "receptor_type" );
const Name receptor_types( "receptor_types" );
const Name receptors( "receptors" );
const Name record_from( "record_from" );
const Name record_to( "record_to" );
const Name recordables( "recordables" );
const Name recorder( "recorder" );
const Name recording_backends( "recording_backends" );
const Name rectangular( "rectangular" );
const Name rectify_output( "rectify_output" );
const Name rectify_rate( "rectify_rate" );
const Name recv_buffer_size_secondary_events( "recv_buffer_size_secondary_events" );
const Name refractory_input( "refractory_input" );
const Name registered( "registered" );
const Name regular_spike_arrival( "regular_spike_arrival" );
const Name relative_amplitude( "relative_amplitude" );
const Name requires_symmetric( "requires_symmetric" );
const Name reset_pattern( "reset_pattern" );
const Name resolution( "resolution" );
const Name rho( "rho" );
const Name rng_seed( "rng_seed" );
const Name rng_type( "rng_type" );
const Name rng_types( "rng_types" );
const Name rport( "receptor" );
const Name rule( "rule" );

const Name S( "S" );
const Name S_act_NMDA( "S_act_NMDA" );
const Name SIC_scale( "SIC_scale" );
const Name SIC_th( "SIC_th" );
const Name sdev( "sdev" );
const Name send_buffer_size_secondary_events( "send_buffer_size_secondary_events" );
const Name senders( "senders" );
const Name shape( "shape" );
const Name shift_now_spikes( "shift_now_spikes" );
const Name shrink_factor_buffer_spike_data( "shrink_factor_buffer_spike_data" );
const Name sigma( "sigma" );
const Name sigmoid( "sigmoid" );
const Name sion_chunksize( "sion_chunksize" );
const Name sion_collective( "sion_collective" );
const Name sion_n_files( "sion_n_files" );
const Name size_of( "sizeof" );
const Name soma_curr( "soma_curr" );
const Name soma_exc( "soma_exc" );
const Name soma_inh( "soma_inh" );
const Name source( "source" );
const Name spherical( "spherical" );
const Name spike_buffer_grow_extra( "spike_buffer_grow_extra" );
const Name spike_buffer_resize_log( "spike_buffer_resize_log" );
const Name spike_buffer_shrink_limit( "spike_buffer_shrink_limit" );
const Name spike_buffer_shrink_spare( "spike_buffer_shrink_spare" );
const Name spike_dependent_threshold( "spike_dependent_threshold" );
const Name spike_multiplicities( "spike_multiplicities" );
const Name spike_times( "spike_times" );
const Name spike_weights( "spike_weights" );
const Name start( "start" );
const Name state( "state" );
const Name std( "std" );
const Name std_mod( "std_mod" );
const Name stimulation_backends( "stimulation_backends" );
const Name stimulator( "stimulator" );
const Name stimulus_source( "stimulus_source" );
const Name stop( "stop" );
const Name structural_plasticity_synapses( "structural_plasticity_synapses" );
const Name structural_plasticity_update_interval( "structural_plasticity_update_interval" );
const Name surrogate_gradient( "surrogate_gradient" );
const Name surrogate_gradient_function( "surrogate_gradient_function" );
const Name synapse_id( "synapse_id" );
const Name synapse_label( "synapse_label" );
const Name synapse_model( "synapse_model" );
const Name synapse_modelid( "synapse_modelid" );
const Name synapse_models( "synapse_models" );
const Name synapse_parameters( "synapse_parameters" );
const Name synapses_per_driver( "synapses_per_driver" );
const Name synaptic_elements( "synaptic_elements" );
const Name synaptic_elements_param( "synaptic_elements_param" );
const Name synaptic_endpoint( "synaptic_endpoint" );

const Name T_max( "T_max" );
const Name T_min( "T_min" );
const Name Tstart( "Tstart" );
const Name Tstop( "Tstop" );
const Name t_clamp( "t_clamp" );
const Name t_ref( "t_ref" );
const Name t_ref_abs( "t_ref_abs" );
const Name t_ref_remaining( "t_ref_remaining" );
const Name t_ref_tot( "t_ref_tot" );
const Name t_spike( "t_spike" );
const Name target( "target" );
const Name target_signal( "target_signal" );
const Name target_thread( "target_thread" );
const Name targets( "targets" );
const Name tau( "tau" );
const Name tau_1( "tau_1" );
const Name tau_2( "tau_2" );
const Name tau_ahp( "tau_ahp" );
const Name tau_Ca( "tau_Ca" );
const Name tau_c( "tau_c" );
const Name tau_D_KNa( "tau_D_KNa" );
const Name tau_Delta( "tau_Delta" );
const Name tau_decay( "tau_decay" );
const Name tau_decay_AMPA( "tau_decay_AMPA" );
const Name tau_decay_ex( "tau_decay_ex" );
const Name tau_decay_GABA_A( "tau_decay_GABA_A" );
const Name tau_decay_GABA_B( "tau_decay_GABA_B" );
const Name tau_decay_in( "tau_decay_in" );
const Name tau_decay_NMDA( "tau_decay_NMDA" );
const Name tau_epsp( "tau_epsp" );
const Name tau_fac( "tau_fac" );
const Name tau_IP3( "tau_IP3" );
const Name tau_Mg_fast_NMDA( "tau_Mg_fast_NMDA" );
const Name tau_Mg_slow_NMDA( "tau_Mg_slow_NMDA" );
const Name tau_m( "tau_m" );
const Name tau_max( "tau_max" );
const Name tau_minus( "tau_minus" );
const Name tau_minus_stdp( "tau_minus_stdp" );
const Name tau_minus_triplet( "tau_minus_triplet" );
const Name tau_m_readout( "tau_m_readout" );
const Name tau_n( "tau_n" );
const Name tau_P( "tau_P" );
const Name tau_plus( "tau_plus" );
const Name tau_plus_triplet( "tau_plus_triplet" );
const Name tau_psc( "tau_psc" );
const Name tau_rec( "tau_rec" );
const Name tau_reset( "tau_reset" );
const Name tau_rise( "tau_rise" );
const Name tau_rise_AMPA( "tau_rise_AMPA" );
const Name tau_rise_ex( "tau_rise_ex" );
const Name tau_rise_GABA_A( "tau_rise_GABA_A" );
const Name tau_rise_GABA_B( "tau_rise_GABA_B" );
const Name tau_rise_in( "tau_rise_in" );
const Name tau_rise_NMDA( "tau_rise_NMDA" );
const Name tau_rr( "tau_rr" );
const Name tau_sfa( "tau_sfa" );
const Name tau_spike( "tau_spike" );
const Name tau_stc( "tau_stc" );
const Name tau_syn( "tau_syn" );
const Name tau_syn_ex( "tau_syn_ex" );
const Name tau_syn_fast( "tau_syn_fast" );
const Name tau_syn_in( "tau_syn_in" );
const Name tau_syn_slow( "tau_syn_slow" );
const Name tau_theta( "tau_theta" );
const Name tau_u_bar_bar( "tau_u_bar_bar" );
const Name tau_u_bar_minus( "tau_u_bar_minus" );
const Name tau_u_bar_plus( "tau_u_bar_plus" );
const Name tau_V_th( "tau_V_th" );
const Name tau_v( "tau_v" );
const Name tau_vacant( "tau_vacant" );
const Name tau_w( "tau_w" );
const Name tau_x( "tau_x" );
const Name tau_z( "tau_z" );
const Name th_spike_add( "th_spike_add" );
const Name th_spike_decay( "th_spike_decay" );
const Name th_voltage_decay( "th_voltage_decay" );
const Name th_voltage_index( "th_voltage_index" );
const Name theta( "theta" );
const Name theta_eq( "theta_eq" );
const Name theta_ex( "theta_ex" );
const Name theta_in( "theta_in" );
const Name theta_minus( "theta_minus" );
const Name theta_plus( "theta_plus" );
const Name third_in( "third_in" );
const Name third_out( "third_out" );
const Name thread( "thread" );
const Name thread_local_id( "thread_local_id" );
const Name threshold( "threshold" );
const Name threshold_spike( "threshold_spike" );
const Name threshold_voltage( "threshold_voltage" );
const Name tics_per_ms( "tics_per_ms" );
const Name tics_per_step( "tics_per_step" );
const Name time_collocate_spike_data( "time_collocate_spike_data" );
const Name time_communicate_prepare( "time_communicate_prepare" );
const Name time_communicate_spike_data( "time_communicate_spike_data" );
const Name time_communicate_target_data( "time_communicate_target_data" );
const Name time_construction_connect( "time_construction_connect" );
const Name time_construction_create( "time_construction_create" );
const Name time_deliver_secondary_data( "time_deliver_secondary_data" );
const Name time_deliver_spike_data( "time_deliver_spike_data" );
const Name time_gather_secondary_data( "time_gather_secondary_data" );
const Name time_gather_spike_data( "time_gather_spike_data" );
const Name time_gather_target_data( "time_gather_target_data" );
const Name time_in_steps( "time_in_steps" );
const Name time_simulate( "time_simulate" );
const Name time_update( "time_update" );
const Name times( "times" );
const Name to_do( "to_do" );
const Name total_num_virtual_procs( "total_num_virtual_procs" );
const Name type( "type" );
const Name type_id( "type_id" );

const Name U( "U" );
const Name U_m( "U_m" );
const Name u( "u" );
const Name u_bar_bar( "u_bar_bar" );
const Name u_bar_minus( "u_bar_minus" );
const Name u_bar_plus( "u_bar_plus" );
const Name u_ref_squared( "u_ref_squared" );
const Name update_time_limit( "update_time_limit" );
const Name upper_right( "upper_right" );
const Name use_compressed_spikes( "use_compressed_spikes" );
const Name use_wfr( "use_wfr" );

const Name v( "v" );
const Name V_act_NMDA( "V_act_NMDA" );
const Name V_clamp( "V_clamp" );
const Name v_comp( "v_comp" );
const Name V_epsp( "V_epsp" );
const Name V_m( "V_m" );
const Name V_min( "V_min" );
const Name V_noise( "V_noise" );
const Name V_peak( "V_peak" );
const Name V_reset( "V_reset" );
const Name V_T( "V_T" );
const Name V_T_star( "V_T_star" );
const Name V_th( "V_th" );
const Name V_th_adapt( "V_th_adapt" );
const Name V_th_alpha_1( "V_th_alpha_1" );
const Name V_th_alpha_2( "V_th_alpha_2" );
const Name V_th_max( "V_th_max" );
const Name V_th_rest( "V_th_rest" );
const Name V_th_v( "V_th_v" );
const Name voltage_clamp( "voltage_clamp" );
const Name voltage_reset_add( "voltage_reset_add" );
const Name voltage_reset_fraction( "voltage_reset_fraction" );
const Name volume_transmitter( "volume_transmitter" );
const Name vp( "vp" );

const Name Wmax( "Wmax" );
const Name Wmin( "Wmin" );
const Name w( "w" );
const Name weight( "weight" );
const Name weight_per_lut_entry( "weight_per_lut_entry" );
const Name weight_recorder( "weight_recorder" );
const Name weights( "weights" );
const Name wfr_comm_interval( "wfr_comm_interval" );
const Name wfr_interpolation_order( "wfr_interpolation_order" );
const Name wfr_max_iterations( "wfr_max_iterations" );
const Name wfr_tol( "wfr_tol" );
const Name with_reset( "with_reset" );

const Name x( "x" );
const Name x_bar( "x_bar" );

const Name y( "y" );
const Name y_0( "y_0" );
const Name y_1( "y_1" );

const Name z( "z" );
const Name z_connected( "z_connected" );

} // namespace names

} // namespace nest
