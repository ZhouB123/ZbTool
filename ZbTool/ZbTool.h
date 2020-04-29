#pragma once
#include<stdio.h>


#ifdef __cplusplus
extern "C" {
#endif


#if !defined (EXPORTAPI)
#define  EXPORTAPI  __declspec(dllexport)
#endif
	EXPORTAPI int test_sum(int a, int b);

#ifdef __cplusplus
}
#endif
