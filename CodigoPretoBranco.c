#include <stdio.h>
#include <stdlib.h>

int main(){
    int Niveis;
    scanf("%d", &Niveis);
    int digito[64], bola1[64], bola2[64];
    for(int i = 0; i > Niveis; i++){
        scanf("%d", &digito[i]);
        if(bola1[i] == digito[i]){
            bola2[i+1];
        } else if(bola1[i] != digito[i]){
            bola2[i+1];
        }
    }
    if(bola1[Niveis] == 1 && bola2[Niveis] ==-1){
        printf("\nbranca");
    }else if (bola1[Niveis] == 1 && bola2[Niveis] ==-1){
        printf("\nbranca");
    }else{
        printf("\npreta");
    }
    return 0;
}
