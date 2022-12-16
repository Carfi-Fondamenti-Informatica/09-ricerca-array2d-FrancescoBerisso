#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    char list[10][20];
    char nomi[20];
    int p = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 20; j++){
            nomi[j] = ' ';
            list[i][j] = ' ';
        }
    }
    for(int i = 0; i < 10; i++){
        cin >> list[i];
    }
    cin >> nomi;
    if(comp(list,p,nomi)) cout << p;
    else cout << "non presente";
    return 0;
}
