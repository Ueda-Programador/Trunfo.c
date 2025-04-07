#include <stdio.h>

int main(){

    //inserindo as variáveis
    char Estado1[50],Estado2[50];                        // Estado que se encontra
    char codigo1[4],codigo2[4];                          // Código da carta (A01)
    char cidade1[50],cidade2[50];                        // Nome da cidade
    int populacao1,populacao2;                           // Populaçao da cidade
    float Area1,Area2;                                   // Área da cidade em Km²
    float pib1, pib2;                                    // PIB da cidade
    int pontosturisticos1,pontosturisticos2;             // Número de pontos turísticos na cidade

    //definindo valores

    printf("Digite os dados da Carta 1");
    printf("\n");
    printf("Digite o estado: ");
    scanf("%s", &Estado1);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("Area em Km²: ");
    scanf("%f", &Area1);
    printf("PIB (em reais): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);
  
    printf("\n");
    
    printf("Digite os dados da Carta 2 \n");
    printf("\n");
    printf("Digite o estado: ");
    scanf("%s", &Estado2);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Area em Km²: ");
    scanf("%f", &Area2);
    printf("PIB(em reais): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);
  
  printf("\n");
  
    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n",cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area em Km²: %f km²\n", Area1);
    printf("PIB: %f Reais\n", pib1);
    printf("Pontos Turisticos: %d \n", pontosturisticos1);
  
    printf("\n");
  
    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n",cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area em Km²: %f km²\n", Area2);
    printf("PIB: %f Reais\n", pib2);
    printf("Pontos Turisticos: %d \n", pontosturisticos2);

  
    return 0;
  
    }
