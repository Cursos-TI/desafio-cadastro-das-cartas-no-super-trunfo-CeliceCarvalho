#include <stdio.h>
#include <string.h>

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
    float densidadePop2;

    int opcaoMenu1;
    int opcaoMenu2;
    float somaAtributos1;
    float somaAtributos2;

    printf("Selecione o primeiro atributo que voce deseja comparar: \n");
    printf("1 - Numero da populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcaoMenu1);
    getchar();

    switch (opcaoMenu1)
    {
    case 1:
        printf("Atributo escolhido: População\n");
        break;
    case 2:
        printf("Atributo escolhido: Area\n");
        break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        break;
    case 4: 
        printf("Atributo escolhido: Pontos turisticos\n");
        break;
    case 5:
        printf("Atributo escolhido: Densidade demografica\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }

    printf("\nSelecione o segundo atributo que voce deseja comparar: \n");


    if(opcaoMenu1 != 1){
        printf("\n1 - Numero da populacao\n");
    } 
    if(opcaoMenu1 != 2){
        printf("2 - Area\n");
    }
    if(opcaoMenu1 != 3){
        printf("3 - PIB\n");
    }  
    if(opcaoMenu1 != 4){
        printf("4 - Pontos turisticos\n");
    }  
    if(opcaoMenu1 != 5){
        printf("5 - Densidade demografica\n");
    } 

    printf("Digite a opcao: ");
    scanf("%d", &opcaoMenu2);
    getchar();

    switch (opcaoMenu2)
    {
    case 1:
        printf("Atributo escolhido: População\n");
        break;
    case 2:
        printf("Atributo escolhido: Area\n");
        break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        break;
    case 4: 
        printf("Atributo escolhido: Pontos turisticos\n");
        break;
    case 5:
        printf("Atributo escolhido: Densidade demografica\n");
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }

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

    printf("\n\n-------Resultado-------\n");
    printf("Cidades: %s e %s\n", cidade1, cidade2);

    switch (opcaoMenu1)
    {
    case 1:
        printf("Primero atributo comparado: Populacao\n");
        somaAtributos1 = (float)numeroPopulacao1;
        somaAtributos2 = (float)numeroPopulacao2;
        break;
    case 2:
        printf("Primero atributo comparado: Area\n");
        somaAtributos1 = area1;
        somaAtributos2 = area2;    
        break;
    case 3:
        printf("Primero atributo comparado: PIB\n");
        somaAtributos1 = pib1;
        somaAtributos2 = pib2;    
        break;
    case 4:
        printf("Primero atributo comparado: Pontos turisticos\n");
        somaAtributos1 = (float)pontosTuristicos1;
        somaAtributos2 = (float)pontosTuristicos2;      
        break;
    case 5:
        printf("Primero atributo comparado: Densidade Populacional\n");
        somaAtributos1 = 1/densidadePop1;
        somaAtributos2 = 1/densidadePop2;      
        break;
    
    default:
        break;
    }

    switch (opcaoMenu2)
    {
    case 1:
        printf("\nSegundo atributo comparado: Populacao\n");
        somaAtributos1 += (float)numeroPopulacao1;
        somaAtributos2 += (float)numeroPopulacao2;
        break;
    case 2:
        printf("\nSegundo atributo comparado: Area\n");
        somaAtributos1 += area1;
        somaAtributos2 += area2;    
        break;
    case 3:
        printf("\nSegundo atributo comparado: PIB\n");
        somaAtributos1 += pib1;
        somaAtributos2 += pib2;    
        break;
    case 4:
        printf("\nSegundo atributo comparado: Pontos turisticos\n");
        somaAtributos1 += (float)pontosTuristicos1;
        somaAtributos2 += (float)pontosTuristicos2;      
        break;
    case 5:
        printf("\nSegundo atributo comparado: Densidade Populacional\n");
        somaAtributos1 += 1/densidadePop1;
        somaAtributos2 += 1/densidadePop2;      
        break;
    
    default:
        break;
    }
    printf("Soma dos atributos da carta 1 (%s): %.2f\n", cidade1, somaAtributos1);
    printf("Soma dos atributos da carta 2 (%s): %.2f\n", cidade2, somaAtributos2);

    if(somaAtributos1 > somaAtributos2){
        printf("\nCarta 1 venceu!!!");
    } else if (somaAtributos1 == somaAtributos2){
        printf("\nEmpate!\n");
    } else {
        printf("\nCarta 2 venceu!!!");
    }

}
