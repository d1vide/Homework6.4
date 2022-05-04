#pragma once
#include <iostream>

class Complex {
private:
	double real;
	double imag;
public:

	Complex();
	Complex(double r, double i);


	Complex& sum(Complex x);
	Complex& minus(Complex x);
	Complex& multiplication(Complex x);
	Complex& divide(Complex x);

	Complex& sum(double x);
	Complex& minus(double x);
	Complex& multiplication(double x);
	Complex& divide(double x);


	void printComplex();

	void set_imag(double im);
	double get_imag();

	void set_real(double re);
	double get_real();
	~Complex();
};