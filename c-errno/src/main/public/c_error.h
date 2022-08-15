/**
 * Copyright (c) 2022 by Kristoffer Paulsson <kristoffer.paulsson@talenten.se>.
 *
 * This software is available under the terms of the MIT license. Parts are licensed
 * under different terms if stated. The legal terms are attached to the LICENSE file
 * and are made available on:
 *
 *      https://opensource.org/licenses/MIT
 *
 * SPDX-License-Identifier: MIT
 *
 * Contributors:
 *      Kristoffer Paulsson - initial implementation
 */

#ifndef SRC_C_ERROR_H
#define SRC_C_ERROR_H

extern void clear_error();

extern unsigned int errno_count();

extern unsigned int errno_code(unsigned int index);

extern const char * errno_abbr(unsigned int index);

#endif //SRC_C_ERROR_H
