# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victorsa <victorsa@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 12:45:13 by victorsa          #+#    #+#              #
#    Updated: 2025/04/25 14:55:59 by victorsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h

SRCS = ft_isalpha.c \
	ft_isdigit.c \
       	ft_isalnum.c \
       	ft_isascii.c \
       	ft_isprint.c \
       	ft_strlen.c \
       	ft_memset.c \
       	ft_bzero.c \
       	ft_memcpy.c \
       	ft_strlcpy.c \
       	ft_strlcat.c \
       	ft_memmove.c \
       	ft_toupper.c \
       	ft_tolower.c \
       	ft_strchr.c \
       	ft_strrchr.c \
       	ft_strncmp.c \
       	ft_memchr.c \
       	ft_memcmp.c \
       	ft_strnstr.c \
       	ft_atoi.c \
       	ft_calloc.c \
       	ft_strdup.c \
       	ft_substr.c \
       	ft_strjoin.c \
       	ft_strtrim.c \
       	ft_split.c \
       	ft_itoa.c \
       	ft_strmapi.c \
       	ft_striteri.c \
       	ft_putchar_fd.c \
       	ft_putstr_fd.c \
       	ft_putendl_fd.c \
       	ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

all: $(NAME)
$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
