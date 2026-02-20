#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // carta 01
    int carta;
    char estado;
    char codigo_carta[4];
    char nome_cidade[20];
    int populacao;
    float area_da_cidade;
    float PIB;
    int pontos_turisticos;

  // carta 02
    int carta_2;
    char estado_2;
    char codigo_carta_2[4];
    char nome_cidade_2[20];
    int populacao_2;
    float area_da_cidade_2;
    float PIB_2;
    int pontos_turisticos_2;


  // Área para entrada de dados 'Carta 01'
    printf("\n====================\n");
    printf("Preencha a Carta 01\n");
    printf("====================\n");

    printf("Digite uma letra de A a H representando o estado:\n");
    scanf(" %c",&estado);

    printf("Digite o numero da carta:\n");
    scanf("%d", &carta);

    printf("Digite o nome da cidade:\n");
    scanf("%19s",nome_cidade);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area_da_cidade);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos);

  // Área para entrada de dados 'Carta 02'

    printf("\n====================\n");
    printf("Agora preencha a Carta 02\n");
    printf("====================\n");

    printf("Digite uma letra de A a H representando o estado:\n");
    scanf(" %c",&estado_2);

    printf("Digite o numero da carta:\n");
    scanf("%d", &carta_2);

    printf("Digite o nome da cidade:\n");
    scanf("%19s",nome_cidade_2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao_2);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area_da_cidade_2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB_2);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos_2);

  // Área para exibição dos dados da cidade

  //CARTA 01

    printf("====================\n"); //separador

    printf("Carta 1:\n"
      "Estado: %c\n"
      "Codigo da Carta: %c%02d\n" // lê o codigo da carta automaticamente.
      "Nome da cidade: %s\n"
      "População: %d\n"
      "Área: %.2f\n"
      "PIB: %.2f\n"
      "Numeros de pontos Turisticos: %d\n",
      estado,
      estado, carta,
      nome_cidade,
      populacao,
      area_da_cidade,
      PIB,
      pontos_turisticos);

 //CARTA 02
  
    printf("====================\n"); //separador

    printf("Carta 2:\n"
      "Estado: %c\n"
      "Codigo da Carta: %c%02d\n" // lê o codigo da carta automaticamente.
      "Nome da cidade: %s\n"
      "População: %d\n"
      "Área: %.2f\n"
      "PIB: %.2f\n"
      "Numeros de pontos Turisticos: %d\n",
      estado_2,
      estado_2, carta_2,
      nome_cidade_2,
      populacao_2,
      area_da_cidade_2,
      PIB_2,
      pontos_turisticos_2);
return 0;
} 
