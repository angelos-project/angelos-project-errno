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
package org.angproj.io.err

/**
 * PosixError exception that is based on RuntimeException.
 *
 * @constructor
 *
 * @param message Complete error message to be displayed or logged.
 */
class PosixError(message: String, val errName: ErrName) : RuntimeException(message)