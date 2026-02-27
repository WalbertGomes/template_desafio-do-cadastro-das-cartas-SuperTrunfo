#include <stdio.h>

int main(){

    //Com modificacao para o nivel 

    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int PontosTuristicos1;


    printf("cadastro da carta 1 \n");
    
    printf("Digite o seu estado (A ao H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta ex: A01: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &PontosTuristicos1);

    float densidade1 = populacao1 / area1;
    float percapita1 = pib1 / populacao1;
    float densidadeInvertida1 = 1 / densidade1;
    float superpoder1 = populacao1 + area1 + pib1 + PontosTuristicos1 + percapita1 + densidadeInvertida1;




    
    printf("---Carta 1 cadastrada--- \n");
    printf("estado: %c\n", estado1 );
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %lu\n", populacao1);
    printf("area: %f km²\n", area1);
    printf("pib: %f \n", pib1);
    printf("Pontosturisticos: %d\n", PontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);
    printf("Super poder:  %.2f\n", superpoder1);
    

    
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int PontosTuristicos2;


    printf("cadastro da carta 2 \n");
    
    printf("Digite o seu estado (A ao H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta ex: A01: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &PontosTuristicos2);

    float densidade2 = populacao2 / area2;
    float percapita2 = pib2 / populacao2;
    float densidadeInvertida2 = 1 / densidade2;
    float superpoder2 = populacao2 + area2 + pib2 + PontosTuristicos2 + percapita2 + densidadeInvertida2;




    printf("---Carta 2 cadastrada--- \n");
    printf("estado: %c\n", estado2 );
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %lu\n", populacao2);
    printf("area: %f km²\n", area2);
    printf("pib: %f\n", pib2);
    printf("Pontosturisticos: %d\n", PontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);
    printf("Super poder:  %.2f\n", superpoder2);

    
    printf("---RESULTADO FINAL (1 = CARTA1, 0 = CARTA2): ---\n");
    
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf ("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadeInvertida1 > densidadeInvertida2);
    printf("PIB Per Capita: %d\n", percapita1 > percapita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    
    

    return 0;




  

}
