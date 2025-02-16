#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo no nível aventureiro: Adicionar propriedades calculadas (Densidade Populacional e PIB per Capita) ao sistema.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade[5];
  float populacao;
  float area;  // Alterado para float no nível aventureiro, pois agora será usado para cálculos
  float pib;   // Alterado para float no nível aventureiro, pois agora será usado para cálculos
  int pontos_turisticos;
  
  // Novas variáveis adicionadas no nível aventureiro para cálculos
  float densidade_populacional;
  float pib_per_capita;

  // Área para entrada de dados
  printf("SUPER TRUNFO\n");

  printf("Qual é o código da cidade? (Ex.: A01)\n");
  scanf("%s", cidade);

  printf("Qual é a população?\n");
  scanf("%f", &populacao);

  printf("Qual é a área? (em km²)\n"); // Alteração no nível aventureiro para receber um número real
  scanf("%f", &area);

  printf("Qual é o PIB? (em unidades monetárias)\n"); // Alteração no nível aventureiro para receber um número real
  scanf("%f", &pib);

  printf("Quantos pontos turísticos possui?\n");
  scanf("%d", &pontos_turisticos);

  // Cálculo das novas propriedades adicionadas no nível aventureiro
  densidade_populacional = populacao / area;
  pib_per_capita = pib / populacao;

  // Área para exibição dos dados da cidade
  printf("\n--- Dados da Cidade ---\n");
  printf("Cidade: %s\n", cidade);
  printf("População: %.2f\n", populacao);
  printf("Área: %.2f km²\n", area); // Alterado no nível aventureiro para exibir a área corretamente
  printf("PIB: %.2f\n", pib); // Alterado no nível aventureiro para exibir o PIB corretamente
  printf("Pontos Turísticos: %d\n", pontos_turisticos);

  // Exibição das novas propriedades calculadas no nível aventureiro
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
  printf("PIB per Capita: %.2f\n", pib_per_capita);

  return 0;
}
