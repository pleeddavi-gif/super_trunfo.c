    #include <stdio.h>

    int main() {

        // Cada carta precisa de variáveis próprias, por isso foi duplicado para não sobrescrever os dados

        char estado[2];
        char codigo1[4], codigo2[4];
        char nomeCidade1[25], nomeCidade2[25];
        unsigned int populacao1, populacao2;
        float area1, area2, pib1, pib2;
        int pontosTuristicos1, pontosTuristicos2;
        float densidade1, densidade2;
        float pibpercapita1, pibpercapita2;
        float superPoder1, superPoder2;

        // Vetor para armazenar o estado de cada carta (Carta 1 = estado[0], Carta 2 = estado[1])

        printf ("Bem vindo ao jogo Super Trunfo - Países \nA seguir, insira as informações das cartas:\n\n");

        // ---------------- CARTA 1 ----------------
        printf("Carta 1:\n\n");

        printf("Digite Uma letra de 'A' a 'H':\n ");
        scanf(" %c", &estado[0]);

        printf("Digite o código (ex: A01, B02):\n ");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade:\n ");
        scanf(" %[^\n]", nomeCidade1);

        printf("Digite o número de habitantes:\n ");
        scanf("%u", &populacao1);

        printf("Digite a área (em km²):\n ");
        scanf(" %f", &area1);

        printf("Digite o PIB (em bilhões de reais):\n ");
        scanf(" %f", &pib1);

        printf("Digite o número de pontos turísticos:\n ");
        scanf("%d", &pontosTuristicos1);


        // ---------------- CARTA 2 ----------------
        printf("\n\nCarta 2:\n\n");

        printf("Digite Uma letra de 'A' a 'H':\n ");
        scanf(" %c", &estado[1]);

        printf("Digite o código (ex: A01, B02):\n ");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade:\n ");
        scanf(" %[^\n]", nomeCidade2);

        printf("Digite o número de habitantes:\n ");
        scanf("%u", &populacao2);

        printf("Digite a área (em km²):\n ");
        scanf(" %f", &area2);

        printf("Digite o PIB (em bilhões de reais):\n ");
        scanf(" %f", &pib2);

        printf("Digite o número de pontos turísticos:\n ");
        scanf("%d", &pontosTuristicos2);

        //definindo valor da densidade e do PIB per capita

        densidade1 = (populacao1 / area1);
        densidade2 = (populacao2 / area2);
        pibpercapita1 = (pib1 * 1000000000 / populacao1);
        pibpercapita2 = (pib2 * 1000000000 / populacao2);

        //calculando Super Poder

        superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (populacao1 * area1);
        superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (populacao2 * area2);

        // ---------------- RESULTADO ----------------
        printf("\n\n=== Resultado Final ===\n");

        // Exibe os dados da Carta 1
        printf("\nCarta 1:\n");
        printf("Estado: %c\n", estado[0]);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %u\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", pibpercapita1);
        printf("Super Poder: %.0f\n", superPoder1);

        // Exibe os dados da Carta 2
        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estado[1]);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("População: %u\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", pibpercapita2);
        printf("Super Poder: %.0f\n", superPoder2);

        //mostrando comparação entre as cartas

        printf("\n\nComparação de cartas:\n\n");
        printf ("População: %s (%d)\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu", populacao1 > populacao2 ? 1:0);
        printf ("Area: %s (%d)\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu", area1 > area2 ? 1:0);
        printf ("PIB: %s (%d)\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu", pib1 > pib2 ? 1:0);
        printf ("Pontos Turisticos: %s (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? "Carta 1 venceu" : "Carta 2 venceu", pontosTuristicos1 > pontosTuristicos2 ? 1:0);
        printf ("Densidade: %s (%d)\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu", densidade1 < densidade2 ? 1:0);
        printf ("PIB Per Capita: %s (%d)\n", pibpercapita1 > pibpercapita2 ? "Carta 1 venceu" : "Carta 2 venceu", pibpercapita1 > pibpercapita2 ? 1:0);
        printf ("Super Poder: %s (%d)\n", superPoder1 > superPoder2 ? "Carta 1 venceu" : "Carta 2 venceu", superPoder1 > superPoder2 ? 1:0);


        return 0;
    }   