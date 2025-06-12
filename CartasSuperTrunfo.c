#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo_card1[6];
    char nome_cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int numeros_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo_card2[6];
    char nome_cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int numeros_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Variáveis para o jogo
    int opcao1, opcao2;
    float valor1_attr1, valor1_attr2, valor2_attr1, valor2_attr2;
    float soma1, soma2;
    int pontos1 = 0, pontos2 = 0;
    char nome_attr1[30], nome_attr2[30];

    printf("=== SUPER TRUNFO - CADASTRO DAS CARTAS ===\n\n");

    // Cadastro da Carta 1
    printf("Digite os dados da Carta 1:\n");
    
    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o codigo da carta: ");
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

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeros_pontos_turisticos1);
    getchar();

    // Cálculos para a Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    printf("\n");

    // Cadastro da Carta 2
    printf("Digite os dados da Carta 2:\n");
    
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo da carta: ");
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

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeros_pontos_turisticos2);
    getchar();

    // Cálculos para a Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Exibição das cartas cadastradas
    printf("\n");
    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║                    CARTAS CADASTRADAS                      ║\n");
    printf("╚════════════════════════════════════════════════════════════╝\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("┌────────────────────────────────────────────────────────────┐\n");
    printf("│ Estado: %c\n", estado1);
    printf("│ Codigo: %s\n", codigo_card1);
    printf("│ Nome da cidade: %s", nome_cidade1);
    printf("│ Populacao: %d\n", populacao1);
    printf("│ Area: %.2f km²\n", area1);
    printf("│ PIB: %.2f bilhoes de reais\n", pib1);
    printf("│ Numero de pontos turisticos: %d\n", numeros_pontos_turisticos1);
    printf("│ Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("│ PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("└────────────────────────────────────────────────────────────┘\n");

    printf("\n");

    printf("Carta 2:\n");
    printf("┌────────────────────────────────────────────────────────────┐\n");
    printf("│ Estado: %c\n", estado2);
    printf("│ Codigo: %s\n", codigo_card2);
    printf("│ Nome da cidade: %s", nome_cidade2);
    printf("│ Populacao: %d\n", populacao2);
    printf("│ Area: %.2f km²\n", area2);
    printf("│ PIB: %.2f bilhoes de reais\n", pib2);
    printf("│ Numero de pontos turisticos: %d\n", numeros_pontos_turisticos2);
    printf("│ Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("│ PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("└────────────────────────────────────────────────────────────┘\n");

    // Início do jogo - Escolha dos atributos
    printf("\n");
    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║                    SUPER TRUNFO - JOGO                     ║\n");
    printf("╚════════════════════════════════════════════════════════════╝\n");
    printf("\n");

    // Menu para escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);

    // Validação da primeira opção
    while (opcao1 < 1 || opcao1 > 6) {
        printf("Opcao invalida! Digite uma opcao entre 1 e 6: ");
        scanf("%d", &opcao1);
    }

    // Menu dinâmico para escolha do segundo atributo
    printf("\nEscolha o SEGUNDO atributo para comparacao:\n");
    
    // Exibe apenas as opções que não foram escolhidas
    if (opcao1 != 1) printf("1. Populacao\n");
    if (opcao1 != 2) printf("2. Area\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Numero de pontos turisticos\n");
    if (opcao1 != 5) printf("5. Densidade populacional\n");
    if (opcao1 != 6) printf("6. PIB per capita\n");
    
    printf("Digite sua opcao: ");
    scanf("%d", &opcao2);

    // Validação da segunda opção
    while (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        if (opcao2 == opcao1) {
            printf("Voce ja escolheu esse atributo! Escolha outro: ");
        } else {
            printf("Opcao invalida! Digite uma opcao valida: ");
        }
        scanf("%d", &opcao2);
    }

    // Obter valores dos atributos escolhidos para ambas as cartas
    // Primeiro atributo
    switch (opcao1) {
        case 1:
            valor1_attr1 = (float)populacao1;
            valor2_attr1 = (float)populacao2;
            sprintf(nome_attr1, "Populacao");
            break;
        case 2:
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            sprintf(nome_attr1, "Area");
            break;
        case 3:
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            sprintf(nome_attr1, "PIB");
            break;
        case 4:
            valor1_attr1 = (float)numeros_pontos_turisticos1;
            valor2_attr1 = (float)numeros_pontos_turisticos2;
            sprintf(nome_attr1, "Pontos Turisticos");
            break;
        case 5:
            valor1_attr1 = densidade_populacional1;
            valor2_attr1 = densidade_populacional2;
            sprintf(nome_attr1, "Densidade Populacional");
            break;
        case 6:
            valor1_attr1 = pib_per_capita1;
            valor2_attr1 = pib_per_capita2;
            sprintf(nome_attr1, "PIB per Capita");
            break;
    }

    // Segundo atributo
    switch (opcao2) {
        case 1:
            valor1_attr2 = (float)populacao1;
            valor2_attr2 = (float)populacao2;
            sprintf(nome_attr2, "Populacao");
            break;
        case 2:
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            sprintf(nome_attr2, "Area");
            break;
        case 3:
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            sprintf(nome_attr2, "PIB");
            break;
        case 4:
            valor1_attr2 = (float)numeros_pontos_turisticos1;
            valor2_attr2 = (float)numeros_pontos_turisticos2;
            sprintf(nome_attr2, "Pontos Turisticos");
            break;
        case 5:
            valor1_attr2 = densidade_populacional1;
            valor2_attr2 = densidade_populacional2;
            sprintf(nome_attr2, "Densidade Populacional");
            break;
        case 6:
            valor1_attr2 = pib_per_capita1;
            valor2_attr2 = pib_per_capita2;
            sprintf(nome_attr2, "PIB per Capita");
            break;
    }

    // Comparação dos atributos
    printf("\n");
    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║                    RESULTADO DA BATALHA                    ║\n");
    printf("╚════════════════════════════════════════════════════════════╝\n");
    printf("\n");

    // Exibir comparação do primeiro atributo
    printf("Comparacao - %s:\n", nome_attr1);
    printf("Carta 1 (%s): %.2f\n", nome_cidade1, valor1_attr1);
    printf("Carta 2 (%s): %.2f\n", nome_cidade2, valor2_attr1);

    // Lógica de comparação para o primeiro atributo
    if (opcao1 == 5) { // Densidade populacional - menor vence
        if (valor1_attr1 < valor2_attr1) {
            printf("Vencedor do %s: Carta 1\n", nome_attr1);
            pontos1++;
        } else if (valor2_attr1 < valor1_attr1) {
            printf("Vencedor do %s: Carta 2\n", nome_attr1);
            pontos2++;
        } else {
            printf("Empate no %s\n", nome_attr1);
        }
    } else { // Outros atributos - maior vence
        if (valor1_attr1 > valor2_attr1) {
            printf("Vencedor do %s: Carta 1\n", nome_attr1);
            pontos1++;
        } else if (valor2_attr1 > valor1_attr1) {
            printf("Vencedor do %s: Carta 2\n", nome_attr1);
            pontos2++;
        } else {
            printf("Empate no %s\n", nome_attr1);
        }
    }

    printf("\n");

    // Exibir comparação do segundo atributo
    printf("Comparacao - %s:\n", nome_attr2);
    printf("Carta 1 (%s): %.2f\n", nome_cidade1, valor1_attr2);
    printf("Carta 2 (%s): %.2f\n", nome_cidade2, valor2_attr2);

    // Lógica de comparação para o segundo atributo
    if (opcao2 == 5) { // Densidade populacional - menor vence
        if (valor1_attr2 < valor2_attr2) {
            printf("Vencedor do %s: Carta 1\n", nome_attr2);
            pontos1++;
        } else if (valor2_attr2 < valor1_attr2) {
            printf("Vencedor do %s: Carta 2\n", nome_attr2);
            pontos2++;
        } else {
            printf("Empate no %s\n", nome_attr2);
        }
    } else { // Outros atributos - maior vence
        if (valor1_attr2 > valor2_attr2) {
            printf("Vencedor do %s: Carta 1\n", nome_attr2);
            pontos1++;
        } else if (valor2_attr2 > valor1_attr2) {
            printf("Vencedor do %s: Carta 2\n", nome_attr2);
            pontos2++;
        } else {
            printf("Empate no %s\n", nome_attr2);
        }
    }

    // Soma dos atributos
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    printf("\n");
    printf("╔════════════════════════════════════════════════════════════╗\n");
    printf("║                    RESULTADO FINAL                         ║\n");
    printf("╚════════════════════════════════════════════════════════════╝\n");
    printf("\n");

    printf("Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nome_cidade1, soma1);
    printf("Carta 2 (%s): %.2f\n", nome_cidade2, soma2);

    printf("\nPontuacao por atributo:\n");
    printf("Carta 1: %d pontos\n", pontos1);
    printf("Carta 2: %d pontos\n", pontos2);

    printf("\n");

    // Resultado final baseado na soma
    if (soma1 > soma2) {
        printf("🏆 VENCEDOR DA RODADA: Carta 1 (%s) 🏆\n", nome_cidade1);
    } else if (soma2 > soma1) {
        printf("🏆 VENCEDOR DA RODADA: Carta 2 (%s) 🏆\n", nome_cidade2);
    } else {
        printf("🤝 EMPATE! 🤝\n");
    }

    printf("\n");
    printf("Obrigado por jogar Super Trunfo!\n");

    return 0;
}