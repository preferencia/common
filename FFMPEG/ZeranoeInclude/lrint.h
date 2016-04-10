/*  
2   * SpanDSP - a series of DSP components for telephony  
3   *  
4   * tgmath.h - a fudge for MSVC, which lacks this header  
5   *  
6   * Written by Steve Underwood <steveu@coppice.org>  
7   *  
8   * Copyright (C) 2006 Michael Jerris  
9   *  
10   *  
11   * This file is released in the public domain.  
12   *  
13   */  

#if !defined(_TGMATH_H_)  
#define _TGMATH_H_  

#include <math.h>

#ifdef __cplusplus  
extern "C" {
#endif  

/* A kindofa rint() for VC++ (only kindofa, because rint should be type generic,  
and this one is purely float to int */
#if !defined(lrintf)
static inline long int lrintf(float a)  
{  
	long int i = 0;
	__asm  
	{  
		fld   a  
			fistp i  
	}  
	return i;  
}
static inline long int lrint(double a)  
{  
	long int i = 0;
	__asm  
	{  
		fld   a  
			fistp i  
	}  
	return i;  
}
#endif //

static inline int rintf(float a)  
{  
	int i = 0;
	__asm  
	{  
		fld   a  
			fistp i  
	}  
	return i;  
} 

#ifdef __cplusplus  
}  
#endif  

#endif 
