#include <iostream>
using namespace std;

int n1, n2; //variáveis globais, acessíveis em outras funções


int main(){

    //Operadores matemáticos: + - / * % ()

    int n3, n4; //variáveis locais, não acessíveis em outros blocos de funções.
    int res,res2;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res = n1/n2;
    res2 = n1%n2;

    cout << "Divisao: " << res << "\n" << "Resto: " << res2 << "\n\n";
    return 0;
}

