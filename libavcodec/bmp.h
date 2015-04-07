/*
 * internals for BMP codecs
 * Copyright (c) 2005 Mans Rullgard
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_BMP_H
#define AVCODEC_BMP_H

#include "avcodec.h"

typedef enum {
    BMP_RGB         =0,
    BMP_RLE8        =1,
    BMP_RLE4        =2,
    BMP_BITFIELDS   =3,
} BiCompression;

#endif /* AVCODEC_BMP_H */
