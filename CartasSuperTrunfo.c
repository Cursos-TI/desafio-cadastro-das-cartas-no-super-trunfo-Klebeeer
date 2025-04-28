#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
#define TOTAL_CARTAS 2

// Criei uma estrutura para armazenar as informações de cada carta

typedef struct {
    char codigo[4];           // Ex: "A01"
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;


int main() {

    Carta cartas[TOTAL_CARTAS];

    printf("Cadastro de Cartas Super Trunfo - Países\n");

    for (int i = 0; i < TOTAL_CARTAS; i++) {
        printf("\nCadastro da carta %d:\n", i + 1);

        printf("Digite o código da carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Digite a população: ");
        scanf("%d", &cartas[i].populacao);

        printf("Digite a área (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    printf("\n--- Dados das Cartas Cadastradas ---\n");

    for (int i = 0; i < TOTAL_CARTAS; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Código: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
    }

   

    return 0;
}
