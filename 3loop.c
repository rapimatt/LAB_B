// TRIVINIO, RALPH MATTHEW L. DIT 1-2
#include <stdio.h>

int main() {

    int i = 1;

    printf("=== while loop ===");

    while(i <= 10) {
        printf("%d\n", i);
        i++;
    }

    printf("=== for loop ===");

    for(i = 2; i <= 20; i = i + 2) {
        printf("%d\n", i);
    }

    printf("=== do-while loop ===");

    i = 1;

    do {
        printf("%d\n", i);
        i++;
    }
    while(i <= 5);

    return 0;
}