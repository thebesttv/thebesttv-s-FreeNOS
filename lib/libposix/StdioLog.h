/*
 * Copyright (C) 2015 Niek Linnenbank
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __LIBARCH_STDIOLOG_H
#define __LIBARCH_STDIOLOG_H

#ifndef __HOST__
#include "Log.h"

/**
 * @addtogroup lib
 * @{
 *
 * @addtogroup libposix
 * @{
 */

/**
 * Log to standard output.
 */
class StdioLog : public Log
{
  public:

    /**
     * Constructor
     */
    StdioLog();

    /**
     * Write to the standard output.
     *
     * @param str String to write
     */
    virtual void write(const char *str);
};

/**
 * @}
 * @}
 */

#endif /* __HOST__ */
#endif /* __LIBARCH_STDIOLOG_H */
