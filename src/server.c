#include <stdio.h>
#include "server.h"

// средний балл
float avg(GROUP g) {
    return (g.ses[0] + g.ses[1] + g.ses[2]) / 3.0;
}

// сортировка
void sort_by_ses(GROUP gr[], int n) {
    GROUP temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (avg(gr[j]) > avg(gr[j + 1])) {
                temp = gr[j];
                gr[j] = gr[j + 1];
                gr[j + 1] = temp;
            }
        }
    }
}

// вывод
void print_groups(GROUP gr[], int n) {
    printf("\nSorted students:\n");
    for (int i = 0; i < n; i++) {
        printf("%s | Avg: %.2f\n", gr[i].name, avg(gr[i]));
    }
}

// возраст ≤ 20 на 01.12.2010
void print_young(GROUP gr[], int n) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        int age = 2010 - gr[i].dat.year;

        if (age <= 20) {
            printf("%s\n", gr[i].name);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found\n");
    }
}
