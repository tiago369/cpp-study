#include "../../include/std_lib_facilities.h"

int main()
{
    double miles, km;
    cout << "Milhas para Kilometros: \n";
    cout << "Numero de milhas: ";
    cin >> miles;
    km = miles * 1.609;
    cout << "E igual a " << km << " kilometros\n";
}