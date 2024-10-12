#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Insira o valor num: " << "\n";
    cin >> num;
    
    if(num > 10){
        cout << "Valor de num MAIOR que 10";
    } 
    else{
        cout << "Valor MENOR ou IGUAL a 10";
        }


    return 0;
}