#include "../include/std_lib_facilities.h"

int main(){
    int a = 2000;
    char c = a;
    cout << c << '\n';
    int b = c;
    if(a != b)
        cout << "oops!:" << a << "!=" << b << '\n';
    else
        cout << "Uau! Temos caracteres grandes\n";
}