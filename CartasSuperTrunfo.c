#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int codigo;
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional, pib_per_capita;


    printf ("--- Insira os Dados da Cidade ---\n");

    printf ("Código da Cidade: ");
    scanf ("%d", &codigo);

    printf ("Nome da Cidade: ");
    scanf (" %s", nome);

    printf ("População: ");
    scanf ("%d", &populacao);

    printf ("Área (km2): ");
    scanf ("%f", &area);

    printf ("PIB (em bilhões)");    
    scanf ("%f", &pib);
    
    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pontos_turisticos);


    if (area > 0) { densidade_populacional = 0;
    }
    else { densidade_populacional = 0;
    }

    if (populacao > 0) {
        pib_per_capita = pib / populacao;
    }

    else {
        pib_per_capita = 0;
    }


    // Exibição dos dados
    printf ("\n ---Dados da Cidade--- \n");
    printf ("Código da cidade: %d\n", codigo);
    printf ("Nome da Cidade: %s\n", nome);
    printf ("População: %d habitantes\n", populacao);
    printf ("Área: %f Km2\n", area);
    printf ("PIB: R$ %f\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %2.f Hab/km2\n", densidade_populacional);
    printf("Pib per Capita: R$ %2.f Bilhões/Hab \n", pib_per_capita);


    return 0;
}
