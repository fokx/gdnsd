/* Copyright © 2012 Brandon L Black <blblack@gmail.com>
 *
 * This file is part of gdnsd.
 *
 * gdnsd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * gdnsd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gdnsd.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _GDNSD_ZSCAN_H
#define _GDNSD_ZSCAN_H

#include "config.h"
#include "zlist.h"

// Actually scan the zonefile, creating the data
F_WUNUSED F_NONNULL
bool zscan_rfc1035(zone_t* zone, const char* fn);

#endif // _GDNSD_ZSCAN_H