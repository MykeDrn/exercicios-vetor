#include <iostream>
using namespace std;

int main(){
    int n[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 2, 3, 4, 5, 6, 7, 8, 9, 10}, a, cont = 0, eq = 0;
    cout << "informe o numero: ";
    cin >> a;
    for(cont; cont < 20; cont++){
            if(n[cont]==a){
                eq++;
            }
    }
    cout << "\no numero informado  aparece " << eq << " vezes no vetor n";
}

