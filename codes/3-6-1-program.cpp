#include "../include/std_lib_facilities.h"

int main()
{
    int num_de_palavras = 0;
    string anterior = "";
    string atual;
    while (cin >> atual){
        ++num_de_palavras;
        if(anterior == atual)
            cout << "palavra numero" << num_de_palavras
                 << "repetida: " << atual << '\n';
        anterior = atual;
    }
}