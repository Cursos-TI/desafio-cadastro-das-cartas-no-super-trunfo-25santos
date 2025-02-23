#include <stdio.h>

// Definição da estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

// Função para ler os dados de uma carta
void lerCarta(CartaSuperTrunfo *carta) {
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf(" %s", carta->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^"]s", carta->nomeCidade);
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &carta->populacao);
    
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &carta->area);
    
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta->pontosTuristicos);
    
    printf("\n");
}

// Função para exibir os dados de uma carta
void exibirCarta(const CartaSuperTrunfo *carta, int num) {
    printf("Carta %d:\n", num);
    printf("Estado: %c\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("População: %d habitantes\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->pontosTuristicos);
    printf("-----------------------------\n");
}

int main() {
    CartaSuperTrunfo carta1, carta2;
    
    printf("Cadastro da primeira carta:\n");
    lerCarta(&carta1);
    
    printf("Cadastro da segunda carta:\n");
    lerCarta(&carta2);
    
    printf("\nCartas cadastradas:\n");
    printf("-----------------------------\n");
    exibirCarta(&carta1, 1);
    exibirCarta(&carta2, 2);
    
    return 0;
}
