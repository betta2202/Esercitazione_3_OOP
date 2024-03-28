#include "ComplexNumber.hpp"
#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

ComplexNumber conjugate(ComplexNumber num)
{
    return ComplexNumber(num.real, -num.im);
}

ostream& operator<<(ostream& os, const ComplexNumber& num)
{
    if(num.im >= 0)
        os << num.real << "+" << num.im << "i";
    else
        os << num.real << num.im << "i";
    return os;
}

ComplexNumber operator +(const ComplexNumber& num1, const ComplexNumber& num2)
{
    return ComplexNumber(num1.real + num2.real, num1.im + num2.im);
}

bool operator == (const ComplexNumber& num1, const ComplexNumber& num2)
{
    double epsilon = numeric_limits<double>::epsilon();
    if(fabs(num1.real - num2.real) < epsilon &&
        fabs(num1.im - num2.im) < epsilon)
        return true;
    else
        return false;
}
