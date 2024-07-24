#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task.h"

void write_date(Task *task) {
    printf("Digite o dia: ");
    scanf("%d", &task->date.day);
    printf("Digite o mês: ");
    scanf("%d", &task->date.month);
    printf("Digite o ano: ");
    scanf("%d", &task->date.year);
    getchar(); // Limpar o buffer do newline após scanf
}

Task add_item(void) {
    Task task; // Não precisa de ponteiro, apenas uma variável local
    
    printf("Adicionar tarefa\n\n");
    printf("Digite o nome: ");
    fgets(task.name, sizeof(task.name), stdin);
    // Remover o newline final
    task.name[strcspn(task.name, "\n")] = '\0';
    
    printf("Digite a descricao:\n");
    fgets(task.description, sizeof(task.description), stdin);
    // Remover o newline final
    task.description[strcspn(task.description, "\n")] = '\0';
    
    write_date(&task);
    task.status = 1; // A task está ativa
    
    return task;
}

