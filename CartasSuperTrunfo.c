#include <stdio.h>

int main() {
    char estado1;          // Armazena um caractere representando o estado
    char codigo1[4];       // Armazena uma string de até 3 caracteres (+1 para o terminador '\0')
    char cidade1[20];      // Armazena uma string de até 19 caracteres (+1 para o terminador '\0')
    int numeroPopulacao1;  // Armazena o número de habitantes da cidade
    float area1;           // Armazena a área da cidade em km²
    float pib1;            // Armazena o PIB da cidade
    int pontosTuristicos1; // Armazena a quantidade de pontos turísticos

    char estado2;          // Armazena um caractere representando o estado
    char codigo2[4];       // Armazena uma string de até 3 caracteres (+1 para o terminador '\0')
    char cidade2[20];      // Armazena uma string de até 19 caracteres (+1 para o terminador '\0')
    int numeroPopulacao2;  // Armazena o número de habitantes da cidade
    float area2;           // Armazena a área da cidade em km²
    float pib2;            // Armazena o PIB da cidade
    int pontosTuristicos2;

    float densidadePop1;
    float PIBperCapita1;

    float densidadePop2;
    float PIBperCapita2;

    printf("Qual o estado da primeira carta? "); // Exibe a pergunta para o usuário
    scanf("%c", &estado1); // Lê um caractere e armazena na variável 'estado'

    printf("Qual o codigo da primeira carta? "); // Exibe a pergunta para o usuário
    scanf("%s", codigo1); // Lê uma string e armazena na variável 'codigo'

    printf("Qual a cidade da primeira carta? "); // Exibe a pergunta para o usuário
    scanf("%s", cidade1); // Lê uma string e armazena na variável 'cidade'

    printf("Qual o numero da populacao da cidade da primeira carta? "); // Exibe a pergunta para o usuário
    scanf("%d", &numeroPopulacao1); // Lê um número inteiro e armazena em 'numeroPopulacao'

    printf("Qual a area da cidade da primeira carta? "); // Exibe a pergunta para o usuário
    scanf("%f", &area1); // Lê um número decimal (float) e armazena em 'area'

    printf("Qual o PIB da primeira carta? "); // Exibe a pergunta para o usuário
    scanf("%f", &pib1); // Lê um número decimal (float) e armazena em 'pib'

    printf("Qual o numero de pontos turisticos da primeira carta? "); // Exibe a pergunta para o usuário
    scanf("%d", &pontosTuristicos1); // Lê um número inteiro e armazena em 'pontosTuristicos'


    printf("\nQual o estado da segunda carta? "); // Exibe a pergunta para o usuário
    scanf(" %c", &estado2); // Lê um caractere e armazena na variável 'estado'

    printf("Qual o codigo da segunda carta? "); // Exibe a pergunta para o usuário
    scanf("%s", codigo2); // Lê uma string e armazena na variável 'codigo'

    printf("Qual a cidade da segunda carta? "); // Exibe a pergunta para o usuário
    scanf("%s", cidade2); // Lê uma string e armazena na variável 'cidade'

    printf("Qual o numero da populacao da cidade da segunda carta? "); // Exibe a pergunta para o usuário
    scanf("%d", &numeroPopulacao2); // Lê um número inteiro e armazena em 'numeroPopulacao'

    printf("Qual a area da cidade da segunda carta? "); // Exibe a pergunta para o usuário
    scanf("%f", &area2); // Lê um número decimal (float) e armazena em 'area'

    printf("Qual o PIB da segunda carta? "); // Exibe a pergunta para o usuário
    scanf("%f", &pib2); // Lê um número decimal (float) e armazena em 'pib'

    printf("Qual o numero de pontos turisticos da segunda carta? "); // Exibe a pergunta para o usuário
    scanf("%d", &pontosTuristicos2); // Lê um número inteiro e armazena em 'pontosTuristicos'

    densidadePop1 = numeroPopulacao1/area1; // Calculo de densidade populacional da primeira carta
    densidadePop2 = numeroPopulacao2/area2; // Calculo de densidade populacional da segunda carta

    PIBperCapita1 = pib1/numeroPopulacao1; // Calculo do PIB per capita da primeira carta
    PIBperCapita2 = pib2/numeroPopulacao2; // Calculo do PIB per capita da segunda carta

    printf("\n------Dados da primeira carta-------\n"); 
    printf("Estado: %c\n", estado1); // Exibe o estado armazenado
    printf("Codigo da carta: %s\n", codigo1); // Exibe o código armazenado
    printf("Cidade: %s\n", cidade1); // Exibe o nome da cidade armazenado
    printf("Numero da populacao: %d\n", numeroPopulacao1); // Exibe o número da população
    printf("Area: %.2f\n", area1); // Exibe a área da cidade
    printf("PIB: %.2f\n", pib1); // Exibe o PIB da cidade
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos
    printf("Densidade populacional: %.2f\n", densidadePop1); // Exibe a densidade populacional 
    printf("PIB per capita: %.2f", PIBperCapita1); //Exibe o PIB per capita 

    printf("\n------Dados da segunda carta-------\n"); 
    printf("Estado: %c\n", estado2); // Exibe o estado armazenado
    printf("Codigo da carta: %s\n", codigo2); // Exibe o código armazenado
    printf("Cidade: %s\n", cidade2); // Exibe o nome da cidade armazenado
    printf("Numero da populacao: %d\n", numeroPopulacao2); // Exibe o número da população
    printf("Area: %.2f\n", area2); // Exibe a área da cidade
    printf("PIB: %.2f\n", pib2); // Exibe o PIB da cidade
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos
    printf("Densidade populacional: %.2f\n", densidadePop2); // Exibe a densidade populacional 
    printf("PIB per capita: %.2f", PIBperCapita2); //Exibe o PIB per capita 

}
