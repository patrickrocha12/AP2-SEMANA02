#include <stdio.h>
#include <math.h>

int main(void) {

  float cateto1, cateto2, hipotenusa;

  printf("Digite o valor do primeiro cateto: \n");
  scanf("%f", &cateto1);
  printf("Digite o valor do segundo cateto: \n");
  scanf("%f", &cateto2);

  hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

  printf("O valor da hipotenuza é: %.1f \n", hipotenusa);

  return 0;
}