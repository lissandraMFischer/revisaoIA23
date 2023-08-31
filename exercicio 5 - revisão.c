#include <stdio.h>

int main(void) {
  int n1 = 0, n2 = 0, n3 = 0, maior = 0, meio = 0, menor = 0;
  printf("Digite o primeiro numero");
  scanf("%d", &n1);
  printf("\nDigite o segundo numero");
  scanf("%d", &n2);
  printf("\nDigite o terceiro numero");
  scanf("%d", &n3);

  if (n1 > n2 && n1 > n3) {
    maior = n1;
  } else if (n2 > n1 && n2 > n3) {
    maior = n2;
  } else {
    maior = n3;
  }

  if (n1 < n2 && n1 < n3) {
    menor = n1;
  } else if (n2 < n1 && n2 < n3) {
    menor = n2;
  } else {
    menor = n3;
  }
  if (n1 != menor && n1 != maior) {
    meio = n1;
  } else if (n2 != menor && n2 != maior) {
    meio = n2;
  } else {
    meio = n3;
  }

  printf(" %d\n %d\n %d", n1, n2, n3);
  printf("\n\n");
  printf(" %d\n %d\n %d", maior, meio, menor);
  printf("\n\n");
  printf(" %d\n %d\n %d", menor, meio, maior);
}