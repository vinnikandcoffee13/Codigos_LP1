#include <stdio.h>

int main(void) {
  int fatorial, num;
  scanf("%d", &num);
  for(fatorial = 1; num > 1; num -=1){
      fatorial *= num;
  }
  printf("%d", fatorial);
  
  return 0;
}