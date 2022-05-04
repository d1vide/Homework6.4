#include "Header.h"

int main() {
	Complex a(10, -3);
	a.printComplex();
	double x = 10;
	a.sum(x).printComplex();
	a.minus(x).printComplex();
	a.multiplication(x).printComplex();
	a.divide(x).printComplex();
	return 0;
}
