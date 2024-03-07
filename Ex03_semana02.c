#include <stdio.h>
#include <math.h>

int main(void) {

  int celcius, fahrenheit;

  printf("Digite a temperatura em graus celcius: \n");
  scanf("%d", &celcius);
  fahrenheit = ((9.0 / 5.0) * celcius) + 32;
  printf("A temperatura convertida em fahrenheit é: %d \n", fahrenheit);

  return 0;
}