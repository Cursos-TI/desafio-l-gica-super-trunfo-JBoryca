#include <stdio.h>

int main() {
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

    int opcao1; //Opção do menu 
    int opcao2; 

    int carta1_atributo1; //Pontos para o atributo da carta 1
    int carta1_atributo2; 

    int carta2_atributo1; //Pontos para o atributo da carta 2
    int carta2_atributo2; 

    char* resultado_final; //Resultado final da comparação entre os atributos das cartas

    
    // Cadastro das Cartas:
    printf("***** Super Trunfo - Países *****\n");

    printf("** Carta 01 ** \n");
    
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
    densidade1 = (float)populacao1/area1;
    capita1 = PIB1/(float)populacao1;
    

    //Exibição dos dados da carta 1  
    printf("*** Carta 01 inserida com sucesso ***\n");
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2u \n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB: %.2f\n", PIB1);
    printf("PIB per capita: %.2f\n", capita1);
    printf("Pontos Turísticos: %d\n", turismo1);

    //Coleta de dados da carta 2 
    printf("** Carta 02 ** \n");

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
    densidade2 = (float)populacao2/area2;
    capita2 = PIB2/(float)populacao2;

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

    // Menu interativo 1
    printf("*** Escolha o primeiro atributo a ser comparado ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per Capita\n");
    printf("6. Pontos Turísticos\n");
    scanf("%d", &opcao1);

    // Menu interativo 
    printf("*** Escolha o segundo atributo a ser comparado ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per Capita\n");
    printf("6. Pontos Turísticos\n");
    scanf("%d", &opcao2);

  // Bloco de código a ser executado de acordo com a primeira opção do usuário
  switch (opcao1)
  {
  case 1:
    printf("População:\n");
   if (populacao1 > populacao2) { //Se o atributo da carta 01 for maior, ponto para a carta 01
    carta1_atributo1 = 1;
       printf("A carta vencedora é a cidade de %s com %u habitantes.\n", cidade1, populacao1); //Se o atributo da carta 02 for maior, ponto para a carta 02
    } else if (populacao1 > populacao2) {
    carta2_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com %u habitantes.\n", cidade2, populacao2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo número de habitantes.\n"); // Se os atributos forem iguais, ambas pontuam
        carta1_atributo1 = 1; 
        carta2_atributo1 = 1;   
    }
    break; //Finaliza o case 1

//Repete a lógica para os demais...
  case 2:
    printf("Área:\n");
    if (area1 > area2) {
    carta1_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com %.2f Km2.\n", cidade1, area1);
    } else if (area1 < area2) {
    carta2_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com %.2f Km2.\n", cidade2, area2);
    } else {
        printf("Empate: ambas as cidades tem a mesma área.\n");
        carta1_atributo1 = 1; 
        carta2_atributo1 = 1;   
    }
    break;

  case 3:
    printf("Densidade Populacional: \n");
     if (densidade1 < densidade2) {
    carta1_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com %.2f habitantes por Km2.\n", cidade1, densidade1);
    } else if (densidade1 > densidade2) {
    carta2_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com %.2f habitantes por Km2.\n", cidade2, densidade2);
    } else {
        printf("Empate: ambas as cidades tem a mesma densidade populacional.\n");
        carta1_atributo1 = 1; 
        carta2_atributo1 = 1;   
    }
    break;

  case 4:
    printf("PIB: \n");
     if (PIB1 > PIB2) {
    carta1_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com PIB de R$ %.2f pontos.\n", cidade1, PIB1);
    } else if (PIB1 < PIB2) {
    carta2_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com PIB de R$ %.2f pontos.\n", cidade2, PIB2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo PIB.\n");  
        carta1_atributo1 = 1; 
        carta2_atributo1 = 1;         
    }
    break;

  case 5:
    printf("PIB per Capita: \n ");
    if (capita1 > capita2) {
    carta1_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com PIB per capita de R$ %.2f.\n", cidade1, capita1);
    } else if (capita1 < capita2) {
    carta2_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com PIB per capita de R$ %.2f.\n", cidade2, capita2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo PIB per capita.\n"); 
        carta1_atributo1 = 1; 
        carta2_atributo1 = 1;          
    }
    break;

  case 6:
    printf("Pontos Turísticos: \n");
    if (turismo1 > turismo2) {
    carta1_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com %d pontos turísticos.\n", cidade1, turismo1);
    } else if (turismo1 < turismo2) {
    carta2_atributo1 = 1;
        printf("A carta vencedora é a cidade de %s com %d pontos turísticos.\n", cidade2, turismo2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo número de pontos turísticos.\n"); 
        carta1_atributo1 = 1; 
        carta2_atributo1 = 1;   
    }
    break;

  default: //Caso que trata de uma opção inválida
    printf("Opção inválida!\n");
    break;
  }

  // Bloco de código a ser executado de acordo com a segunda opção do usuário
  switch (opcao2)
  {
  case 1:
    printf("População:\n");
   if (populacao1 > populacao2) {
    carta1_atributo2 = 1;
       printf("A carta vencedora é a cidade de %s com %u habitantes.\n", cidade1, populacao1);
    } else if (populacao1 > populacao2) {
    carta2_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com %u habitantes.\n", cidade2, populacao2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo número de habitantes.\n");
        carta1_atributo2 = 1; 
        carta2_atributo2 = 1; 
    }
    break;

  case 2:
    printf("Área:\n");
    if (area1 > area2) {
    carta1_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com %.2f Km2.\n", cidade1, area1);
    } else if (area1 < area2) {
    carta2_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com %.2f Km2.\n", cidade2, area2);
    } else {
        printf("Empate: ambas as cidades tem a mesma área.\n");
        carta1_atributo2 = 1; 
        carta2_atributo2 = 1; 
    }
    break;

  case 3:
    printf("Densidade Populacional: \n");
     if (densidade2 < densidade2) {
    carta1_atributo1 = 2;
        printf("A carta vencedora é a cidade de %s com %.2f habitantes por Km2.\n", cidade1, densidade1);
    } else if (densidade2 > densidade2) {
    carta2_atributo1 = 2;
        printf("A carta vencedora é a cidade de %s com %.2f habitantes por Km2.\n", cidade2, densidade2);
    } else {
        printf("Empate: ambas as cidades tem a mesma densidade populaciona.\n");
        carta1_atributo2 = 1; 
        carta2_atributo2 = 1; 
    }
    break;

  case 4:
    printf("PIB: \n");
     if (PIB1 > PIB2) {
    carta1_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com PIB de R$ %.2f pontos.\n", cidade1, PIB1);
    } else if (PIB1 < PIB2) {
    carta2_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com PIB de R$ %.2f pontos.\n", cidade2, PIB2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo PIB.\n"); 
        carta1_atributo2 = 1; 
        carta2_atributo2 = 1;        
    }
    break;

  case 5:
    printf("PIB per Capita: \n ");
    if (capita1 > capita2) {
    carta1_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com PIB per capita de R$ %.2f.\n", cidade1, capita1);
    } else if (capita1 < capita2) {
    carta2_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com PIB per capita de R$ %.2f.\n", cidade2, capita2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo PIB per capita.\n"); 
        carta1_atributo2 = 1; 
        carta2_atributo2 = 1;        
    }
    break;

  case 6:
    printf("Pontos Turísticos: \n");
    if (turismo1 > turismo2) {
    carta1_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com %d pontos turísticos.\n", cidade1, turismo1);
    } else if (turismo1 < turismo2) {
    carta2_atributo2 = 1;
        printf("A carta vencedora é a cidade de %s com %d pontos turísticos.\n", cidade2, turismo2);
    } else {
        printf("Empate: ambas as cidades tem o mesmo número de pontos turísticos.\n"); 
        carta1_atributo2 = 1; 
        carta2_atributo2 = 1; 
    }
    break;

  default: // Caso que trata uma opção inválida 
    printf("Opção inválida!\n");
    break;
  }


// Avalia o resultado final com base nos atributos das cartas 
 if (carta1_atributo1 > carta2_atributo1){ //Se a primeira carta tem maior pontuação no primeiro atributo do que a primeira...
    //Avalia-se se ela tem maior pontuação no segundo atributo, senão temos um empate!
    resultado_final = carta1_atributo2 > carta2_atributo2 ? "**A carta 01 é a Vencedora!**": "**Temos um Empate!**";

 } else {// Agora, se a segunda carta tem maior pontuação no primeiro atributo dop que a primeira...
   //Avalia-se se ela tem maior pontuação no segundo atributo, senão temos um empate!
    resultado_final = carta1_atributo2 > carta2_atributo2 ? "**Temos um Empate!**": "**A carta 02 é a Vencedora!**";
    
 }
// Exibe o resultado final  
    printf(resultado_final);

    return 0;
}
