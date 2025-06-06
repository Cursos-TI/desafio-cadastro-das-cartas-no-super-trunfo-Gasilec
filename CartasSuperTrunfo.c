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
    printf("Popilação: %d\n", população1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    return 0;

}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
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
