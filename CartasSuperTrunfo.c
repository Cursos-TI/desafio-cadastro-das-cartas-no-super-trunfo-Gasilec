#include <stdio.h>

int main(){
    // Variáveis para a carta 1
    char codigo1[4];
    int população1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a carta 2
     char codigo2[4];
    int população2;
    float area2;
    float pib2;
    int pontos_turisticos2;   

    // Cadastro da primeira carta
    printf("Cadastro da carta 1:\n");
    
    printf("Código da cidade (ex:A01): ");
    scanf("%s", codigo1);
    
    printf("População: ");
    scanf("%d", &população1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    
    // Cadastro da primeira carta
    printf("Cadastro da carta 2:\n");
    
    printf("Código da cidade (ex:B01): ");
    scanf("%s", codigo2);
    
    printf("População: ");
    scanf("%d", &população2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Mostrar os dados das cartas
    printf("\nCartas do SUPER TRUNFO\n");

    printf("\nCarta 1:\n");
    printf("código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    return 0;

}