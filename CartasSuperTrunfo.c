#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo no nível aventureiro: Adicionar propriedades calculadas (Densidade Populacional e PIB per Capita) ao sistema.
// Objetivo no nível mestre: Implementar comparação entre duas cartas utilizando operadores relacionais e calcular o "Super Poder" de cada cidade.

int main()
{
  // Definição das variáveis para armazenar as propriedades das cidades
  char cidade1[5], cidade2[5];
  float populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;

  // Novas variáveis adicionadas no nível aventureiro
  float densidade_populacional1, densidade_populacional2;
  float pib_per_capita1, pib_per_capita2;

  // Variáveis adicionadas no nível mestre
  float super_poder1, super_poder2;

  // Entrada de dados para a primeira cidade
  printf("SUPER TRUNFO - CADASTRO DA PRIMEIRA CIDADE\n");

  printf("Código da cidade 1 (Ex.: A01): ");
  scanf("%s", cidade1);

  printf("População da cidade 1: ");
  scanf("%f", &populacao1);

  printf("Área da cidade 1 (em km²): ");
  scanf("%f", &area1);

  printf("PIB da cidade 1: ");
  scanf("%f", &pib1);

  printf("Pontos turísticos da cidade 1: ");
  scanf("%d", &pontos_turisticos1);

  // Entrada de dados para a segunda cidade
  printf("\nSUPER TRUNFO - CADASTRO DA SEGUNDA CIDADE\n");

  printf("Código da cidade 2 (Ex.: B02): ");
  scanf("%s", cidade2);

  printf("População da cidade 2: ");
  scanf("%f", &populacao2);

  printf("Área da cidade 2 (em km²): ");
  scanf("%f", &area2);

  printf("PIB da cidade 2: ");
  scanf("%f", &pib2);

  printf("Pontos turísticos da cidade 2: ");
  scanf("%d", &pontos_turisticos2);

  // Cálculo das novas propriedades adicionadas no nível aventureiro
  densidade_populacional1 = populacao1 / area1;
  densidade_populacional2 = populacao2 / area2;
  pib_per_capita1 = pib1 / populacao1;
  pib_per_capita2 = pib2 / populacao2;

  // Cálculo do "Super Poder" da cidade (nível mestre)
  super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 - densidade_populacional1;
  super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 - densidade_populacional2;

  // Exibição dos dados cadastrados
  printf("\n--- Dados das Cidades ---\n");
  printf("\nCidade 1: %s\n", cidade1);
  printf("População: %.2f\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
  printf("PIB per Capita: %.2f\n", pib_per_capita1);
  printf("Super Poder: %.2f\n", super_poder1);

  printf("\nCidade 2: %s\n", cidade2);
  printf("População: %.2f\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
  printf("PIB per Capita: %.2f\n", pib_per_capita2);
  printf("Super Poder: %.2f\n", super_poder2);

  // Comparação das propriedades (nível mestre)
  printf("\n--- Comparação das Cidades ---\n");

  printf("Densidade Populacional (Menor vence): ");
  if (densidade_populacional1 < densidade_populacional2)
    printf("%s vence!\n", cidade1);
  else if (densidade_populacional1 > densidade_populacional2)
    printf("%s vence!\n", cidade2);
  else
    printf("Empate!\n");

  printf("População (Maior vence): ");
  if (populacao1 > populacao2)
    printf("%s vence!\n", cidade1);
  else if (populacao1 < populacao2)
    printf("%s vence!\n", cidade2);
  else
    printf("Empate!\n");

  printf("Área (Maior vence): ");
  if (area1 > area2)
    printf("%s vence!\n", cidade1);
  else if (area1 < area2)
    printf("%s vence!\n", cidade2);
  else
    printf("Empate!\n");

  printf("PIB (Maior vence): ");
  if (pib1 > pib2)
    printf("%s vence!\n", cidade1);
  else if (pib1 < pib2)
    printf("%s vence!\n", cidade2);
  else
    printf("Empate!\n");

  printf("Pontos Turísticos (Maior vence): ");
  if (pontos_turisticos1 > pontos_turisticos2)
    printf("%s vence!\n", cidade1);
  else if (pontos_turisticos1 < pontos_turisticos2)
    printf("%s vence!\n", cidade2);
  else
    printf("Empate!\n");

  printf("PIB per Capita (Maior vence): ");
  if (pib_per_capita1 > pib_per_capita2)
    printf("%s vence!\n", cidade1);
  else if (pib_per_capita1 < pib_per_capita2)
    printf("%s vence!\n", cidade2);
  else
    printf("Empate!\n");

  printf("\nSuper Poder (Maior vence): ");
  if (super_poder1 > super_poder2)
    printf("%s vence!\n", cidade1);
  else if (super_poder1 < super_poder2)
    printf("%s vence!\n", cidade2);
  else
    printf("Empate!\n");

  return 0;
}
