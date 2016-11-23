/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:45:59 by lchim             #+#    #+#             */
/*   Updated: 2016/11/23 15:28:55 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE	545

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h> // A SUPP

typedef struct	s_list
{
	int		**grid;
	int		size_grid;
}				t_list;

int			count_tetriminos(char *buff);
void		malloc_tetris(int ***tetris, int nb_tetris);
void		fill_tetris(int ***tetris, int nb_tetris, char *buff);
void		free_tetris(int ***tetris, int nb_tetris);
void		fill_start(int fd);

int			ft_strlen(char *str);
void		ft_putstr_fd(char *str, int fd);
char		*ft_strnew(size_t size);

void		fill_error(int index);
int			fill_is_tetrimino(int count);
void		fill_test_trimino(int *tmp, int char_part);
void		fill_true_tetris(int **tetrimino, int char_part);

int			place_tetriminos(int **piece, int **grid, int i_grid, int j_grid);

void		print_grid(int **grid, int size);

int			**set_grid(int size);

void		fill_grid(int ***pieces, int npieces);

#endif
