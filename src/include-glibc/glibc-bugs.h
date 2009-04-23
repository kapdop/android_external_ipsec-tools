/*	$NetBSD: glibc-bugs.h,v 1.4 2006/09/09 16:22:08 manu Exp $	*/

#ifndef __GLIBC_BUGS_H__
#define __GLIBC_BUGS_H__ 1

#define _XOPEN_SOURCE 500

#ifdef ANDROID_CHANGES
#define yywrap() 1
#define YY_SKIP_YYWRAP
#else
#define _BSD_SOURCE
#endif

#include <features.h>
#include <sys/types.h>

#endif
