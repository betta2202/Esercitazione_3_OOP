

// Header guards

#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include<iostream>

using namespace std;

struct ComplexNumber
{
    double real;
    double im;

    // Constructor
    ComplexNumber(double a, double b)
    {
        real = a;
        im = b;
    }
};

// Function for the conjugate
ComplexNumber conjugate(ComplexNumber num);

ostream& operator<<(ostream& os, const ComplexNumber& num);

ComplexNumber operator +(const ComplexNumber& num1, const ComplexNumber& num2);

bool operator == (const ComplexNumber& num1, const ComplexNumber& num2);





#endif
