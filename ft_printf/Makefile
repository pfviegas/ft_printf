# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 15:45:35 by pviegas           #+#    #+#              #
#    Updated: 2023/05/01 15:46:52 by pviegas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_putchar_ct.c ft_putstr_ct.c ft_putnbr_ct.c \
					ft_putptr_ct.c ft_putuint_ct.c ft_puthexl_ct.c ft_puthexh_ct.c \
					ft_strlen.c ft_base_conv.c

OBJS			=	$(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)/%.o:
				$(CC) $(CFLAGS) -c $< -o $@

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:                             fclean all

.PHONY:			all clean fclean re bonus