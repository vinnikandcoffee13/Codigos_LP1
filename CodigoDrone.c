#include <stdio.h>
//Aluno: Vinicius Pereira Oliveira
//Turma: SI.2021.2
//Disciplina: Linguagem de Programacao I
int main(){
  int A, B, C, L, H;
  scanf("%d %d %d %d %d", &A, &N, &C, &H, &L);
  if((A<=H && B<=L) || (A<=L && B<=H) || (A<=H && C<=L) || (A<=L && C<=H) || (B<=H && C<=L) || (B<=L && C<=H)){
    printf("S"); 
  }else{
    printf("N");
  }
  return 0;
}