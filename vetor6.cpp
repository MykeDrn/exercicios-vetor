#include <iostream>
using namespace std;

int main(){
    int n[] = {3, 2, 8, 4, 5}, i[] = {3, 2, 8, 4, 5}, cont;
    for(cont = 0; cont < 5; cont++){
        n[cont] += i[cont];
        cout << "A soma de n e i no indice "<< cont << " é: " << n[cont] << " \n";
    }
}
