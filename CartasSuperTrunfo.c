#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoCarta1;
  char codigoCarta1[20];
  char cidadeCarta1[20];
  int populacaoCarta1;
  float areaCarta1;
  float pibCarta1;
  int turisticosCarta1;
  // Área para entrada de dados
  printf("Digite apenas a Inicial do seu estado: \n");
  scanf(" %c", &estadoCarta1);

  printf("Digite o Código da sua Cidade: (Inicial + números ex:A01)\n");
  scanf(" %s", codigoCarta1);
  
  printf("Digite o nome da sua cidade: \n");
  scanf(" %s", cidadeCarta1);

  printf("Digite o número de habitantes da sua cidade: \n");
  scanf(" %d", &populacaoCarta1);

  printf("Digita a área da sua cidade em km²\n");
  scanf(" %.2f", &areaCarta1);

  printf("Digite o PIB: \n");
  scanf(" %f", &pibCarta1);

  print("Digite a quantidade de pontos turísticos na sua cidade \n");
  scanf(" %d", &turisticosCarta1);
  // Área para exibição dos dados da cidade
  printf("\n ---- Sua Carta 01 ---\n");
  printf("Seu Estado é: %c\n" , &estadoCarta1);
  printf("Código da Cidade: %s\n", codigoCarta1);
  printf("Sua cidade: %s\n", cidadeCarta1);
  printf("Número de habitantes: %d\n", populacaoCarta1);
  printf("Área: %.2f km²\n ")

return 0;


} 
