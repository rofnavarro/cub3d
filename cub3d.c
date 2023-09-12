/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:28:52 by rferrero          #+#    #+#             */
/*   Updated: 2023/09/12 17:44:25 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char **argv)
{
	t_game	game;

	ft_preparation(&game, argc, argv);
	mlx_key_hook(game.win, &ft_handle_keypress, &game);
	mlx_hook(game.win, DestroyNotify, NoEventMask, &ft_finish, &game);
	// mlx_loop_hook(game.mlx, &render, &game);
	mlx_loop(game.mlx);
	return (EXIT_SUCCESS);
}
