#include <stdio.h>

int my_strlen(const char *str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = my_strlen(str);
    printf("The length of the string is: %d\n", len);

    return 0;
}