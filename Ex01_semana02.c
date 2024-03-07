#include <stdio.h>
#include <math.h>

int main(void) {

  int num1, num2, soma, sub, mult, div;

  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);
  printf("Digite o segundo número: \n");
  scanf("%d", &num2);
  
  soma = num1 + num2;
  sub = num1 - num2;
  mult = num1 * num2;
  div = num1 / num2;
  
  printf("A soma dos números %d e %d é: %d \n", num1, num2, soma);
  printf("A subtração dos números %d e %d é: %d \n", num1, num2, sub);
  printf("A multiplícação dos números %d e %d é: %d \n", num1, num2, mult);
  printf("A divisão dos números %d e %d é: %d \n", num1, num2, div);

  return 0;
}