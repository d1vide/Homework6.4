#include "Header.h"

Complex::Complex() {
	real = 0;
	imag = 0;
}

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

Complex& Complex::sum(Complex x) {
	Complex result(this->real + x.real, this->imag + x.imag);
	return result;
}

Complex& Complex::minus(Complex x) {
	Complex result(this->real - x.real, this->imag - x.imag);
	return result;
}

Complex& Complex::multiplication(Complex x) {
	Complex result(this->real * x.real - this->imag * x.imag, this->real * x.imag + this->imag * x.real);
	return result;
}

Complex& Complex::divide(Complex x) {
	Complex result((real * x.real + imag * x.imag) / (x.real * x.real + x.imag * x.imag), (x.real * imag - real * x.imag) / (x.real * x.real + x.imag * x.imag));
	return result;
}

void Complex::printComplex() {
	if (imag > 0) {
		std::cout << real << '+' << imag << 'i' << std::endl;
	}
	else if (imag < 0) {
		std::cout << real << '-' << abs(imag) << 'i' << std::endl;
	}
	else {
		std::cout << real << std::endl;
	}
}

void Complex::set_imag(double im) {
	imag = im;
}

double Complex::get_imag() {
	return imag;
}

void Complex::set_real(double re) {
	real = re;
}

double Complex::get_real() {
	return real;
}

Complex& Complex::sum(double x) {
	Complex result(this->real + x, this->imag);
	return result;
}

Complex& Complex::minus(double x) {
	Complex result(this->real - x, this->imag);
	return result;
}

Complex& Complex::multiplication(double x) {
	Complex result(this->real * x, this->imag * x);
	return result;
}

Complex& Complex::divide(double x) {
	Complex result(this->real / x, this->imag / x);
	return result;
}

Complex::~Complex() {

}