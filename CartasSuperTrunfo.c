#include <stdio.h>

int main() {
    char estado;          // Armazena um caractere representando o estado
    char codigo[4];       // Armazena uma string de até 3 caracteres (+1 para o terminador '\0')
    char cidade[11];      // Armazena uma string de até 10 caracteres (+1 para o terminador '\0')
    int numeroPopulacao;  // Armazena o número de habitantes da cidade
    float area;           // Armazena a área da cidade em km²
    float pib;            // Armazena o PIB da cidade
    int pontosTuristicos; // Armazena a quantidade de pontos turísticos

    printf("Qual o Estado? "); // Exibe a pergunta para o usuário
    scanf("%c", &estado); // Lê um caractere e armazena na variável 'estado'

    printf("Qual o Codigo da carta? "); // Exibe a pergunta para o usuário
    scanf("%s", codigo); // Lê uma string e armazena na variável 'codigo'

    printf("Qual a Cidade? "); // Exibe a pergunta para o usuário
    scanf("%s", cidade); // Lê uma string e armazena na variável 'cidade'

    printf("Qual o numero da populacao da cidade? "); // Exibe a pergunta para o usuário
    scanf("%d", &numeroPopulacao); // Lê um número inteiro e armazena em 'numeroPopulacao'

    printf("Qual a area da cidade? "); // Exibe a pergunta para o usuário
    scanf("%f", &area); // Lê um número decimal (float) e armazena em 'area'

    printf("Qual o PIB? "); // Exibe a pergunta para o usuário
    scanf("%f", &pib); // Lê um número decimal (float) e armazena em 'pib'

    printf("Qual o numero de pontos turisticos? "); // Exibe a pergunta para o usuário
    scanf("%d", &pontosTuristicos); // Lê um número inteiro e armazena em 'pontosTuristicos'

    printf("\n------Dados-------\n"); 
    printf("Estado: %c\n", estado); // Exibe o estado armazenado
    printf("Codigo da carta: %s\n", codigo); // Exibe o código armazenado
    printf("Cidade: %s\n", cidade); // Exibe o nome da cidade armazenado
    printf("Numero da populacao: %d\n", numeroPopulacao); // Exibe o número da população
    printf("Area: %f\n", area); // Exibe a área da cidade
    printf("PIB: %f\n", pib); // Exibe o PIB da cidade
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos); // Exibe o número de pontos turísticos
}
