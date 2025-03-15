int main() {
    int codigo1, codigo2;
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    printf ("--- Insira os Dados da Primeira Cidade ---\n");

    printf ("Código da Cidade: ");
    scanf ("%d", &codigo1);

    printf ("Nome da Cidade: ");
    scanf (" %s", nome1);

    printf ("População: ");
    scanf ("%d", &populacao1);

    printf ("Área (km2): ");
    scanf ("%f", &area1);

    printf ("PIB (em bilhões)");    
    scanf ("%f", &pib1);
    
    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pontos_turisticos1);

    printf ("--- Insira os Dados da Segunda Cidade ---\n");

    printf ("Código da Cidade: ");
    scanf ("%d", &codigo2);

    printf ("Nome da Cidade: ");
    scanf (" %s", nome2);

    printf ("População: ");
    scanf ("%d", &populacao2);

    printf ("Área (km2): ");
    scanf ("%f", &area2);

    printf ("PIB (em bilhões)");    
    scanf ("%f", &pib2);
    
    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pontos_turisticos2);

    printf ("\n ---Dados da Primeira Cidade--- \n");
    printf ("Código da cidade: %d\n", codigo1);
    printf ("Nome da Cidade: %s\n", nome1);
    printf ("População: %d habitantes\n", populacao1);
    printf ("Área: %f Km2\n", area1);
    printf ("PIB: R$ %f\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf ("");

return 0;
}