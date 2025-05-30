#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Permite exibir acentos corretamente

    // Declaração de variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, PIB1;
    float densidadePopulacional1, PIBperCapita1; // Variáveis para cálculos

    // Entrada de dados para a primeira carta
    printf("\nRegistro da primeira carta do Super Trunfo\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo das propriedades
    densidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = PIB1 * 1000000000 / populacao1; // Convertendo PIB para reais

    // Exibição da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    // Declaração de variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, PIB2;
    float densidadePopulacional2, PIBperCapita2; // Variáveis para cálculos

    // Entrada de dados para a segunda carta
    printf("\nRegistro da segunda carta do Super Trunfo\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo das propriedades
    densidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = PIB2 * 1000000000 / populacao2; // Convertendo PIB para reais

    // Exibição da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    printf("\nRegistro concluído. Obrigado por utilizar o sistema! 🚀\n");

    return 0;
}