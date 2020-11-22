#include <iostream>
using namespace std;

int main(){
    int n[10] = {5, 2, 8, 23, 66, 21, 98, 7, 9, 666}, cont = 0;
    for(cont; cont < 10; cont++){
            if (n[cont]== n[1]){
                cout << n[cont+1] << " \n";
             if(n[cont] >= n[2] && n[cont] <= n[9]){
                cout << n[cont-1] << " " << n[cont+1] << " \n";
            }else if (n[cont]==n[10]){
                cout << n[cont-1]<<" \n" ;

            }}}
}
