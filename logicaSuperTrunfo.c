#include <stdio.h>

int main() {
    char estado1; //Estados das cartas
    char estado2;

    char carta1[3]; //Código das cartas
    char carta2[3];

    char cidade1[30]; //Nome das cidades
    char cidade2[30];

    unsigned int populacao1; //População
    unsigned int populacao2;

    float densidade1; //Densidade populacional
    float densidade2;

    float area1; //Área por km2
    float area2;

    float PIB1; //PIBs
    float PIB2;

    float capita1; //PIB per capita
    float capita2; 

    int turismo1; //Pontos turísticos
    int turismo2;

    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    
    // Cadastro das Cartas:
    printf("***** Super Trunfo - Países *****\n");

    printf("** Carta 1 ** \n");
    
    printf("Insira o código da carta 1 (código do Estado de A a H + número da cidade de 01 a 04):\n");
    scanf("%s", &carta1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Insira a quantidade de habitantes:\n");
    scanf("%u", &populacao1);

    printf("Insira a área em km2:\n");
    scanf("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &PIB1);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo1);

    //Cálculo de PIB per capita e densidade populacional
    densidade1 = populacao1/area1;
    capita1 = PIB1/populacao1;
    

    //Exibição dos dados da carta 1  
    printf("*** Carta 1 inserida com sucesso ***\n");
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2u \n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB: %.2f\n", PIB1);
    printf("PIB per capita: %.2f\n", capita1);
    printf("Pontos Turísticos: %d\n", turismo1);

    //Coleta de dados da carta 2 
    printf("** Carta 2 ** \n");

    printf("Insira o código da carta 2 (código do Estado de A a H + número da cidade de 01 a 04):\n");
    scanf("%s", &carta2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Insira a quantidade de habitantes:\n");
    scanf("%u", &populacao2);

    printf("Insira a área em km2:\n");
    scanf("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &PIB2);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo2);

    //Cálculo de PIB per capita e densidade populacional
    densidade2 = populacao2/area2;
    capita2 = PIB2/populacao2;

    //Exibição dos dados da carta 2
    printf("*** Carta 02 inserida com sucesso ***\n");
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2u \n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB: %.2f\n", PIB2);
    printf("PIB per capita: %.2f\n", capita2);
    printf("Pontos Turísticos: %d\n", turismo2);


   //Inicio da comparação entre as propriedades das cartas
    printf("*** Comparação entre as cartas ***\n");

   if (populacao1 > populacao2) {
        printf("A carta de número 1 tem maior população.\n");
        pontosCarta1++; 
    } else {
        printf("A carta de número 2 tem maior população.\n");
        pontosCarta2++; 
    }

    if (area1 > area2) {
        printf("A carta de número 1 tem maior área por km2.\n");
        pontosCarta1++;
    } else {
        printf("A carta de número 2 tem maior área por km2.\n");
        pontosCarta2++; 
    }

     if (densidade2 < densidade2) {
        printf("A carta de número 1 tem menor densidade populacional.\n");
        pontosCarta1++;
    } else {
        printf("A carta de número 2 tem menor densidade populacional.\n");
        pontosCarta2++; 
    }
     
     if (PIB1 > PIB2) {
        printf("A carta de número 1 tem maior PIB.\n");
        pontosCarta1++;
    } else {
        printf("A carta de número 2 tem maior PIB.\n");
        pontosCarta2++;
    }

    if (capita1 > capita2) {
        printf("A carta de número 1 tem maior PIB per capita.\n");
        pontosCarta1++;
    } else {
        printf("A carta de número 2 tem maior PIB per capita.\n");
        pontosCarta2++;
    }

    if (turismo1 > turismo2) {
        printf("A carta de número 1 tem maior número de pontos turísticos.\n");
        pontosCarta1++;
    } else {
        printf("A carta de número 2 tem maior número de pontos turísticos.\n");
        pontosCarta2++;
    }

   printf("Pontos da Carta 1: %d\n", pontosCarta1);
   printf("Pontos da Carta 2: %d\n", pontosCarta2);

    if(pontosCarta1 > pontosCarta2){
        printf("A carta vencedora é a cidade de %s com %d pontos.\n", cidade1, pontosCarta1);

    } else {
        printf("A carta vencedora é a cidade de %s com %d pontos.\n", cidade2, pontosCarta2);
    }


    return 0;
}
