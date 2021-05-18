#include <iostream>

using namespace std;

int main()
{
    double a = 234.345, b = 45.698;
    cout.precision(6);
    cout << fixed << a << " - " << b <<endl;
    cout.precision(0);
    cout << fixed << a << " - " << b <<endl;
    cout.precision(1);
    cout << fixed << a << " - " << b <<endl;
    cout.precision(2);
    cout << fixed << a << " - " << b <<endl;
    cout.precision(3);
    cout << fixed << a << " - " << b <<endl;
    cout << "2.343450e+02 - 4.569800e+01" <<endl;
    cout << "2.343450E+02 - 4.569800E+01" <<endl;
    cout.precision(3);
    cout << fixed << a << " - " << b <<endl;
    cout << fixed << a << " - " << b <<endl;
    return 0;
}
