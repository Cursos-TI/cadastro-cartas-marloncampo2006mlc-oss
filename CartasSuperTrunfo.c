
#include <stdio.h>

int main() {

    /* Carta 1 */
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char nomeCidade1[] = "Sao Paulo";
    int populacao1 = 12325000;      
    float area1 = 1521.11f;         
    float pib1 = 699.28f;           
    int pontosTuristicos1 = 50;     

    /* Carta 2 */
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    int pontosTuristicos2 = 30;

    float densidade1 = 0.0f, densidade2 = 0.0f;
    float pibPerCapita1 = 0.0f, pibPerCapita2 = 0.0f;

    if (area1 != 0.0f) {
        densidade1 = (float)populacao1 / area1;
    } else {
        printf("Aviso: area da Carta 1 é 0. Densidade indefinida.\n");
    }

    if (area2 != 0.0f) {
        densidade2 = (float)populacao2 / area2;
    } else {
        printf("Aviso: area da Carta 2 é 0. Densidade indefinida.\n");
    }

    if (populacao1 != 0) {
        pibPerCapita1 = pib1 / (float)populacao1; 
    } else {
        printf("Aviso: populacao da Carta 1 é 0. PIB per capita indefinido.\n");
    }

    if (populacao2 != 0) {
        pibPerCapita2 = pib2 / (float)populacao2;
    } else {
        printf("Aviso: populacao da Carta 2 é 0. PIB per capita indefinido.\n");
    }
    
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    if (area1 != 0.0f) printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    if (populacao1 != 0) printf("PIB per Capita: %.8f (PIB/unidade de pessoa)\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    if (area2 != 0.0f) printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    if (populacao2 != 0) printf("PIB per Capita: %.8f (PIB/unidade de pessoa)\n", pibPerCapita2);

    printf("\n=== Comparação de cartas (Atributo: PIB per Capita) ===\n");
    printf("Carta 1 - %s (%s): %.8f\n", nomeCidade1, codigo1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.8f\n", nomeCidade2, codigo2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate! Ambos têm o mesmo valor de PIB per Capita.\n");
    }

    return 0;
}
