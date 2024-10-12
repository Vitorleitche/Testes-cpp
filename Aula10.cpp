#include <iostream>
using namespace std;

int main(){

    float n1,n2,res,tol;

    cout << "Nota P1: ";
    cin >> n1;

    cout << "Nota P2: ";
    cin >> n2;

    tol = 0.2;

    res = tol + (n1+n2)/2;

    /* Adicionando recuperação:
        res >= 6  Aprovado
        5<= res >= 6
        res <= 5 Reprovado
    
    */
    if(res >= 6){
        cout << "\nAprovado\n";
    } else if(res >=5 ){
        cout << "\nRecuperacao\n";

    }else{
        cout << "\nReprovado\n";
    }

    system("pause");
    return 0;
}