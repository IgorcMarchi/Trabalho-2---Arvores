#ifndef MATRIZ_H
#define MATRIZ_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura da árvore genérica
typedef struct Node {
    char nome[100];
    int arquivo; // 0 = pasta, 1 = arquivo
    struct Node *pai;
    struct Node *filho;   // Primeiro filho
    struct Node *irmao;   // Próximo irmão
} Node;

int verificaArquivo(const char *nome);
void lerArquivo(Node *raiz, const char *nomeArquivo);
Node* criarNo(const char *nome, int arquivo);
void inserirCaminho(Node *raiz, const char *caminho);
void listarConteudo(Node *no, int nivel);

void menu();

#endif