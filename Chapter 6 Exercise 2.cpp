#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main()
{
    double fahrenheit;

    cout << "Fahrenheit\tCelsius" << endl;
    cout << "------------------------" << endl;

    for (fahrenheit = 0; fahrenheit <= 100; fahrenheit += 5)
    {
        cout << fixed << setprecision(1);
        cout << fahrenheit << "\t\t"
            << celsius(fahrenheit) << endl;
    }

    return 0;
}
