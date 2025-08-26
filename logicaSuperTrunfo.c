#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Nível Aventureiro
// Este código implementa um menu interativo e a lógica de comparacao entre duas cartas de países.

int main() {
    // Definição das variáveis para armazenar as propriedades dos países
    // Variáveis para a primeira carta
    unsigned long int populacao1;
    int turismo1;
    char nome_pais1[50];
    char cod1[4];
    float pib1, area1;
    char estado1[20];
    float densidadepop1, pibcap1;

    // Variáveis para a segunda carta
    unsigned long int populacao2;
    int turismo2;
    char nome_pais2[50];
    char cod2[4];
    float pib2, area2;
    char estado2[20];
    float densidadepop2, pibcap2;

    int escolhaMenu;

    printf("\n***Bem-vindo(a) ao Jogo Super Trunfo:***\n");

    // 1 - Cadastro das Cartas:
    // Implemente a logica para solicitar ao usuario que insira os dados dos paises
    
    // Cadastro da primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %s", estado1); 

    printf("Qual o codigo do pais? (ex: A01): ");
    scanf("%s", cod1); 

    printf("Qual o nome do pais? (Inserir nome junto sem o espaco:)");
    scanf("%s", nome_pais1);

    printf("Qual a populacao do pais?: ");
    scanf("%lu", &populacao1);

    printf("Qual a area do pais? (em km2) ");
    scanf("%f", &area1);

    printf("Qual e o PIB do pais? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem o pais? ");
    scanf("%d", &turismo1);

    // 2 - Calcular Densidade Populacional e PIB per capita:
    densidadepop1 = populacao1 / area1;
    pibcap1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %s", estado2);

    printf("Qual o codigo do pais? (ex: B02): ");
    scanf("%s", cod2); 

    printf("Qual o nome do pais?: (Inserir o nome junto sem o espaco) ");
    scanf("%s", nome_pais2);

    printf("Qual a populacao do pais?: ");
    scanf("%lu", &populacao2);

    printf("Qual a area do pais? (em km2) ");
    scanf("%f", &area2);

    printf("Qual e o PIB do pais? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem o pais? ");
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
            printf("Carta 1 - %s : %lu\n", nome_pais1, populacao1);
            printf("Carta 2 - %s : %lu\n", nome_pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome_pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome_pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Comparacao de Area
            printf("\nComparacao de cartas (Atributo: Area):\n");
            printf("Carta 1 - %s : %.2f km2\n", nome_pais1, area1);
            printf("Carta 2 - %s : %.2f km2\n", nome_pais2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome_pais1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome_pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Comparacao de PIB
            printf("\nComparacao de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s : %.2f\n", nome_pais1, pib1);
            printf("Carta 2 - %s : %.2f\n", nome_pais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome_pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome_pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparacao de Pontos Turisticos
            printf("\nComparacao de cartas (Atributo: Pontos Turisticos):\n");
            printf("Carta 1 - %s : %d\n", nome_pais1, turismo1);
            printf("Carta 2 - %s : %d\n", nome_pais2, turismo2);
            if (turismo1 > turismo2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome_pais1);
            } else if (turismo2 > turismo1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome_pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparacao de Densidade Demografica (Regra Invertida)
            printf("\nComparacao de cartas (Atributo: Densidade Demografica):\n");
            printf("Carta 1 - %s : %.2f hab/km2\n", nome_pais1, densidadepop1);
            printf("Carta 2 - %s : %.2f hab/km2\n", nome_pais2, densidadepop2);
            if (densidadepop1 < densidadepop2) { // Menor valor vence
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome_pais1);
            } else if (densidadepop2 < densidadepop1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome_pais2);
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
