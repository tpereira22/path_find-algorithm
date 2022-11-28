#ifndef PATH_H
# define PATH_H

#include <stdio.h>
#include <stdlib.h>

# define ESC  65307
# define S      115
# define D      100
# define W      119
# define A      97

typedef struct s_img
{
    void    *back;
    void    *wall;
    void    *player;
    void    *collect;
    void    *exit_c;
    void    *exit_o;

}   t_img;

typedef struct s_map
{
    int height;
    int width;
    int player;
    int collect;
    int exit;
}   t_map;

typedef struct s_win
{
    void    *mlx_ptr;
    void    *win_ptr;
    char    **mapstr;
    t_map   *map;
    t_img   *img;
    int     moves;
}   t_win;

#endif