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