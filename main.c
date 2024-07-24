#include <stdio.h>
#include <stdbool.h>
#include "untils.c"

int main(){
    main_menu();
    return 0;
}

void main_menu(){
    bool run = true;
    do{
    int op;
    printf("Menu principal\n");
    printf("1 - Listar tarefas\n");
    printf("2 - Adicionar tarefa\n");
    printf("3 - Editar tarefa\n");
    printf("4 - Excluir tarefa\n");
    scanf("Opcao:", &op);

    switch (op)
    {
    case 1:
        /* code */
        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;
    default:
        run = false;
        break;
    }
    }while (run == true);
}