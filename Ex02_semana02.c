#include <stdio.h>
#include <math.h>

int main(void) {

  float altura, peso, imc;

  printf("Qual é a sua altura: \n:");
  scanf("%f", &altura);
  printf("Qual é o seu peso: \n");
  scanf("%f", &peso);

  imc = peso / (altura * altura);
  printf("O IMC de uma pessoa com peso %fkg e altura %fm é igual a %f", peso, altura, imc);
  
  return 0;
}