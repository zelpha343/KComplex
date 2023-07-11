#include "Complex.h"

Complex complex_init(float real, float imag) {
    Complex z;
    z->real = real;
    z->imag = imag;
    return z;
}

double get_length(Complex z) {
    return sqrt(pow(z->real, 2) + pow(z->imag, 2))
}

float get_principal_argument(Complex z) {
    return atan(z->imag / z->real);
}

void complex_add(Complex target, Complex a, Complex b) {
    target->real = a->real + b->real;
    target->imag = a->imag + b->imag;
}

void complex_multiply(Complex target, Complex a, Complex b){
    target->real = (a->real * b->real) - (a->imag * b->imag);
    target->imag = (a->real * b->imag) + (b->real * a->imag);
}