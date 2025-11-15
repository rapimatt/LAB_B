// TRIVINIO, RALPH MATTHEW L. DIT 1-2
#include <stdio.h>

int main(void) {

    int a = 24, b = 37;

    printf("\n=== Arithmetic Operator ===\n");

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);

    printf("\n=== Logical Operator ===\n");

    printf("&&: %d\n", a > 19 && b > 27);
    printf("||: %d\n", a > 24 || b > 37);
    printf("!:%d\n", !(a < 24 && 37 < b));


    printf("\n=== Assignment Operator ===\n");

    a += 24;
    printf("After addition (a + = 24): %d\n", a);
    a -= 15;
    printf("After substraction (a - = 15): %d\n", a);
    a *= 27;
    printf("After multiplication (a * = 27): %d\n", a);
    a /= 9;
    printf("After division (a / = 9): %d\n", a);
    a %= 8;
    printf("After modulus (a %% = 8): %d\n", a);

    printf("\n");

    b += 65;
    printf("After addition (b + = 65): %d\n", b);
    b -= 25;
    printf("After substraction (b - = 25): %d\n", b);
    b *= 10;
    printf("After multiplication (b * = 10): %d\n", b);
    b /= 39;
    printf("After divisionn (b / = 39): %d\n", b);
    b %= 6;
    printf("After modulus (b %% = 6): %d\n", b);

    return 0;
}