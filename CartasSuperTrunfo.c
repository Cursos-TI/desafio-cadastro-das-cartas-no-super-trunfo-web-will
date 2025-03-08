#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1[3], estado2[3];
    char cidade1[20], cidade2[20];
    int menu, opcao1, opcao2, pontos_turisticos1, pontos_turisticos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade_populacional1, pib_per_capita1, densidade_populacional2, pib_per_capita2;
    float super_poder1, super_poder2;

    // --- Inserir dados da primeira carta ---
    printf ("--- Insira os Dados da Primeira Carta ---\n");

    printf ("Estado: ");
    scanf("%s", estado1);

    printf ("Cidade: ");
    scanf("%s", cidade1);

    printf ("População: ");
    scanf ("%lu", &populacao1);

    printf ("Área (km²): ");
    scanf ("%f", &area1);

    printf ("PIB: ");    
    scanf ("%f", &pib1);

    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pontos_turisticos1);
    getchar(); // Limpa o buffer novamente

    // --- Inserir dados da segunda carta ---
    printf ("\n--- Insira os Dados da Segunda Carta ---\n");

    printf ("Estado: ");
    scanf("%s", estado2);

    printf ("Cidade: ");
    scanf("%s", cidade2);

    printf ("População: ");
    scanf ("%lu", &populacao2);

    printf ("Área (km²): ");
    scanf ("%f", &area2);

    printf ("PIB: ");    
    scanf ("%f", &pib2);

    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pontos_turisticos2);
    getchar(); // Limpa o buffer novamente

    // --- Cálculos ---
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);


    // --- Exibição dos dados ---
    printf ("\n--- Dados da Primeira Carta ---\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s01\n", estado1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %lu habitantes\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: R$ %.2f Bilhões de Reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf ("Densidade Populacional: %.2f Hab/km²\n", densidade_populacional1);
    printf ("PIB per Capita: %.2f Reais\n", pib_per_capita1);

    printf ("\n--- Dados da Segunda Carta ---\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s02\n", estado2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %lu habitantes\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: R$ %.2f Bilhões de Reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf ("Densidade Populacional: %.2f Hab/km²\n", densidade_populacional2);
    printf ("PIB per Capita: %.2f Reais\n", pib_per_capita2);
    
    //Comparação das Cartas
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: ");
   
    printf("%lu\n", (populacao1 > populacao2) ? 1 : 0);
    printf("Área: ");
    printf("%d\n", (area1 > area2) ? 1 : 0);

    printf("PIB: ");
    printf("%d\n", (pib1 > pib2) ? 1 : 0);

    printf("Número de Pontos Turísticos: ");
    printf("%d\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    printf("Densidade Populacional: ");
    printf("%d\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 0);

    printf("PIB per Capita: ");
    printf("%d\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 0);

    printf("Super Poder: ");
    printf("%d\n", (super_poder1 > super_poder2) ? 1 : 0);

    //menu de comparaçÃo
    printf("\n---- Escolha o atributo de comparação: ----\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao1);

    //Estrutura de Repetição para impedir que o jogador use o mesmo atributo duas vezes
    do {
        printf("\nDigite a segunda opção (deve ser diferente da primeira): ");
        scanf("%d", &opcao2);
    
        if (opcao1 == opcao2) {
                printf("Erro: A segunda opção deve ser diferente da primeira. Tente novamente!\n");
            }
    } while (opcao1 == opcao2);
    
    //comparação dos atributos
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    switch (opcao1) {
    case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
    case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
    case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
    case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
    case 5: valor1_carta1 = densidade_populacional1; valor1_carta2 = densidade_populacional2; break;
    }
   
    switch (opcao2) {
    case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
    case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;     
    case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
    case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
    case 5: valor2_carta1 = densidade_populacional1; valor2_carta2 = densidade_populacional2; break;
    }

    //soma dos atributos
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;

    // --- Exibição do resultado ---
    printf("\n--- Resultado da Comparação ---\n");
    printf("%s vs %s\n", cidade1, cidade2);
    printf("Atributos escolhidos: %d e %d\n", opcao1, opcao2);
    printf("Valores: %0.2f vs %0.2f e %0.2f vs %0.2f\n", valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2);
    printf("Soma total: %0.2f vs %0.2f\n", soma_carta1, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("%s venceu!\n", cidade1);
    } else if (soma_carta1 < soma_carta2) {
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}