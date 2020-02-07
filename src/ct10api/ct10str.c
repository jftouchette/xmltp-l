/*******************************************************************
 * ct10str.h
 *
 *  Copyright (c) 1996 Jocelyn Blanchet
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  (The file "COPYING" or "LICENSE" in a directory above this source file
 *  should contain a copy of the GNU Library General Public License text).
 *  -------------------------------------------------------------------------
 *
 * $Source: /ext_hd/cvs/ct10api/ct10str.c,v $
 * $Header: /ext_hd/cvs/ct10api/ct10str.c,v 1.3 2004/10/15 20:19:11 jf Exp $
 *
 * Intelligent string functions.
 *
 */

#ifdef WIN32
#include "ntunixfn.h"
#endif

void ct10strncpy(char *dest, char *src, int len)
{
	strncpy(dest,src,len);
	dest[len-1] = '\0';
}
