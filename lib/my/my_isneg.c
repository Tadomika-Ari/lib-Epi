/*
** EPITECH PROJECT, 2025
** my_isneg
** File description:
** task04
*/

int putchar(char c);

int my_isneg(int n)
{
    if (n < 0){
        putchar(78);
    } else {
        putchar(80);
    }
    return 0;
}
