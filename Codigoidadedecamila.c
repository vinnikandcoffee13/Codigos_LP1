#include<stdio.h>
#include<stdlib.h>
//Aluno: Vinicius Pereira Oliveira
//Turma: SI.2021.2
//Disciplina: Linguagem de Programacao I
int main () {
    int resultado = 0, val1, val2, val3;
    scanf ("%d, %d, %d", &val1, &val2, &val3);
    if (val1>=val2 && val1<=val3) {
        resultado=val1;
    }else if (val1>=val3 && val1<=val2) {
        resultado=val1;
    }else if (val2>=val1 && val2<=val3) {
        resultado=val2;
    }else if (val2>=val3 && val2<=val1) {
        resultado=val2;
    }else if (val3>=val1 && val3<=val2) {
        resultado=val3;
    }else if (val3>=val2 && val3<=val1) {
        resultado=val3;
    }
    printf ("%d", resultado);
}