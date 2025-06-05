#include <stdio.h>
int main() {

  char estado1[30], estado2[30], codigoDaCarta1[30], codigoDaCarta2[30],
      nomeDaCidade1[30], nomeDaCidade2[30];
  float area1, area2, pib1, pib2;
  int populacao1, populacao2, nmr_pontos_tur1, nmr_pontos_tur2;

  printf("Estado:\n");
  scanf("%s", estado1);

  printf("Codigo da Carta: \n");
  scanf("%s", codigoDaCarta1);

  printf("Nome da Cidade: \n");
  scanf("%s", nomeDaCidade1);

  printf("Populacao: \n");
  scanf("%d", &populacao1);

  printf("Area: \n");
  scanf("%f", &area1);

  printf("Pib: \n");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: \n");
  scanf("%d", &nmr_pontos_tur1);

  printf("Estado2: \n");
  scanf("%s", estado2);

  printf("Codigo da Cart2a: \n");
  scanf("%s", codigoDaCarta2);

  printf("Nome da Cidade2: \n");
  scanf("%s", nomeDaCidade2);

  printf("Populacao2: \n");
  scanf("%d", &populacao2);

  printf("Area2: \n");
  scanf("%f", &area2);

  printf("Pib2: \n");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos2: \n");
  scanf("%d", &nmr_pontos_tur2);

  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigoDaCarta1);
  printf("Nome da Cidade: %s\n", nomeDaCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de pontos turisticos: %d\n", nmr_pontos_tur1);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigoDaCarta2);
  printf("Nome da Cidade: %s\n", nomeDaCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", nmr_pontos_tur2);

  return 0;
}
