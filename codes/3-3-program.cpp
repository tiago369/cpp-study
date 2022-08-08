#include "../include/std_lib_facilities.h"

int main()
{
    cout << "Por favor, informe seu primeiro nome e sua idade\n";
    string first_name;
    int idade;
    cin >> first_name;
    cin >> idade;
    cout << "Oi," << first_name << "(idade" << idade << ")\n";
}