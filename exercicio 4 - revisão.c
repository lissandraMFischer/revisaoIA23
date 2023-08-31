#include <stdio.h>

int main(void) {

  int num = 0, tabuada = 0;
  printf("digite um numero");
  scanf("%d", &num);

  for (int i = 0; i <= 10; i++) {
    tabuada = num * i;
    printf("%d X %d = %d\n", num, i, tabuada);
  }
}