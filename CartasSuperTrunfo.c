#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20], estado2[20], codigoDaCarta1[10], codigoDaCarta2[10], nomeDaCidade1[50], nomeDaCidade2[50];
  int populacao1, populacao2, nrPontosturisticos1, nrPontosturisticos2;
  float area1, area2, pib1, pib2;
  // Área para entrada de dados para a carta 01
  printf ("Digite o nome do Estado 01:  \n");
  scanf ("%s", estado1);
  printf ("Digite o código da carta 01:  \n");
  scanf ("%s", codigoDaCarta1);
  printf ("Digite o nome da Cidade 01:  \n");
  scanf (" %[^\n]", nomeDaCidade1); /*O uso de [^\n] permite a entrada de Cidades com nomes compostos ou espaços.*/
  printf ("Digite a população 01:  \n");
  scanf ("%d", &populacao1);
  printf ("Digite a área em km2 01:  \n");
  scanf ("%f", &area1);
  printf ("Digite o PIB 01:  \n");
  scanf ("%f", &pib1);
  printf ("Digite a quantidade de pontos turísticos 01: \n");
  scanf ("%d", &nrPontosturisticos1);

  // Área para entrada de dados para a carta 02
  printf ("Digite o nome Estado 02:  \n");
  scanf ("%s", estado2);
  printf ("Digite o código da carta 02:  \n");
  scanf ("%s", codigoDaCarta2);
  printf ("Digite o nome da Cidade 02:  \n");
  scanf (" %[^\n]", nomeDaCidade2); /*O uso de [^\n] permite a entrada de Cidades com nomes compostos ou espaços.*/
  printf ("Digite a população 02:  \n");
  scanf ("%d", &populacao2);
  printf ("Digite a área em km2 02:  \n");
  scanf ("%f", &area2);
  printf ("Digite o PIB 02:  \n");
  scanf ("%f", &pib2);
  printf ("Digite a quantidade de pontos turísticos 02: \n");
  scanf ("%d", &nrPontosturisticos2);  

  // Área para exibição dos dados da cidade

  printf ("\n**************************************\n\n");
  printf ("Carta 01: \n");
  printf ("Estado: %s\n", estado1);
  printf ("Código: %s\n", codigoDaCarta1);
  printf ("Nome da Cidade: %s\n", nomeDaCidade1);
  printf ("População: %d\n", populacao1);
  printf ("Área: %.2fkm2\n", area1);
  printf ("PIB: %.2f bilhões de reais\n", pib1);
  printf ("Número de pontos turísticos: %d\n", nrPontosturisticos1);
  printf ("\n**************************************\n\n");

  printf ("\n**************************************\n\n");
  printf ("Carta 02: \n");
  printf ("Estado: %s\n", estado2);
  printf ("Código: %s\n", codigoDaCarta2);
  printf ("Nome da Cidade: %s\n", nomeDaCidade2);
  printf ("População: %d\n", populacao2);
  printf ("Área: %.2fkm2\n", area2);
  printf ("PIB: %.2f bilhões de reais\n", pib2);
  printf ("Número de pontos turísticos: %d\n", nrPontosturisticos2);
  printf ("\n**************************************\n\n");
return 0;
} 
