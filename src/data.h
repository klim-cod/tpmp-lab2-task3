#ifndef DATA_H
#define DATA_H

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    char name[50];
    Date dat;
    int ses[3];
} GROUP;

#endif
