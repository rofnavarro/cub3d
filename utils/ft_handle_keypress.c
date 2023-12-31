/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_keypress.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:54:23 by rinacio           #+#    #+#             */
/*   Updated: 2023/09/24 18:20:44 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_handle_keypress(int keysym, t_game *game)
{
	if (keysym == XK_A || keysym == XK_a || keysym == XK_W || keysym == XK_w
		|| keysym == XK_D || keysym == XK_d || keysym == XK_S || keysym == XK_s)
		ft_move_player(game, keysym);
	else if (keysym == XK_Left || keysym == XK_Right)
		ft_rotate_player(game, keysym);
	else if (keysym == XK_Tab)
		game->map.toggle = (game->map.toggle + 1) % 2;
	if (keysym == XK_Escape)
		ft_finish(game);
	return (0);
}
