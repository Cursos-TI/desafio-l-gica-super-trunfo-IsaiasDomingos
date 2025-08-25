#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Nível Aventureiro
// Este código implementa um menu interativo e a lógica de comparacao entre duas cartas de cidades.

int main() {
    // Definicao das variaveis para armazenar as propriedades das cidades
    // Variaveis para a primeira carta
    unsigned long int populacao1;
    int turismo1;
    char nome1[50];
    char cod1[4];
    float pib1, area1;
    char estado1[20];
    float densidadepop1, pibcap1;

    // Variaveis para a segunda carta
    unsigned long int populacao2;
    int turismo2;
    char nome2[50];
    char cod2[4];
    float pib2, area2;
    char estado2[20];
    float densidadepop2, pibcap2;

    int escolhaMenu;

    printf("\n***Bem-vindo(a) ao Jogo Super Trunfo:***\n");

    // 1 - Cadastro das Cartas:
    // Implemente a logica para solicitar ao usuario que insira os dados das cidades
    // A logica do cadastro ja esta implementada do seu codigo anterior
    
    // Cadastro da primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %s", estado1); 

    printf("Qual o codigo da cidade? (ex: A01): ");
    scanf("%s", cod1); 

    printf("Qual o nome da cidade? (Inserir nome junto sem o espaco:)");
    scanf("%s", nome1);

    printf("Qual a populacao da cidade?: ");
    scanf("%lu", &populacao1);

    printf("Qual a area da cidade? (em km2) ");
    scanf("%f", &area1);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo1);

    // 2 - Calcular Densidade Populacional e PIB per capita:
    densidadepop1 = populacao1 / area1;
    pibcap1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %s", estado2);

    printf("Qual o codigo da cidade? (ex: B02): ");
    scanf("%s", cod2); 

    printf("Qual o nome da cidade?: (Inserir o nome junto sem o espaco) ");
    scanf("%s", nome2);

    printf("Qual a populacao da cidade?: ");
    scanf("%lu", &populacao2);

    printf("Qual a area da cidade? (em km2) ");
    scanf("%f", &area2);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo2);
    
    // 2 - Calcular Densidade Populacional e PIB per capita:
    densidadepop2 = populacao2 / area2;
    pibcap2 = pib2 / populacao2;

    // 3 - Menu Interativo e Comparacao de Cartas:
    printf("\n--- Escolha o atributo para comparacao ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("--------------------------------------------\n");
    printf("Sua escolha: ");
    scanf("%d", &escolhaMenu);

    // Estrutura switch para a logica do menu
    switch (escolhaMenu) {
        case 1: // Comparacao de Populacao
            printf("\nComparacao de cartas (Atributo: Populacao):\n");
            printf("Carta 1 - %s : %lu\n", nome1, populacao1);
            printf("Carta 2 - %s : %lu\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Comparacao de Area
            printf("\nComparacao de cartas (Atributo: Area):\n");
            printf("Carta 1 - %s : %.2f km2\n", nome1, area1);
            printf("Carta 2 - %s : %.2f km2\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Comparacao de PIB
            printf("\nComparacao de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s : %.2f\n", nome1, pib1);
            printf("Carta 2 - %s : %.2f\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparacao de Pontos Turisticos
            printf("\nComparacao de cartas (Atributo: Pontos Turisticos):\n");
            printf("Carta 1 - %s : %d\n", nome1, turismo1);
            printf("Carta 2 - %s : %d\n", nome2, turismo2);
            if (turismo1 > turismo2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (turismo2 > turismo1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparacao de Densidade Demografica (Regra Invertida)
            printf("\nComparacao de cartas (Atributo: Densidade Demografica):\n");
            printf("Carta 1 - %s : %.2f hab/km2\n", nome1, densidadepop1);
            printf("Carta 2 - %s : %.2f hab/km2\n", nome2, densidadepop2);
            if (densidadepop1 < densidadepop2) { // Menor valor vence
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (densidadepop2 < densidadepop1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida. Por favor, escolha um numero entre 1 e 5.\n");
            break;
    }

    return 0;
}
