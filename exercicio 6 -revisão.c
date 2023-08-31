#include <stdio.h>

int main(void) {
  int cont = 0, contF = 0, contM = 0, idade = 0, sexo = 0, idadeF = 0,
      idadeM = 0, idadeT = 0;
  float mediaF = 0, mediaI = 0, mediaM = 0;
  while (cont < 8) {
    printf("\nInforme sua idade: ");
    scanf("%d", &idade);
    printf("\nInforme seu sexo, Feminino: digite 1; Masculino: digite 2; ");
    scanf("%d", &sexo);
    if (sexo == 1) {
      idadeF = idadeF + idade;
      contF++;
    } else {
      idadeM = idadeM + idade;
      contM++;
    }
    idadeT = idadeT + idade;
    cont++;
  }
  mediaI = idadeT / cont;
  mediaF = idadeF / contF;
  mediaM = idadeM / contM;

  printf("%dH", contM);
  printf("%d M", contF);
  printf("%d T", cont);

  printf("\nA média de idade do grupo de pessoas é %.2f", mediaI);
  printf("\nA média de idade das mulheres é %.2f", mediaF);
  printf("\nA média de idade dos homens é %.2f", mediaM);
}
