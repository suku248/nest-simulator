/*
 *  adjustentry.h
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

#ifndef ADJUSTENTRY_H
#define ADJUSTENTRY_H

#include "nest.h"

namespace nest
{
  class Connection;

  struct adjustentry
  {
    adjustentry();

    adjustentry(double_t t_lastspike,
		double_t old_weight,
		double_t t_received,
		Connection* c);

      double_t t_lastspike_;
      double_t old_weight_;
      double_t t_received_;
      Connection* c_;
  };
}

#endif
