#include <stdio.h>

int my_isalpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}

int my_isdigit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    int is_alpha = my_isalpha(c);
    int is_digit = my_isdigit(c);

    if (is_alpha == 1) {
        printf("'%c' is a letter.\n", c);
    } else if (is_digit == 1) {
        printf("'%c' is a digit.\n", c);
    } else {
        printf("'%c' is neither a letter nor a digit.\n", c);
    }

    return 0;
}

