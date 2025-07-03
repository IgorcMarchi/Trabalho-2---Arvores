#include <stdio.h>
#include <stdlib.h>

#include "matriz.h"

int main() {
int opcao;

     // Cria a raiz da árvore (exemplo: "ROOT")
    Node *raiz = criarNo("ROOT", 0);

    printf("Árvore inicial:\n");

    // Teste: lê o arquivo e monta a árvore
    lerArquivo(raiz, "in.txt");

    printf("\nConteúdo da árvore após lerArquivo:\n");
    listarConteudo(raiz, 0);

    printf("\nInserindo novo caminho: 'Meus Documentos/novapasta/novoarquivo.txt'\n");
    inserirCaminho(raiz, "Meus Documentos/novapasta/novoarquivo.txt");

    listarConteudo(raiz, 0);

    system("pause");
   
   return 0;
}