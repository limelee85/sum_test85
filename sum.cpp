#include "sum.h"

int sum(int a)
{
	int i, sum_=0;
	
	for(i=0; i<a; i++)
	{
		sum_+=i;
	}
	
	return sum_;
}
