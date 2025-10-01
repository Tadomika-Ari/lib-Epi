/*
** EPITECH PROJECT, 2025
** my_revstr
** File description:
** task03
*/

#include <string.h>

int my_strlen(char const *str)
{
    int esp = 0;

    for (int i = 0; str[i] != '\0'; i = i + 1) {
        esp = esp + 1;
    }
    return esp;
}

char *my_revstr(char *str)
{
    int frontIndex = 0;
    int backIndex = my_strlen(str) - 1;
    char temp;

    while (frontIndex < backIndex) {
        temp = str[frontIndex];
        str[frontIndex] = str[backIndex];
        str[backIndex] = temp;
        frontIndex++;
        backIndex--;
    }
    return str;
}
