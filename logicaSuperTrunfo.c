#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    unsigned long int populacao1;
    int turismo1;
    char nome_pais1[50];
    float pib1, area1;
    float densidadepop1;

    // Variáveis para a segunda carta
    unsigned long int populacao2;
    int turismo2;
    char nome_pais2[50];
    float pib2, area2;
    float densidadepop2;

    int escolha1, escolha2;
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    printf("\n***Bem-vindo(a) ao Jogo Super Trunfo:***\n");

    // 1 - Cadastro das Cartas
    printf("Insira os dados da primeira carta:\n");
    printf("Qual o nome do pais? (Inserir nome junto sem o espaco:) ");
    scanf("%s", nome_pais1);
    printf("Qual a populacao do pais?: ");
    scanf("%lu", &populacao1);
    printf("Qual a area do pais? (em km2) ");
    scanf("%f", &area1);
    printf("Qual e o PIB do pais? ");
    scanf("%f", &pib1);
    printf("Quantos pontos turisticos tem o pais? ");
    scanf("%d", &turismo1);
    densidadepop1 = populacao1 / area1;

    printf("\nInsira os dados da segunda carta:\n");
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
    densidadepop2 = populacao2 / area2;

    // Array de strings para facilitar a exibição dos nomes dos atributos
    const char* atributos[] = {"Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica"};

    // 3 - Menu Interativo e Comparacao de Cartas
    printf("\n--- Escolha o PRIMEIRO atributo para comparacao ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("----------------------------------------------------\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha1);

    while (escolha1 < 1 || escolha1 > 5) {
        printf("Opcao invalida. Por favor, escolha um numero entre 1 e 5: ");
        scanf("%d", &escolha1);
    }
    
    printf("\n--- Escolha o SEGUNDO atributo para comparacao ---\n");
    // Menu dinâmico para a segunda escolha
    int i;
    for (i = 1; i <= 5; i++) {
        if (i != escolha1) {
            printf("%d - %s\n", i, atributos[i-1]);
        }
    }
    printf("----------------------------------------------------\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha2);

    while (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 5) {
        printf("Opcao invalida. Escolha um atributo diferente do primeiro e entre 1 e 5.\n");
        printf("Sua nova escolha: ");
        scanf("%d", &escolha2);
    }
    
    // Arrays para guardar os valores dos atributos escolhidos
    float valores1[2], valores2[2];
    
    // Atribui os valores dos atributos escolhidos a arrays para fácil acesso
    switch (escolha1) {
        case 1: valores1[0] = (float)populacao1; valores2[0] = (float)populacao2; break;
        case 2: valores1[0] = area1; valores2[0] = area2; break;
        case 3: valores1[0] = pib1; valores2[0] = pib2; break;
        case 4: valores1[0] = (float)turismo1; valores2[0] = (float)turismo2; break;
        case 5: valores1[0] = densidadepop1; valores2[0] = densidadepop2; break;
    }
    switch (escolha2) {
        case 1: valores1[1] = (float)populacao1; valores2[1] = (float)populacao2; break;
        case 2: valores1[1] = area1; valores2[1] = area2; break;
        case 3: valores1[1] = pib1; valores2[1] = pib2; break;
        case 4: valores1[1] = (float)turismo1; valores2[1] = (float)turismo2; break;
        case 5: valores1[1] = densidadepop1; valores2[1] = densidadepop2; break;
    }

    // Lógica de comparação com operador ternário
    pontos_carta1 += (escolha1 == 5) ? (densidadepop1 < densidadepop2) : (valores1[0] > valores2[0]);
    pontos_carta2 += (escolha1 == 5) ? (densidadepop2 < densidadepop1) : (valores2[0] > valores1[0]);

    pontos_carta1 += (escolha2 == 5) ? (densidadepop1 < densidadepop2) : (valores1[1] > valores2[1]);
    pontos_carta2 += (escolha2 == 5) ? (densidadepop2 < densidadepop1) : (valores2[1] > valores1[1]);
    
    // ---
    
    printf("\n*** Resultado da Partida ***\n");
    printf("Nomes dos Países: %s e %s\n", nome_pais1, nome_pais2);
    printf("Atributos comparados: %s e %s\n", atributos[escolha1 - 1], atributos[escolha2 - 1]);
    
    // Exibindo os valores de forma clara
    printf("\n--- Valores dos Atributos ---\n");
    printf("Atributo: %s\n", atributos[escolha1-1]);
    printf(" %s: %.2f\n", nome_pais1, valores1[0]);
    printf(" %s: %.2f\n", nome_pais2, valores2[0]);
    
    printf("\nAtributo: %s\n", atributos[escolha2-1]);
    printf(" %s: %.2f\n", nome_pais1, valores1[1]);
    printf(" %s: %.2f\n", nome_pais2, valores2[1]);

    printf("\n--- Pontuacao ---\n");
    printf("Pontos %s: %d\n", nome_pais1, pontos_carta1);
    printf("Pontos %s: %d\n", nome_pais2, pontos_carta2);
    
    // Determinando o vencedor
    if (pontos_carta1 > pontos_carta2) {
        printf("\nResultado: Carta 1 (%s) VENCEU!\n", nome_pais1);
    } else if (pontos_carta2 > pontos_carta1) {
        printf("\nResultado: Carta 2 (%s) VENCEU!\n", nome_pais2);
    } else {
        printf("\nEmpate na contagem de pontos! Desempate pela soma dos atributos...\n");
        
        float soma_carta1 = valores1[0] + valores1[1];
        float soma_carta2 = valores2[0] + valores2[1];
        
        printf("Soma dos atributos de %s: %.2f\n", nome_pais1, soma_carta1);
        printf("Soma dos atributos de %s: %.2f\n", nome_pais2, soma_carta2);

        if (soma_carta1 > soma_carta2) {
            printf("Resultado do desempate: Carta 1 (%s) venceu!\n", nome_pais1);
        } else if (soma_carta2 > soma_carta1) {
            printf("Resultado do desempate: Carta 2 (%s) venceu!\n", nome_pais2);
        } else {
            printf("Empate total! As somas tambem sao iguais.\n");
        }
    }
    
    return 0;
}