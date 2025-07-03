#include <stdio.h>
#include <stdlib.h>

#include "matriz.h"
#include "matriz.c"

int main() {
int opcao;

   do{
        menu();
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        
        switch (opcao) {
            case 1:
                break;

            case 2: {
                break;
            }
            case 3:
                break;

            case 4:

                break;
            case 5:
                break;

            case 6:

                break;
            case 7:

                break;
            
            case 8:

                break;
            case 9:
        
                break;
            case 10:
                printf("Saindo.....\n");
                break;

            default:
                printf("Opcao invalida.\n");
                system("pause");
                system("cls");
                break;
        }
   }while(opcao != 10);
   return 0;
}