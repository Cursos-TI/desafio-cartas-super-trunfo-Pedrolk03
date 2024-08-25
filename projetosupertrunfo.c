#include <stdio.h>

#define MAX_CIDADES 32  // Definindo um número máximo de cidades

// Definindo a estrutura Cidade
typedef struct {
    char codigo[4];
    int populacao;         // em habitantes
    float area;            // em km²
    float pib;             // em bilhões de dólares
    int pontos_turisticos; // número de pontos turísticos
} Cidade;

int main() {
    Cidade cidades[MAX_CIDADES];
    int num_cidades = 0;
    int opcao;

    while (1) {
        // Menu de opções
        printf("Menu:\n");
        printf("1. Adicionar nova cidade\n");
        printf("2. Exibir todas as cidades\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Adicionar nova cidade
            if (num_cidades >= MAX_CIDADES) {
                printf("Número máximo de cidades atingido.\n");
            } else {
                printf("Digite o código da carta (ex: A01): \n");
                scanf(" %3s", cidades[num_cidades].codigo);
                printf("Digite a população: \n");
                scanf("%d", &cidades[num_cidades].populacao);
                printf("Digite a área em km²: \n");
                scanf("%f", &cidades[num_cidades].area);
                printf("Digite o PIB em bilhões de dólares: \n");
                scanf("%f", &cidades[num_cidades].pib);
                printf("Digite o número de pontos turísticos: \n");
                scanf("%d", &cidades[num_cidades].pontos_turisticos);
                num_cidades++;
            }
        } else if (opcao == 2) {
            // Exibir todas as cidades
            if (num_cidades == 0) {
                printf("Nenhuma cidade cadastrada.\n");
            } else {
                for (int i = 0; i < num_cidades; i++) {
                    printf("Código da carta: %s\n", cidades[i].codigo);
                    printf("População: %d habitantes\n", cidades[i].populacao);
                    printf("Área: %.2f km²\n", cidades[i].area);
                    printf("PIB: %.2f bilhões de dólares\n", cidades[i].pib);
                    printf("Número de pontos turísticos: %d\n", cidades[i].pontos_turisticos);
                    printf("----------------------------\n");
                }
            }
        } else if (opcao == 3) {
            // Sair do programa
            printf("Saindo...\n");
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
