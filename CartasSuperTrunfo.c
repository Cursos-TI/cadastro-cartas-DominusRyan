#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[20];
  char cidade[20];
  int populacao;
  float area;
  float pib;
  int turisticos;
  // Área para entrada de dados
  printf("Digite apenas a Inicial do seu estado: \n", estado);
  scanf(" %c", &estado);

  printf("Digite o Código da sua Cidade: (Incial + números ex:A01)\n");
  scanf(" %s", codigo);
  
  printf("DIgite o Nome da sua cidade: \n");
  scanf(" %s", cidade);
  
  // Área para exibição dos dados da cidade

return 0;
} 
