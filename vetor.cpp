#include <iostream>
using namespace std;

int main(){
    int x = 2, y = 4;
    int v[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
    cout << v[x+2] << "\n";
    cout << v[v[x+y]] <<"\n";
    cout << v[v[5]] << "\n";
    cout << v[v[0]* v[3]] << "\n";
    cout << v[v[v[6]]] << "\n";
    cout << v[8-v[3]] << "\n";
}
