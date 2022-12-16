#include "lib.h"
bool comp(char list[10][20], int &p, char nomi[]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 20; j++){
            if(list[i][j] != nomi[j]){
                j = 20;
            }
            else{
                if(j == 19){
                    p = i;
                    return true;
                }
            }
        }
    }
    return false;
}
