/*
 *  adjustentry.cpp
 *
 *  This file is part of NEST
 *
 *  Copyright (C) 2010 by
 *  The NEST Initiative
 *
 *  See the file AUTHORS for details.
 *
 *  Permission is granted to compile and modify
 *  this file for non-commercial use.
 *  See the file LICENSE for details.
 *
 */

#include "adjustentry.h"

namespace nest
{
  adjustentry::adjustentry() :
    t_lastspike_(-1.0),
    old_weight_(-1.0),
    t_received_(-1.0),
    c_()
  { }

  adjustentry::adjustentry(double_t t_lastspike,
			   double_t old_weight,
			   double_t t_received,
			   Connection* c) :
    t_lastspike_(t_lastspike),
    old_weight_(old_weight),
    t_received_(t_received),
    c_(c)
  { } 
}
