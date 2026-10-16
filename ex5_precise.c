
#include <stdio.h>
#include <stdbool.h>

bool my_strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return false;
        }
        s1++;
        s2++;
    }
    return (*s1 == '\0' && *s2 == '\0');
}

char * my_strcat(char *dest, const char *src) {
    char *ptr = dest;

    while (*ptr != '\0') {
        ptr++;
    }

    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}

char * my_strcpy(char *dest, const char *src) {
    char *ptr = dest;

    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';

    return dest;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    printf("--- Testing my_strcmp ---\n");
    if (my_strcmp(str1, str2)) {
        printf("\"%s\" and \"%s\" are equal.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not equal.\n", str1, str2);
    }

    if (my_strcmp(str1, str3)) {
        printf("\"%s\" and \"%s\" are equal.\n", str1, str3);
    } else {
        printf("\"%s\" and \"%s\" are not equal.\n", str1, str3);
    }

    char dest_copy[50];
    my_strcpy(dest_copy, str1);
    printf("\n--- Testing my_strcpy ---\n");
    printf("Copied string: \"%s\"\n", dest_copy);

    char dest_cat[50] = "Hello, ";
    my_strcat(dest_cat, str3);
    printf("\n--- Testing my_strcat ---\n");
    printf("Concatenated string: \"%s\"\n", dest_cat);

    return 0;
}