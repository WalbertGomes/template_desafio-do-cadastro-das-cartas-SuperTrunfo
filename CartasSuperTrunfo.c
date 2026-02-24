#include <stdio.h>

int main(){

    //inicio do supertrunfo
    
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
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
    scanf("%d", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &PontosTuristicos1);

    printf("carta 1 cadastrada \n");
    printf("estado: %c\n", estado1 );
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("Pontosturisticos: %d\n", PontosTuristicos1);




    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
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
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &PontosTuristicos2);

    printf("carta 2 cadastrada \n");
    printf("estado: %c\n", estado2 );
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("Pontosturisticos: %d\n", PontosTuristicos2);



    return 0;




    






























}
