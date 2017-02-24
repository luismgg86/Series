#include "Series.h"

Series::Series(int n){
	this->n=n;
}

int Series::fibonacciIt(){

	if (this->n < 2)
		return n;

	int a=0;
	int b=1;
	int c=0;

	for (int i = 2; i <= this->n; ++i)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

int Series::fibonacciRec(int n){
	if (n < 2)
		return n;
	return fibonacciRec(n-1)+fibonacciRec(n-2);
}