#include <stdio.h>
#include <string.h>
#include "untils.h"

int is_null(char *info){
    if(strlen(info) <= 0){
        return 1; //se estiver vazio
    }
    return 0; //se NAO estiver vazio
}