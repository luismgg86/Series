#include "Series.h"

int main(){

	int n;

	std::cout<<"Ingrese un numero para calcular el fibonacci: "<<std::endl;
	std::cin>>n;

	Series s(n);
	std::cout<<"El fibonacci de "<<n<<" con el algoritmo iterativo es: "<<s.fibonacciIt()<<std::endl;
	std::cout<<"El fibonacci de "<<n<<" con el algoritmo recursivo es: "<<s.fibonacciRec(n)<<std::endl;

	return 0;
}