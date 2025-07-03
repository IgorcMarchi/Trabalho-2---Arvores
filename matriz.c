#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>


int verificaArquivo(const char *nome) {
    // Procura o caractere '.' na string
    if (strchr(nome, '.') != NULL) {
        // Se encontrar, supõe que seja arquivo
        return 1;
    }
    // Se não encontrar, é pasta
    return 0;
}
void menu() {
    printf("\n--------------------------------------------------\n");
    printf ("                     MENU: \n");
    printf("--------------------------------------------------\n");
    printf("1- cd <nome>\n");
    printf("2- Pesquisar <nome>\n");
    printf("3- rm <nome>\n");
    printf("4- listar\n");
    printf("5- mkdir <nome>\n");
    printf("6- Limpar\n");
    printf("7- ajuda\n");
    printf("8- sair\n");
    printf("--------------------------------------------------\n");

}
void lerArquivo(Node *raiz, const char *nomeArquivo) {
    FILE *fp = fopen(nomeArquivo, "r");
    if (!fp) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    char linha[256];
    while (fgets(linha, sizeof(linha), fp)) {
        // Remove \n do final, se existir
        linha[strcspn(linha, "\n")] = 0;
        if (strlen(linha) > 0) {
            adicionarCaminho(raiz, linha);
        }
    }

    fclose(fp);
}

int verificaArquivo(const char *nome) {
    // Procura o caractere '.' na string
    if (strchr(nome, '.') != NULL) {
        // Se encontrar, supõe que seja arquivo
        return 1;
    }
    // Se não encontrar, é pasta
    return 0;
}

Node* criarNo(const char *nome, int arquivo) {
    Node *novo = (Node *)malloc(sizeof(Node));
    strcpy(novo->nome, nome);
    novo->arquivo = arquivo;
    novo->pai = NULL;
    novo->filho = NULL;
    novo->irmao = NULL;
    return novo;
}


void inserirCaminho(Node *raiz, const char *caminho) {
    char copia[200];
    strcpy(copia, caminho);
    char *token = strtok(copia, "/");
    Node *atual = raiz;

    while (token != NULL) {
        Node *filho = atual->filho;
        Node *anterior = NULL;
        while (filho && strcmp(filho->nome, token) != 0) {
            anterior = filho;
            filho = filho->irmao;
        }
        if (!filho) {
            filho = criarNo(token, verificaArquivo(token));
            filho->pai = atual;
            if (anterior)
                anterior->irmao = filho;
            else
                atual->filho = filho;
        }
        atual = filho;
        token = strtok(NULL, "/");
    }
}