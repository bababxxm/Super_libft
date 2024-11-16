# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sklaokli <sklaokli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 22:00:56 by sklaokli          #+#    #+#              #
#    Updated: 2024/11/17 04:03:07 by sklaokli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SLFT	=	../super_libft.a

LIBFT	=	../libft.a

PRINTF	=	../printf.a

GNL		=	../gnl.a

LIBS	=	$(SLFT) $(LIBFT) $(GNL) $(PRINTF)

SRCS	=	$(SRCS_LIBFT) $(SRCS_PRINTF) $(SRCS_GNL) 

OBJS	=	$(OBJS_LIBFT) $(OBJS_PRINTF) $(OBJS_GNL)

SRCS_LIBFT	=	src/libft/standard/ft_isalpha.c src/libft/standard/ft_isdigit.c \
				src/libft/standard/ft_isalnum.c src/libft/standard/ft_isascii.c \
				src/libft/standard/ft_isprint.c src/libft/standard/ft_strlen.c \
				src/libft/standard/ft_memset.c src/libft/standard/ft_bzero.c \
				src/libft/standard/ft_memcpy.c  src/libft/standard/ft_memmove.c \
				src/libft/standard/ft_strlcpy.c src/libft/standard/ft_strlcat.c \
				src/libft/standard/ft_calloc.c src/libft/standard/ft_strdup.c \
				src/libft/standard/ft_toupper.c src/libft/standard/ft_tolower.c \
				src/libft/standard/ft_strchr.c src/libft/standard/ft_strncmp.c \
				src/libft/standard/ft_memchr.c src/libft/standard/ft_memcmp.c \
				src/libft/standard/ft_strnstr.c src/libft/standard/ft_atoi.c \
				src/libft/standard/ft_strrchr.c src/libft/standard/ft_strjoin.c \
				src/libft/standard/ft_strtrim.c src/libft/standard/ft_substr.c \
				src/libft/standard/ft_split.c src/libft/standard/ft_itoa.c \
				src/libft/standard/ft_strmapi.c src/libft/standard/ft_striteri.c \
				src/libft/fd/ft_putchar_fd.c src/libft/fd/ft_putstr_fd.c \
				src/libft/fd/ft_putendl_fd.c src/libft/fd/ft_putnbr_fd.c \
				src/libft/list/ft_lstnew.c src/libft/list/ft_lstlast.c \
				src/libft/list/ft_lstadd_front.c src/libft/list/ft_lstadd_back.c \
				src/libft/list/ft_lstsize.c src/libft/list/ft_lstdelone.c \
				src/libft/list/ft_lstclear.c src/libft/list/ft_lstiter.c \
				src/libft/list/ft_lstmap.c \
				src/libft/extended/ft_print_n_char.c

SRCS_PRINTF	=	src/ft_printf/ft_printf.c src/ft_printf/utils/additonal.c \
				src/ft_printf/utils/format_c_pcnt.c src/ft_printf/utils/format_d_i.c \
				src/ft_printf/utils/format_p.c src/ft_printf/utils/format_s.c \
				src/ft_printf/utils/format_u.c src/ft_printf/utils/format_x_X.c

SRCS_GNL	=	src/get_next_line/get_next_line.c src/get_next_line/get_next_line_utils.c

OBJS_LIBFT	=	$(SRCS_LIBFT:%.c=%.o)

OBJS_PRINTF	=	$(SRCS_PRINTF:%.c=%.o)

OBJS_GNL	=	$(SRCS_GNL:%.c=%.o)

LIBC	=	ar rcs

RM		=	rm -f

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

all:		$(SLFT)

libft:		$(LIBFT)

printf:		$(PRINTF)

gnl:		$(GNL)

%.o:		%.c
			@ $(CC) $(CFLAGS) -c $< -o $@

$(SLFT):	$(OBJS)
			@ $(LIBC) $(SLFT) $(OBJS)
			@ echo "Done! Super_libft is Ready!"

$(LIBFT):	$(OBJS_LIBFT)
			@ $(LIBC) $(LIBFT) $(OBJS_LIBFT)
			@ echo "Done! Libft is Ready!"

$(PRINTF):	$(OBJS_PRINTF)
			@ $(LIBC) $(PRINTF) $(OBJS_PRINTF)
			@ echo "Done! ft_printf is Ready!"

$(GNL):		$(OBJS_GNL)
			@ $(LIBC) $(GNL) $(OBJS_GNL)
			@ echo "Done! get_next_line is Ready!"

clean:
			@ $(RM) $(OBJS)
			@ echo "All object files has been cleaned."

fclean:		clean
			@ $(RM) $(LIBS)
			@ echo "All archive files has been cleaned."

re:			fclean all

.PHONY:		all libft printf gnl clean fclean re