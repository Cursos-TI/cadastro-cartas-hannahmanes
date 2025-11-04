#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Char para caracteres e strings, estes dispostos em um array, para o nome da cidade e códigos da carta e do estado
  char estado, estado2, nome[50], nome2[50], codigo[10], codigo2[10];
  // números inteiros para representar a população e pontos turísticos
  int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
  // números decimais para a área e o pib
  float area, area2, pib, pib2;
  float pib_per_capita1, pib_per_capita2, densidade_populacional1, densidade_populacional2;

  // Área para entrada de dados

  // Informações sobre a carta 1 
  
  printf("Informações sobre a carta 1: \n"); // printf printa as informações e instruções para criação das cartas na tela do terminal
  printf("Insira uma letra de A a H para representar o estado: "); // scanf permite ao usuário inserir as informações desejadas pelo terminal
  scanf(" %c", &estado);

  printf("Insira o código da carta (a letra escolhida para o estado + um número de 01 a 04. Ex: A01, H04): ");
  scanf("%s", codigo);

  printf("Insira o nome da cidade: ");
  scanf("%s", nome);

  printf("Insira o número aproximado de habitantes da cidade (sem pontuação): ");
  scanf("%d", &populacao);

  printf("Insira a área da cidade em quilômetros quadrados (em números decimais, se necessário): ");
  scanf("%f", &area);

  printf("Insira o PIB (Produto Interno Bruto) da cidade (em números decimais, se necessário. Não é necessário adicionar pontos ou zeros (000) para a casa dos milhões e bilhões): ");
  scanf("%f", &pib);

  printf("Insira o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &pontos_turisticos);

  // Informações sobre a carta 2

  printf("\nInformações sobre a carta 2: \n");
  printf("Insira uma letra de A a H para representar o estado: ");
  scanf(" %c", &estado2);

  printf("Insira o código da carta (a letra escolhida para o estado + um número de 01 a 04. Ex: A01, H04): ");
  scanf("%s", codigo2);

  printf("Insira o nome da cidade: ");
  scanf("%s", nome2);

  printf("Insira o número aproximado de habitantes da cidade (sem pontuação): ");
  scanf("%d", &populacao2);

  printf("Insira a área da cidade em quilômetros quadrados (em números decimais, se necessário): ");
  scanf("%f", &area2);

  printf("Insira o PIB (Produto Interno Bruto) da cidade (em números decimais, se necessário. Não é necessário adicionar pontos ou zeros (000) para a casa dos milhões e bilhões): ");
  scanf("%f", &pib2);

  printf("Insira o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &pontos_turisticos2);

  // Area para calcular densidade e PIB per capita
  // populacao / area
  densidade_populacional1 = populacao / area;
  densidade_populacional2 = populacao2 / area2;

  // pib / populacao
  pib_per_capita1 = (pib * 1000000000.0) / populacao;
  pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

  // Área para exibição dos dados da cidade

  // Informações sobre a carta 1
  printf("\nCarta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  // Informações sobre a carta 2
  printf("\nCarta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  return 0;
} 
