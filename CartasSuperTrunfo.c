#include <stdio.h>

int main() {
    char estado1;
    char codigo_card1[6];
    char nome_cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int numeros_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    char estado2;
    char codigo_card2[6];
    char nome_cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int numeros_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o codigo do card: ");
    scanf("%s", codigo_card1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 40, stdin);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a area: ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o pib: ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeros_pontos_turisticos1);
    getchar();

    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    printf("\n");
    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║                          Carta 1                           ║\n");
    printf("╚════════════════════════════════════════════════════════════╝\n");
    printf("\n");

    printf("Carta 1: \n");
    printf("┌────────────────────────────────────────────────────────────┐\n");
    printf("│ Estado: %c\n", estado1);
    printf("│ Codigo do card: %s\n", codigo_card1);
    printf("│ Nome da cidade: %s", nome_cidade1);
    printf("│ Populacao: %d\n", populacao1);
    printf("│ Area: %.2f km²\n", area1);
    printf("│ Pib: %.2f bilhoes de reais\n", pib1);
    printf("│ Numero de pontos turisticos: %d\n", numeros_pontos_turisticos1);
    printf("│ Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("│ Pib per capita: %.2f reais\n", pib_per_capita1);
    printf("└────────────────────────────────────────────────────────────┘\n");

    printf("Digite os dados do card 2: \n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo do card: ");
    scanf("%s", codigo_card2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 40, stdin);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a area: ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o pib: ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeros_pontos_turisticos2);
    getchar();

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    printf("\n");   
    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║                      Carta 2                               ║\n");
    printf("╚════════════════════════════════════════════════════════════╝\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("┌────────────────────────────────────────────────────────────┐\n");
    printf("│ Estado: %c\n", estado2);
    printf("│ Codigo do card: %s\n", codigo_card2);
    printf("│ Nome da cidade: %s", nome_cidade2);
    printf("│ Populacao: %d\n", populacao2);
    printf("│ Area: %.2f km²\n", area2);
    printf("│ Pib: %.2f bilhoes de reais\n", pib2);
    printf("│ Numero de pontos turisticos: %d\n", numeros_pontos_turisticos2);
    printf("│ Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("│ Pib per capita: %.2f reais\n", pib_per_capita2);
    printf("└────────────────────────────────────────────────────────────┘\n");
}