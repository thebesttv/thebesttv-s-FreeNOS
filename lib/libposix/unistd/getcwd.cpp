/*
 * Copyright (C) 2009 Niek Linnenbank
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

#include <string.h>
#include <errno.h>
#include "Runtime.h"
#include "unistd.h"

char *getcwd(char *buf, size_t size)    // 声明位于 unistd.h
{
    // Copy our current working directory
    // 函数调用位于 runtime.cpp，buf最长为 64，即 PATH_MAX = 64
    memcpy(buf, **getCurrentDirectory(), size);

    // Set errno
    errno = ESUCCESS;

    // Done
    return buf;
}
