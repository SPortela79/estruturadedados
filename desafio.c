
#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
};

int main() {
    struct Territorio territorios[5]; // Vetor para armazenar 5 territórios
    int i; // Variável de controle do laço

    printf("=== Cadastro de Territórios ===\n\n");

    /* Laço para entrada de dados dos 5 territórios */
    for (i = 0; i < 5; i++) {
        printf("Cadastro do território %d:\n", i + 1);

        // Leitura do nome do território
        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome); // Lê até o Enter, incluindo espaços

        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %s", territorios[i].cor); // Lê uma palavra (sem espaços)

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    /* Exibição dos dados cadastrados */
    printf("=== Dados dos Territórios Cadastrados ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor do exército: %s\n", territorios[i].cor);
        printf("  Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    printf("Cadastro concluído com sucesso!\n");
    return 0;
}
