#include <stdio.h>

int main(){
    char estado1[50];
    char codigo_da_carta1[50];
    char cidade1[50];
    int populacao1;
    float area_em_km21;
    float PIB1;
    int pontos_turisticos1;

    char estado2[50];
    char codigo_da_carta2[50];
    char cidade2[50];
    int populacao2;
    float area_em_km22;
    float PIB2;
    int pontos_turisticos2;

    //Leitura de dados - 1
    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área em km2: \n");
    scanf("%f", &area_em_km21);

    printf("Digite o numero do PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    //Leitura de dados - 2

    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área em km2: \n");
    scanf("%f", &area_em_km22);

    printf("Digite o numero do PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    //Reprodução da leitura - 1
    printf("\n\n---- Carta 1 ----\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area_em_km21);
    printf("PIB: %.2f\n", PIB1);
    printf("Quantidades de pontos turisticos: %d\n", pontos_turisticos1);

    //Reprodução da leitura - 2
    printf("\n\n---- Carta 2 ----\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area_em_km22);
    printf("PIB: %.2f\n", PIB2);
    printf("Quantidades de pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}