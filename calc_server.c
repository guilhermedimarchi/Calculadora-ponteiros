/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"

int *
soma_1_svc(valores *argp, struct svc_req *rqstp)
{
	static int  result;
	
	result = argp->v1 + argp->v2;

	return &result;
}
