#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // --- Declaração das variáveis da Carta 1 ---
    char estado1;
    char codigo1[4];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1; // nova variável do desafio nível aventureiro
    float pibPerCapita1; // nova variável do desafio nível aventureiro

    // --- Declaração das variáveis da Carta 2 ---
    char estado2;
    char codigo2[4];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2; // nova variável do desafio nível aventureiro
    float pibPerCapita2; // nova variável do desafio nível aventureiro
    
    // --- Entrada de dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); // espaço antes do %c evita problemas com quebra de linha

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // lê string com espaços

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2); // espaço antes do %c evita problemas com quebra de linha

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // lê string com espaços

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    
    // --- Exibindo os dados cadastrados ---
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", (populacao1 / area1)); // cálculo do desafio aventureiro
    printf("PIB per Capita: %.2f reais\n", ((pib1 * 1000000000.0) / populacao1)); // cálculo do desafio aventureiro

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", (populacao2 / area2)); // cálculo do desafio aventureiro
    printf("PIB per Capita: %.2f reais\n", ((pib2 * 1000000000.0) / populacao2)); // cálculo do desafio aventureiro

    return 0;
}
