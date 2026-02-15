#include <stdio.h>

int main() {

    // Cada carta precisa de variáveis próprias, por isso foi duplicado para não sobrescrever os dados

    char estado[2];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int numPontosTuristicos1, numPontosTuristicos2;

    // Vetor para armazenar o estado de cada carta (Carta 1 = estado[0], Carta 2 = estado[1])
    // ---------------- CARTA 1 ----------------
    printf("Carta 1:\n");

    printf("Digite Uma letra de 'A' a 'H':\n ");
    scanf(" %c", &estado[0]);

    printf("Digite o código (ex: A01, B02):\n ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite o número de habitantes:\n ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²):\n ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais):\n ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &numPontosTuristicos1);



    // ---------------- CARTA 2 ----------------
    printf("\n\nCarta 2:\n");

    printf("Digite Uma letra de 'A' a 'H':\n ");
    scanf(" %c", &estado[1]);

    printf("Digite o código (ex: A01, B02):\n ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite o número de habitantes:\n ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):\n ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais):\n ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &numPontosTuristicos2);



    // ---------------- RESULTADO ----------------
    printf("\n\n=== Resultado Final ===\n");

    // Exibe os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);

    // Exibe os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);

    return 0;
}
