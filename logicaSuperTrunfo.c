#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

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

      
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

     printf("\n***Bem-vindo(a) ao Jogo Super Trunfo:***\n");

    // Cadastro da primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); 

    printf("Qual o codigo da cidade? (ex: A01): ");
    scanf("%s", cod1); 

    printf("Qual o nome da cidade? (Inserir nome junto sem o espaço:)");
    scanf("%s", nome1);

    printf("Qual a populacao da cidade?: ");
    scanf("%lu", &populacao1);

    printf("Qual a área da cidade? (em km²) ");
    scanf("%f", &area1);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo1);

    densidadepop1 = populacao1 / area1;
    pibcap1 = pib1 / populacao1;

    // Cadastro da segunda carta

    printf("\nInsira os dados da segunda carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Qual o codigo da cidade? (ex: B02): ");
    scanf("%s", cod2); 

    printf("Qual o nome da cidade?: (Inserir o nome junto sem o espaço) ");
    scanf("%s", nome2);

    printf("Qual a populacao da cidade?: ");
    scanf("%lu", &populacao2);

    printf("Qual a área da cidade? (em km²) ");
    scanf("%f", &area2);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo2);
    

    densidadepop2 = populacao2 / area2;
    pibcap2 = pib2 / populacao2;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
