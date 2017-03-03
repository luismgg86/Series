#include "Series.h"
//Definicion del contructor
Series::Series(double n){
	this->n=n;
}
//Fibonacci iterativo
double Series::fibonacciIt(){

	if (this->n < 2)
		return n;

	double a=0;
	double b=1;
	double c=0;

	for (int i = 2; i <= this->n; ++i)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
//Fibonacci recursivo
double Series::fibonacciRec(double n){
	if (n < 2)
		return n;
	return fibonacciRec(n-1)+fibonacciRec(n-2);
}
//Factorial iterativo
double Series::factorialIt(){

	if(this->n < 2)
		return 1;

	double a=1;

	for (int i = 2; i <= this->n; ++i)
	{
		a=a*i;
	}
	return a;
}
//Factorial recursivo
double Series::factorialRec(double n){

	if (n < 2)
		return 1;

	return factorialRec(n-1)*n;
}
