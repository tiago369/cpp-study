#include "../include/std_lib_facilities.h"

int main()
{
    string anterior ="";
    string atual;
    while(cin>>atual){
        if(anterior == atual)
            cout << "palavra repetida: " << atual << '\n';
        anterior = atual;
    }
}