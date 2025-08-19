#include <stdio.h>

int main(){
  int n, fatorial = 1;

  printf("Coloque um número para fazer o seu fator: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    fatorial *= i;
  }
  printf("Resultado: %d", fatorial);

  return 0;
}
