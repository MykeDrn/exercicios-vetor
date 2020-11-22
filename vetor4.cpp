#include <iostream>
using namespace std;

int main(){
    int n[5] = {1, 2, 3, 4, 5}, cont = 0, soma = 0;
    for(cont; cont < 5; cont++){
            soma += n[cont];
    }
    cout << soma;
}
