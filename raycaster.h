#ifndef		RAYCASTER_H
# define	RAYCASTER_H

//	math
# include	<math.h>
//	open()
# include	<fcntl.h>
//	close(), read(), write()
# include	<unistd.h>
//	printf(), perror()
# include	<stdio.h>
//	malloc(), free(), exit()
# include	<stdlib.h>
//	strerror()
# include	<string.h>

//	openGL lib
# include	<GL/gl.h>
# include	<GL/glu.h>
# include	<GL/glut.h>

//	defines
# define	PI	3.1415926535
# define	P2	PI/2

# define	size	64

//	structs
typedef	struct s_player
{
	float	x;
	float	y;
}	t_player;

typedef	struct s_map
{
	int		x;
	int		y;
	char	*map_str;
}	t_map;

//	globals
extern	t_player	player;
extern	t_map		map;

//	ultils/display.c
void	display();
void	init();

//	utils/draw.c
void	drawPlayer(t_player player);
void	drawMap(t_map map);

//	utils/moves.c
void	buttons(unsigned char key, int x, int y);

//	ultils/read_map.c
char	*read_map(char *map);

#endif