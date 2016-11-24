/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:45:10 by lchim             #+#    #+#             */
/*   Updated: 2016/11/24 14:08:26 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int ac, char **av)
{
	int		fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (EXIT_FAILURE);
		fill_start(fd);
	}
	else
	{
		ft_putstr_fd("usage: ./fillit fillit_file\n", 2);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
