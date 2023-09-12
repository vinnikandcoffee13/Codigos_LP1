#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info[3]{
    float  DF = 1.0, SP = 2.0 , RJ = 3.0, ST = 4.0, PR = 5.0, RS = 6.0, AM = 7.0, AC = 8.0, RM = 9.0, BA = 10.0, CE = 21.0, PI = 22.0, MA = 23.0,PE = 24.0, GO = 25.0, MN = 26.0, PN = 27.0;
    float estados[], alcool[], gas[];
} info[3];

int main(){
    int x;
    scanf("%d", &x);
    info[].estados[x], info[].alcool[x], info[].gas[x];
    char resp[2] = "*";
    for(int j = 0; estados[j] < 27; j++){
        stdin(alcool[j]);
        gets(fflush);
        stdin(gas[j]);
        gets(fflush);
    }
    for(int i = 0; estados[i] < 27; i++){
        
        if( alcool[i] * 0.7 > gas[i]){
             resp[i] = alcool[i];
        }else{
            char resp[] = "*";
    }
    }
    return 0;
}
