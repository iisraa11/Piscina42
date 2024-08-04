/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:54:24 by sscheini          #+#    #+#             */
/*   Updated: 2024/08/03 13:54:26 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_write_clue_answers(int **hint_list, int **grid, int grid_size);

void	ft_set_grid(int	*grid, int size)
{
	int i;
	
	i = 0;
	while (i < size)
	{
		*grid = '0';
		write(1, grid, 1);
		write(1, " ", 1);
		grid++;
		i++;
	}
	write(1, "\n", 1);
}

int	ft_solve_grid(int **hint_list, int grid_size)
{
	int	**grid;
	int	i;
	
	grid = (int**) malloc(grid_size * 4);
	if (grid == NULL)
		return -1;
	i = 0;
	while(i < 4)
	{
		grid[i] = (int*) malloc(grid_size * 4);
		ft_set_grid(&grid[i][0], 4);
		if (grid[i] == NULL)
			return -1;
		i++;
	}
		int	n;
	i = 0;
	while(i < 4)
	{
		n = 0;
		while(n < 4)
		{
			write(1, &hint_list[i][n], 1);
			n++;
		}
		write(1, "\n", 1);
		i++;
	}
	//i = ft_write_clue_answers(&hint_list[0], &grid[0], 4);
	return (0);
}
