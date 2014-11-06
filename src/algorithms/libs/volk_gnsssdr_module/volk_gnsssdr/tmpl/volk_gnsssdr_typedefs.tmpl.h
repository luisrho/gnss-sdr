/*
 * Copyright 2011-2012 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_VOLK_GNSSSDR_TYPEDEFS
#define INCLUDED_VOLK_GNSSSDR_TYPEDEFS

#include <inttypes.h>
#include <volk_gnsssdr/volk_gnsssdr_complex.h>

#for $kern in $kernels
typedef void (*$(kern.pname))($kern.arglist_types);
#end for

#endif /*INCLUDED_VOLK_GNSSSDR_TYPEDEFS*/
