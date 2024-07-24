#ifndef TASK_H
#define TASK_H

typedef struct 
{
    int day;
    int month;
    int year;
} Data;

typedef struct 
{
  char name[50];
  char description[150];
  Data date;
  int status;
} Task;



#endif