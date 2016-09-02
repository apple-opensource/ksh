/***********************************************************************
*                                                                      *
*               This software is part of the ast package               *
*           Copyright (c) 1985-2007 AT&T Knowledge Ventures            *
*                      and is licensed under the                       *
*                  Common Public License, Version 1.0                  *
*                      by AT&T Knowledge Ventures                      *
*                                                                      *
*                A copy of the License is available at                 *
*            http://www.opensource.org/licenses/cpl1.0.txt             *
*         (with md5 checksum 059e8cd6165cb4c31e351f2b69388fd9)         *
*                                                                      *
*              Information and Software Systems Research               *
*                            AT&T Research                             *
*                           Florham Park NJ                            *
*                                                                      *
*                 Glenn Fowler <gsf@research.att.com>                  *
*                  David Korn <dgk@research.att.com>                   *
*                   Phong Vo <kpv@research.att.com>                    *
*                                                                      *
***********************************************************************/
#pragma prototyped
/*
 * common ast debug definitions
 * include after the ast headers
 */

#ifndef _DEBUG_H
#define _DEBUG_H

#include <ast.h>
#include <error.h>

#if DEBUG || _BLD_DEBUG
#define debug(x)	x
#define message(x)	do if (error_info.trace < 0) { error x; } while (0)
#define messagef(x)	do if (error_info.trace < 0) { errorf x; } while (0)
#else
#define debug(x)
#define message(x)
#define messagef(x)
#endif

#if _BLD_ast && defined(__EXPORT__)
#define extern		__EXPORT__
#endif

extern void		systrace(const char*);

#undef	extern

#endif
