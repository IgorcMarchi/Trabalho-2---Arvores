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
