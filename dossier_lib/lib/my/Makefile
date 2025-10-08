##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## task01 day10
##

SRC	=	my_compute_power_rec.c \
		my_compute_square_root.c \
		my_find_prime_sup.c \
		my_get_nbr.c \
		my_isneg.c \
          my_is_prime.c \
          my_putchar.c \
          my_put_nbr.c \
          my_putstr.c \
          my_revstr.c \
          my_showmem.c \
          my_showstr.c \
          my_sort_int_array.c \
          my_strcapitalize.c \
          my_strcat.c \
          my_strcmp.c \
          my_strcpy.c \
          my_str_islower.c \
          my_str_isprintable.c \
          my_str_isupper.c \
          my_strlen.c \
          my_strlowcase.c \
          my_strncat.c \
          my_strncmp.c \
          my_strncpy.c \
          my_strstr.c \
          my_strupcase.c \
	  my_str_isnum.c \
          my_str_isalpha.c \
          my_swap.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all:  $(NAME)

INCLUDE_PATH: '../../include'

LIB_PATH: '../'

H_PATH: my.h

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
