#include <stdio.h>

char my_toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

char my_tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    char str[100];

    printf("Enter a string of characters: ");
    scanf("%s", str);

    printf("\nOriginal string: %s\n", str);

    printf("After my_toupper: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", my_toupper(str[i]));
    }
    printf("\n");

    printf("After my_tolower: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", my_tolower(str[i]));
    }
    printf("\n");

    return 0;
}