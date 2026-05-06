#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================
    
    char codigo01[] = "A01";
    char estado01[] = "SP";
    char nome01[] = "Campinas";
    int populacao01 = 1214000;
    float area01 = 795.7;
    float pib01 = 72800000000.0;
    int pontos01 = 15;

    float densidade01 = populacao01 / area01;
    float pibPerCapita01 = pib01 / populacao01;


    // =========================
    // CARTA 2
    // =========================

    char codigo02[] = "A02";
    char estado02[] = "RJ";
    char nome02[] = "Niteroi";
    int populacao02 = 515000;
    float area02 = 133.9;
    float pib02 = 23500000000.0;
    int pontos02 = 12;

    float densidade02 = populacao02 / area02;
    float pibPerCapita02 = pib02 / populacao02;


    // =========================
    // ESCOLHA DA CARTA
    // =========================

    int escolhaCarta;

    printf("======= SUPER TRUNFO =======\n");

    printf("\nEscolha sua carta:\n");
    printf("1 - %s\n", codigo01);
    printf("2 - %s\n", codigo02);

    printf("\nDigite sua escolha: ");
    scanf("%d", &escolhaCarta);


    // =========================
    // VARIÁVEIS DO JOGO
    // =========================

    char *jogador;
    char *adversario;

    int popJogador, popAdv;
    float areaJogador, areaAdv;
    float pibJogador, pibAdv;
    int pontosJogador, pontosAdv;
    float densidadeJogador, densidadeAdv;
    float pibCapitaJogador, pibCapitaAdv;


    // =========================
    // DEFINIÇÃO DAS CARTAS
    // =========================

    switch(escolhaCarta) {

        case 1:

            jogador = nome01;
            adversario = nome02;

            popJogador = populacao01;
            popAdv = populacao02;

            areaJogador = area01;
            areaAdv = area02;

            pibJogador = pib01;
            pibAdv = pib02;

            pontosJogador = pontos01;
            pontosAdv = pontos02;

            densidadeJogador = densidade01;
            densidadeAdv = densidade02;

            pibCapitaJogador = pibPerCapita01;
            pibCapitaAdv = pibPerCapita02;


        //Display da carta escolhida. 
         printf("\nSua carta escolhida foi:\n");
         printf("Código: %s\n", codigo01);
         printf("Estado: %s\n", estado01);
         printf("Cidade: %s\n", nome01);
         printf("População: %d\n", populacao01);
         printf("Área: %.2f km²\n", area01);
         printf("PIB: R$ %.2f\n", pib01);
         printf("Densidade populacional: %.2f hab/km²\n", densidade01);
         printf("PIB per capita: R$ %.2f\n", pibPerCapita01);

            break;


        case 2:

            jogador = nome02;
            adversario = nome01;

            popJogador = populacao02;
            popAdv = populacao01;

            areaJogador = area02;
            areaAdv = area01;

            pibJogador = pib02;
            pibAdv = pib01;

            pontosJogador = pontos02;
            pontosAdv = pontos01;

            densidadeJogador = densidade02;
            densidadeAdv = densidade01;

            pibCapitaJogador = pibPerCapita02;
            pibCapitaAdv = pibPerCapita01;

              //Display da carta escolhida. 
             printf("\nSua carta escolhida foi:\n");
             printf("Código: %s\n", codigo02);
             printf("Estado: %s\n", estado02);
             printf("Cidade: %s\n", nome02);
             printf("População: %d\n", populacao02);
             printf("Área: %.2f km²\n", area02);
             printf("PIB: R$ %.2f\n", pib02);
             printf("Densidade populacional: %.2f hab/km²\n", densidade02);
             printf("PIB per capita: R$ %.2f\n", pibPerCapita02);
            break;


        default:
            printf("\nOpção inválida!\n");
            return 0;
    }


    // =========================
    // MENU DO PRIMEIRO ATRIBUTO
    // =========================

    int atributo1, atributo2;

    printf("\n======= ESCOLHA O PRIMEIRO ATRIBUTO =======\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");

    printf("\nDigite a opção: ");
    scanf("%d", &atributo1);


    // =========================
    // MENU DINÂMICO
    // =========================

    printf("\n======= ESCOLHA O SEGUNDO ATRIBUTO =======\n");

    switch(atributo1) {

        case 1:
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            printf("6 - PIB per Capita\n");
            break;

        case 2:
            printf("1 - População\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            printf("6 - PIB per Capita\n");
            break;

        case 3:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            printf("6 - PIB per Capita\n");
            break;

        case 4:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Demográfica\n");
            printf("6 - PIB per Capita\n");
            break;

        case 5:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("6 - PIB per Capita\n");
            break;

        case 6:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            break;

        default:
            printf("\nAtributo inválido!\n");
            return 0;
    }

    printf("\nDigite a opção: ");
    scanf("%d", &atributo2);


    // Validação
    if(atributo1 == atributo2) {
        printf("\nErro: atributos iguais não são permitidos!\n");
        return 0;
    }


    // =========================
    // VARIÁVEIS DE COMPARAÇÃO
    // =========================

    float valor1Jogador = 0;
    float valor1Adv = 0;

    float valor2Jogador = 0;
    float valor2Adv = 0;

    char nomeAtributo1[50];
    char nomeAtributo2[50];


    // =========================
    // ATRIBUTO 1
    // =========================

    switch(atributo1) {

        case 1:
            valor1Jogador = popJogador;
            valor1Adv = popAdv;
            sprintf(nomeAtributo1, "População");
            break;

        case 2:
            valor1Jogador = areaJogador;
            valor1Adv = areaAdv;
            sprintf(nomeAtributo1, "Área");
            break;

        case 3:
            valor1Jogador = pibJogador;
            valor1Adv = pibAdv;
            sprintf(nomeAtributo1, "PIB");
            break;

        case 4:
            valor1Jogador = pontosJogador;
            valor1Adv = pontosAdv;
            sprintf(nomeAtributo1, "Pontos Turísticos");
            break;

        case 5:
            valor1Jogador = densidadeJogador;
            valor1Adv = densidadeAdv;
            sprintf(nomeAtributo1, "Densidade Demográfica");
            break;

        case 6:
            valor1Jogador = pibCapitaJogador;
            valor1Adv = pibCapitaAdv;
            sprintf(nomeAtributo1, "PIB per Capita");
            break;
    }


    // =========================
    // ATRIBUTO 2
    // =========================

    switch(atributo2) {

        case 1:
            valor2Jogador = popJogador;
            valor2Adv = popAdv;
            sprintf(nomeAtributo2, "População");
            break;

        case 2:
            valor2Jogador = areaJogador;
            valor2Adv = areaAdv;
            sprintf(nomeAtributo2, "Área");
            break;

        case 3:
            valor2Jogador = pibJogador;
            valor2Adv = pibAdv;
            sprintf(nomeAtributo2, "PIB");
            break;

        case 4:
            valor2Jogador = pontosJogador;
            valor2Adv = pontosAdv;
            sprintf(nomeAtributo2, "Pontos Turísticos");
            break;

        case 5:
            valor2Jogador = densidadeJogador;
            valor2Adv = densidadeAdv;
            sprintf(nomeAtributo2, "Densidade Demográfica");
            break;

        case 6:
            valor2Jogador = pibCapitaJogador;
            valor2Adv = pibCapitaAdv;
            sprintf(nomeAtributo2, "PIB per Capita");
            break;
    }


    // =========================
    // SOMA DOS ATRIBUTOS
    // =========================

    float somaJogador;
    float somaAdv;

    // Densidade: menor vence
    somaJogador =
        (atributo1 == 5 ? -valor1Jogador : valor1Jogador) +
        (atributo2 == 5 ? -valor2Jogador : valor2Jogador);

    somaAdv =
        (atributo1 == 5 ? -valor1Adv : valor1Adv) +
        (atributo2 == 5 ? -valor2Adv : valor2Adv);


    // =========================
    // RESULTADOS
    // =========================

    printf("\n======= RESULTADO DA RODADA =======\n");

    printf("\nCarta do jogador: %s\n", jogador);
    printf("Carta adversária: %s\n", adversario);

    printf("\nAtributo 1: %s\n", nomeAtributo1);
    printf("%s: %.2f\n", jogador, valor1Jogador);
    printf("%s: %.2f\n", adversario, valor1Adv);

    printf("\nAtributo 2: %s\n", nomeAtributo2);
    printf("%s: %.2f\n", jogador, valor2Jogador);
    printf("%s: %.2f\n", adversario, valor2Adv);

    printf("\n======= SOMA DOS ATRIBUTOS =======\n");

    printf("%s: %.2f\n", jogador, somaJogador);
    printf("%s: %.2f\n", adversario, somaAdv);


    // =========================
    // OPERADOR TERNÁRIO
    // =========================

    printf("\n======= VENCEDOR =======\n");

    (somaJogador > somaAdv)
        ? printf("%s venceu a rodada!\n", jogador)

        : (somaAdv > somaJogador)

            ? printf("%s venceu a rodada!\n", adversario)

            : printf("Empate!\n");


    return 0;
}