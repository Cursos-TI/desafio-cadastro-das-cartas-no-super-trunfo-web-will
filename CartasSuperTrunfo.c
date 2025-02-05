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

    printf ("\n ---Dados da Cidade--- \n");
    printf ("Código da cidade: %d\n", codigo);
    printf ("Nome da Cidade: %s\n", nome);
    printf ("População: %d habitantes\n", populacao);
    printf ("Área: %f Km2\n", area);
    printf ("PIB: R$ %f\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
