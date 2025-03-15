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