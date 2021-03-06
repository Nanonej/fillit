/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:45:59 by lchim             #+#    #+#             */
/*   Updated: 2016/11/25 12:07:48 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE	545
# define I (i_grid + i_piece - i_pos)
# define J (j_grid + j_piece - j_pos)

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	int		**grid;
	int		size_grid;
}				t_list;

int				count_tetriminos(char *buff);
void			malloc_tetris(int ***tetris, int nb_tetris);
void			fill_tetris(int ***tetris, int nb_tetris, char *buff);
void			free_tetris(int ***tetris, int nb_tetris);
void			fill_start(int fd);

int				ft_strlen(char *str);
void			ft_putstr_fd(char *str, int fd);
char			*ft_strnew(size_t size);
int				ascii_of_tetriminos(int **piece);

void			check_char(char *buff);
void			fill_error(int index);
int				fill_is_tetrimino(int count);
void			fill_test_trimino(int *tmp, int char_part);
void			fill_true_tetris(int **tetrimino, int char_part);

int				place_tetriminos(int **piece, t_list *s_grid, int i_grid, \
							int j_grid);
void			delete_tetriminos(int ascii_of_tetri, t_list *s_grid);

int				print_grid(t_list *s_grid, int *trigger);

void			free_grid(t_list *grid);
void			set_grid(t_list *s_grid);

void			fill_grid(int ***pieces, int npieces);

#endif
