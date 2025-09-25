#include <stdio.h>

int main() {
    // ===============================
    // Declaração das variáveis - Carta 1
    // ===============================
    char estado1[20];           // Nome do estado da cidade 1
    char codigo1[6];            // Código da carta 1 (ex: A01)
    char nomeCidade1[30];       // Nome da cidade 1
    int populacao1;             // População da cidade 1
    float area1;                // Área em km² da cidade 1
    float pib1;                 // PIB em bilhões da cidade 1
    int pontosTuristicos1;      // Número de pontos turísticos da cidade 1
    float densidade1;           // Densidade populacional da cidade 1
    float pibPerCapita1;        // PIB per capita da cidade 1

    // ===============================
    // Declaração das variáveis - Carta 2
    // ===============================
    char estado2[20];           
    char codigo2[6];            
    char nomeCidade2[30];       
    int populacao2;             
    float area2;                
    float pib2;                 
    int pontosTuristicos2;      
    float densidade2;           
    float pibPerCapita2;

    // ===============================
    // Cadastro da Carta 1
    // ===============================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado da cidade (ex: Alagoas): "); 
    scanf("%19s", estado1);

    printf("Digite o código da carta (ex: A01): "); 
    scanf("%5s", codigo1);

    printf("Digite o nome da cidade (ex: Pilar): "); 
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população (ex: 224000): "); 
    scanf("%d", &populacao1);

    printf("Digite a área em km² (ex: 12.5): "); 
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais (ex: 12.34): "); 
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos (ex: 3): "); 
    scanf("%d", &pontosTuristicos1);

    // Cálculo de densidade populacional e PIB per capita para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    // ===============================
    // Cadastro da Carta 2
    // ===============================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado da cidade (ex: Pernambuco): "); 
    scanf("%19s", estado2);

    printf("Digite o código da carta (ex: B02): "); 
    scanf("%5s", codigo2);

    printf("Digite o nome da cidade (ex: Recife): "); 
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população (ex: 1650000): "); 
    scanf("%d", &populacao2);

    printf("Digite a área em km² (ex: 218.8): "); 
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais (ex: 45.6): "); 
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos (ex: 10): "); 
    scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // ===============================
    // Exibição das cartas
    // ===============================
    printf("\n=== Carta 1 ===\n");
    printf("%s - %s\n", nomeCidade1, estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("%s - %s\n", nomeCidade2, estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // ===============================
    // Comparação de um atributo específico
    // ===============================
    // Escolha do atributo: População
    printf("\n=== Comparação de cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}