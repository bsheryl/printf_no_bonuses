NAME	=	libftprintf.a

SRCS	=	ft_itoa_uns.c		ft_itoa_hex.c		ft_itoa.c\
			ft_strlen.c			ft_putstr_fd.c		ft_putchar_fd.c\
			ft_printf_utils1.c	ft_printf_utils2.c	ft_printf.c

HEADER	=	ft_printf.h
OBJ		=	$(SRCS:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
