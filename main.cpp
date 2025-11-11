#include <stdio.h>

int main() {
    // Dados das cartas
    char estado1[30], codigo1[30], nome1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    char estado2[30], codigo2[30], nome2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada de dados da Carta 1
    printf("=== Dados da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    float super1 = (float)populacao1 + area1 + pib1 + (float)pontos1 +
                   pibPerCapita1 + (1.0f / densidade1);

    float super2 = (float)populacao2 + area2 + pib2 + (float)pontos2 +
                   pibPerCapita2 + (1.0f / densidade2);

    // Comparações
    int compPop = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPib = pib1 > pib2;
    int compPontos = pontos1 > pontos2;
    int compDensidade = densidade1 < densidade2; // menor vence!
    int compPibCapita = pibPerCapita1 > pibPerCapita2;
    int compSuper = super1 > super2;

    // Saída
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", compPop ? 1 : 2, compPop);
    printf("Área: Carta %d venceu (%d)\n", compArea ? 1 : 2, compArea);
    printf("PIB: Carta %d venceu (%d)\n", compPib ? 1 : 2, compPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", compPontos ? 1 : 2, compPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", compDensidade ? 1 : 2, compDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", compPibCapita ? 1 : 2, compPibCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", compSuper ? 1 : 2, compSuper);

    return 0;
}
