#include <stdio.h>
#include "task.h"
#include "untils.c"

void add_item(Task *task){
    char name[50];
    char description[150];
    int status;

    printf("Adicionar tarefa\n\n");
    printf("Digite o nome: ");
    scanf("%s\n", &task->name);
    printf("Digite a descricao:\n");
    scanf("%s", &task->description);
    write_date(&task->date);
    task->status = 1; //significa que a task está ativa
}

void save_task(const char *tasks, const Task *task){
    FILE *arquivo = fopen(tasks, "w");
        if (arquivo == NULL) {
        perror("Não foi possível abrir o arquivo");
        return;
    }
    fprintf(arquivo, "Nome: %s\n", task->name);
    fprintf(arquivo, "Descrição: %s\n", task->description);
    fprintf(arquivo, "Status: %d\n", task->status);

    fclose(arquivo);
}

void write_date(Data *date){
    printf("Digite o dia: ");
    scanf("%d", &date->day);
    printf("Digite o mês: ");
    scanf("%d", &date->month);
    printf("Digite o ano: ");
    scanf("%d", &date->year);
}