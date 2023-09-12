#include <stdio.h>
int n, soma = 0, somaatual;
int main() {
  while(soma <= 1000000){
    scanf("%d", &somaatual);
    soma = soma + somaatual;
    n = n + 1;
  }
  printf("%d", n);
    return 0;
}
  