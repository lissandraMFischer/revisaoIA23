#include <stdio.h>

int main(void) {
  int l1 = 0, l2 = 0, l3 = 0;
  printf("Digite o primeiro lado do triangulo");
  scanf("%d", &l1);
  printf("\nDigite o segundo lado do triangulo");
  scanf("%d", &l2);
  printf("\nDigite o terceiro lado do triangulo");
  scanf("%d", &l3);

  if ((l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2))) {
    printf("É um triangulo");
    if (l1 == l2 && l1 == l3) {
      printf("\nEquilatero");
    } else if (l1 != l2 && l1 != l3 && l2 != l3) {
      printf("\nEscaleno");
    } else {
      printf("\nIsosceles");
    }
  } else {
    printf("\nNão é um triangulo");
  }
}