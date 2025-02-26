#include <stdio.h>

int main() {
    char estado1;          // Armazena um caractere representando o estado
    char codigo1[4];       // Armazena uma string de até 3 caracteres (+1 para o terminador '\0')
    char cidade1[20];      // Armazena uma string de até 19 caracteres (+1 para o terminador '\0')
    unsigned long int numeroPopulacao1;  // Armazena o número de habitantes da cidade
    float area1;           // Armazena a área da cidade em km²
    float pib1;            // Armazena o PIB da cidade
    int pontosTuristicos1; // Armazena a quantidade de pontos turísticos

    char estado2;          // Armazena um caractere representando o estado
    char codigo2[4];       // Armazena uma string de até 3 caracteres (+1 para o terminador '\0')
    char cidade2[20];      // Armazena uma string de até 19 caracteres (+1 para o terminador '\0')
    unsigned long int numeroPopulacao2;  // Armazena o número de habitantes da cidade
    float area2;           // Armazena a área da cidade em km²
    float pib2;            // Armazena o PIB da cidade
    int pontosTuristicos2;

    float densidadePop1;
    float PIBperCapita1;

    float densidadePop2;
    float PIBperCapita2;

    float superPoder1;
    float superPoder2;

    int opcaoMenu;

    printf("1 - Numero da populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Selecione o atributo que voce deseja comparar: ");
    scanf("%d", &opcaoMenu);
    getchar();

    printf("Qual o estado da primeira carta? "); // Exibe a pergunta para o usuário
    scanf(" %c", &estado1); // Lê um caractere e armazena na variável 'estado'

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

        getchar();



    printf("Qual o estado da segunda carta? "); // Exibe a pergunta para o usuário
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

    superPoder1 = (float)numeroPopulacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1/densidadePop1) + PIBperCapita1;
    superPoder2 = (float)numeroPopulacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1/densidadePop2) + PIBperCapita2;

    printf("\n\n------Dados da primeira carta-------\n"); 
    printf("Estado: %c\n", estado1); // Exibe o estado armazenado
    printf("Codigo da carta: %s\n", codigo1); // Exibe o código armazenado
    printf("Cidade: %s\n", cidade1); // Exibe o nome da cidade armazenado
    printf("Numero da populacao: %d\n", numeroPopulacao1); // Exibe o número da população
    printf("Area: %.2f\n", area1); // Exibe a área da cidade
    printf("PIB: %.2f\n", pib1); // Exibe o PIB da cidade
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos
    printf("Densidade populacional: %.2f\n", densidadePop1); // Exibe a densidade populacional 
    printf("PIB per capita: %.2f", PIBperCapita1); //Exibe o PIB per capita 

    printf("\n\n------Dados da segunda carta-------\n"); 
    printf("Estado: %c\n", estado2); // Exibe o estado armazenado
    printf("Codigo da carta: %s\n", codigo2); // Exibe o código armazenado
    printf("Cidade: %s\n", cidade2); // Exibe o nome da cidade armazenado
    printf("Numero da populacao: %d\n", numeroPopulacao2); // Exibe o número da população
    printf("Area: %.2f\n", area2); // Exibe a área da cidade
    printf("PIB: %.2f\n", pib2); // Exibe o PIB da cidade
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos
    printf("Densidade populacional: %.2f\n", densidadePop2); // Exibe a densidade populacional 
    printf("PIB per capita: %.2f", PIBperCapita2); //Exibe o PIB per capita 

    switch (opcaoMenu)
    {
    case 1:
        printf("\nAtributo comparado: Populacao\n");
        if(numeroPopulacao1 > numeroPopulacao2){
            printf("\nCarta 1 - %s venceu\n", cidade1, numeroPopulacao1 > numeroPopulacao2);
        } else if(numeroPopulacao1 == numeroPopulacao2){
            printf("\nEmpate\n");
        } else {
            printf("\nPopulacao: Carta 2 venceu (%d)\n", numeroPopulacao1 < numeroPopulacao2);
        }
        break;
    case 2:
        printf("\nAtributo comparado: Area\n");
        if(area1 > area2){
            printf("\nArea: Carta 1 venceu (%d)\n", area1 > area2);
        } else if (area1 == area2){
            printf("\nEmpate\n");
        } else {
            printf("\nArea: Carta 2 venceu (%d)\n", area1 < area2);
        }        
        break;
    case 3:
        printf("\nAtributo comparado: PIB\n");
        if(pib1 > pib2){
            printf("\nPIB: Carta 1 venceu (%d)\n", pib1 > pib2);
        } else if(pib1 == pib2){
            printf("\nEmpate");
        } else {
            printf("\nPIB: Carta 2 venceu (%d)\n", pib1 < pib2);
        }        
        break;
    case 4:
        printf("\nAtributo comparado: Pontos turisticos\n");
        if(pontosTuristicos1 > pontosTuristicos2){
            printf("\nPontos turisiticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
        } else if(pontosTuristicos1 == pontosTuristicos2) {
            printf("\nEmpate\n");
        } else {
            printf("\nPontos turisiticos: Carta 2 venceu (%d)\n", pontosTuristicos1 < pontosTuristicos2);
        }      
        break;
    case 5:
        printf("\nAtributo comparado: Densidade Populacional\n");
        if(!(densidadePop1 > densidadePop2)){
            printf("\nDensidade populacional: Carta 1 venceu (%d)\n", !(densidadePop1 > densidadePop2));
        } else if(densidadePop1 == densidadePop2){
            printf("\nEmpate\n");
        } else {
            printf("\nDensidade populacional: Carta 2 venceu (%d)\n", !(densidadePop1 < densidadePop2));
        }        
        break;
    
    default:
        break;
    }
    
}
