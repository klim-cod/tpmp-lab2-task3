#include <stdio.h>
#include "client.h"
#include "server.h"

#define N 10

int main() {
    GROUP gr[N];

    input_groups(gr, N);

    sort_by_ses(gr, N);
    print_groups(gr, N);

    printf("\nStudents age <= 20 (01.12.2010):\n");
    print_young(gr, N);

    return 0;
}
