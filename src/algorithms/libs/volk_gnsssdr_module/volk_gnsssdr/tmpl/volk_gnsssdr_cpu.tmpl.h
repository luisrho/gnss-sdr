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

#ifndef INCLUDED_VOLK_GNSSSDR_CPU_H
#define INCLUDED_VOLK_GNSSSDR_CPU_H

#include <volk_gnsssdr/volk_gnsssdr_common.h>

__VOLK_DECL_BEGIN

struct VOLK_CPU {
    #for $arch in $archs
    int (*has_$arch.name) ();
    #end for
};

extern struct VOLK_CPU volk_gnsssdr_cpu;

void volk_gnsssdr_cpu_init ();
unsigned int volk_gnsssdr_get_lvarch ();

__VOLK_DECL_END

#endif /*INCLUDED_VOLK_GNSSSDR_CPU_H*/
