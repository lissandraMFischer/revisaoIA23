#include <stdio.h>

int main(void) {
  float n1 = 0.0, n2 = 0.0, media = 0.0;
  printf("digite a primeira nota parcial:");
  scanf("%f", &n1);
  printf("digite a primeira nota parcial:");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  if (media == 10) {
    printf("Aprovado com nota máxima");
  } else if (media >= 7) {
    printf("Aprovado");
  } else {
    printf("Reprovado");
  }
}