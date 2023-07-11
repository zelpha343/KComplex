#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct {
    float real;
    float imag;
} *Complex;

Complex complex_init(float real, float imag);
double get_length(Complex z);
float get_principal_argument(Complex z);
void complex_add(Complex target, Complex a, Complex b);
void complex_multiply(Complex target, Complex a, Complex b);