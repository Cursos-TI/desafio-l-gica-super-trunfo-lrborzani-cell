#include <stdio.h>

int main() {

    printf("Bem-vindo ao Super Trunfo - Cidades!\n");
    printf("Vamos cadastrar as informações das cartas de duas cidades.\n");

    // ========================
    // CIDADE 1
    // ========================
    printf("\nDigite as informações da Cidade 1:\n");

    char codigo01[20];
    printf("Código: ");
    scanf("%s", &codigo01);

    char estado01[20];
    printf("Estado: ");
    scanf("%s", &estado01);

    char nome01[30];
    printf("Nome da cidade: ");
    fgets(nome01,30,stdin);

    int populacao01;
    printf("População: ");
    scanf("%d", &populacao01);

    float area01;
    printf("Área (km²): ");
    scanf("%f", &area01);

    float pib01;
    printf("PIB (R$): ");
    scanf("%f", &pib01);

    int pontosTuristicos01;
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos01);

    // Cálculos
    float densidade01 = (area01 != 0) ? populacao01 / area01 : 0;
    float pibPerCapita01 = (populacao01 != 0) ? pib01 / populacao01 : 0;


    // ========================
    // CIDADE 2
    // ========================
    printf("\nDigite as informações da Cidade 2:\n");

    char codigo02[20];
    printf("Código: ");
    scanf("%s", &codigo02);

    char estado02[20];
    printf("Estado: ");
    scanf("%s", &estado02);

    char nome02[30];
    printf("Nome da cidade: ");
    fgets(nome02,30,stdin);

    int populacao02;
    printf("População: ");
    scanf("%d", &populacao02);

    float area02;
    printf("Área (km²): ");
    scanf("%f", &area02);

    float pib02;
    printf("PIB (R$): ");
    scanf("%f", &pib02);

    int pontosTuristicos02;
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos02);

    // Cálculos
    float densidade02 = (area02 != 0) ? populacao02 / area02 : 0;
    float pibPerCapita02 = (populacao02 != 0) ? pib02 / populacao02 : 0;


    // ========================
    // EXIBIÇÃO DOS DADOS
    // ========================
    printf("\n===== DADOS DAS CARTAS =====\n");

    printf("\nCidade 1: %s\n", nome01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Densidade: %.2f\n", densidade01);
    printf("PIB per capita: %.2f\n", pibPerCapita01);

    printf("\nCidade 2: %s\n", nome02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Densidade: %.2f\n", densidade02);
    printf("PIB per capita: %.2f\n", pibPerCapita02);


    // ========================
    // COMPARAÇÕES
    // ========================
    printf("\n===== RESULTADOS =====\n");

    // População
    if (populacao01 > populacao02) {
        printf("Maior população: %s\n", nome01);
    } else if (populacao02 > populacao01) {
        printf("Maior população: %s\n", nome02);
    } else {
        printf("População: empate\n");
    }

    // Área
    if (area01 > area02) {
        printf("Maior área: %s\n", nome01);
    } else if (area02 > area01) {
        printf("Maior área: %s\n", nome02);
    } else {
        printf("Área: empate\n");
    }

    // PIB
    if (pib01 > pib02) {
        printf("Maior PIB: %s\n", nome01);
    } else if (pib02 > pib01) {
        printf("Maior PIB: %s\n", nome02);
    } else {
        printf("PIB: empate\n");
    }

    // Densidade (MENOR vence)
    if (densidade01 < densidade02) {
        printf("Menor densidade: %s\n", nome01);
    } else if (densidade02 < densidade01) {
        printf("Menor densidade: %s\n", nome02);
    } else {
        printf("Densidade: empate\n");
    }

    // PIB per capita
    if (pibPerCapita01 > pibPerCapita02) {
        printf("Maior PIB per capita: %s\n", nome01);
    } else if (pibPerCapita02 > pibPerCapita01) {
        printf("Maior PIB per capita: %s\n", nome02);
    } else {
        printf("PIB per capita: empate\n");
    }

    return 0;
}