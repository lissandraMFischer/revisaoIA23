#include <stdio.h>

int main(void) {
  float p1 = 0, p2 = 0, p3 = 0, menor = 0;
  int n = 0;
  printf("Digite o preço do primeiro produto");
  scanf("%f", &p1);
  printf("Digite o preço do segundo produto");
  scanf("%f", &p2);
  printf("Digite o preço do terceiro produto");
  scanf("%f", &p3);

  if (p1 < p2 && p1 < p3) {
    menor = p1;
    n = 1;
  } else if (p2 < p1 && p2 < p3) {
    menor = p2;
    n = 2;
  } else {
    menor = p3;
    n = 3;
  }

  printf("O melhor produto pra você é o produto %d no valor de %.2f: ", n,
         menor);
}