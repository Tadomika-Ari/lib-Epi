/*
** EPITECH PROJECT, 2025
** my_isneg
** File description:
** task04
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n < 0){
        my_putchar(78);
    } else {
        my_putchar(80);
    }
    return 0;
}
