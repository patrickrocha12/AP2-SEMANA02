#include <stdio.h>
#include <math.h>

int main(void) {

  float raio, area;

  printf("Digite o valor do raio: \n");
  scanf("%f", &raio);
  area = M_PI * (raio * raio);

  printf("A área do círculo é: %.2f \n", area);

  return 0;
}