# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 13:15:28 by rferrero          #+#    #+#              #
#    Updated: 2023/09/07 15:22:30 by rferrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=				cub3D

CC						=				cc
CCFLAGS					=				-Wall -Werror -Wextra

LIBFT_PATH				=				./libft
LIBFT					=				$(LIBFT_PATH)/libft.a

LIBX					=				-lmlx -lX11 -lXext

RM						=				rm -rf

SRC						=				cub3d.c \
										$(addprefix utils/, ft_finish.c \
															ft_matrix.c \
															ft_preparation.c \
															ft_read_map.c \
															)

OBJ						=				$(SRC:%.c=%.o)

all:					$(NAME)

$(NAME):				$(OBJ)
						$(MAKE) -C $(LIBFT_PATH)
						$(CC) $(CCFLAGS) $(OBJ) $(LIBFT) $(LIBX) -o $(NAME)

clean:
						$(MAKE) -C $(LIBFT_PATH) clean
						$(RM) $(OBJ)

fclean:					clean
						$(MAKE) -C $(LIBFT_PATH) fclean
						$(RM) $(NAME)

re:						fclean all

.PHONY:					all clean fclean re