#include <stdio.h>

int main(){

    //inserindo as variáveis
    char Estado1[50] = "Parana",Estado2[50] = "Bahia";                   // Estado que se encontra
    char codigo1[4] = "A01",codigo2[4] = "A02";                          // Código da carta (A01)
    char cidade1[50]= "Curitiba",cidade2[50] = "Salvador";               // Nome da cidade
    int populacao1,populacao2;                           // Populaçao da cidade
    float Area1,Area2, DenPop1, DenPop2;                 // Área da cidade em Km²
    float pib1, pib2, PibperCapta1, PibperCapta2;        // PIB da cidade
    int pontosturisticos1,pontosturisticos2;             // Número de pontos turísticos na cidade

    //definindo valores

populacao1 = 1773718;
Area1 = 435036;
pib1 = 79383343;
pontosturisticos1 = 27;
DenPop1 = populacao1 / Area1;
PibperCapta1 = populacao1 / pib1;
  
populacao2 = 2417678;
Area2 = 693442;
pib2 = 66345730;
pontosturisticos2 = 52;
DenPop2 = populacao2 / Area2;
PibperCapta2 = populacao2 / pib2;
    


  
  printf("\n");
  
    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n",cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area em Km²: %f km²\n", Area1);
    printf("PIB: %f Reais\n", pib1);
    printf("Pontos Turisticos: %d \n", pontosturisticos1);
    printf("Densidade Populaciona: %.2f\n",DenPop1);
    printf("O Pib por pessoa é : %f.2\n",PibperCapta1);
  
    printf("\n");
  
    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n",cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area em Km²: %f km²\n", Area2);
    printf("PIB: %f Reais\n", pib2);
    printf("Pontos Turisticos: %d \n", pontosturisticos2);
    printf("Densidade Populaciona: %.2f\n",DenPop2);
    printf("O Pib por pessoa é : %f.2\n",PibperCapta2);

    printf("\n");

    printf("**LOGICA POR TRAZ DO SUPER TRUNFO**\n");
    printf("Comparando as populações\n");
    

    if (populacao1 > populacao2){
        printf("A carta 1 venceu!");
    } else {
    printf("A carta 2 venceu!");
    }
    return 0;
}
