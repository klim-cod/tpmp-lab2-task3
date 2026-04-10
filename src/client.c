#include <stdio.h>
#include "client.h"

void input_groups(GROUP gr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", gr[i].name);

        printf("Birth year month day: ");
        scanf("%d %d %d", &gr[i].dat.year, &gr[i].dat.month, &gr[i].dat.day);

        printf("Enter 3 grades: ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &gr[i].ses[j]);
        }
    }
}
