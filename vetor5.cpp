#include <iostream>
using namespace std;

int main(){
    int n[] = {3, 62, 12}, cont;
    for(cont = 0; cont <= 5; cont++){
        if (n[cont] > n[0]){
            n[0] = n[cont];
            }
    } cout << "O maior numero do vetor é: " << n[0] << "\n";
}
