#include "ComplexNumber.hpp"

int main()
{
    ComplexNumber n1(1, -2);
    ComplexNumber n2(1, 2.00002225545);

    cout << n1 << endl;

    ComplexNumber sum = n1 + n2;
    cout << "Sum => " << sum << endl;

    cout << "Complex conjugate of n1 => " << conjugate(n1) << endl;

    if((n1 == n2) == 0)
        cout << "The two complex numbers are different" << endl;
    else
        cout << "The two complex numbers are equal" << endl;

    return 0;
}
