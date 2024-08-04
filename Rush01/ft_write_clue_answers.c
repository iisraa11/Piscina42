/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_clue_answers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:39:28 by sscheini          #+#    #+#             */
/*   Updated: 2024/08/03 21:39:31 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnum(int a, int **grid, int i, int n);
/*
void	ft_case_max(int **grid, int i, int w, int dir, int grid_size)
{
	int	number;

	number = '1';
	while (number < grid_size)
	{
		if (dir == 0)
			i++;
		if (dir == 1)
			i--;
		if (dir == 2)
			w++;
		if (dir == 3)
			w--;
		ft_putnum(number, &grid[0], i, w);
		number++;
	}
}
*/
void	ft_maxmin(int **hint_list, int grid_size)//, int **grid)
{
	int	i;
	int	n;
	
	i = 0;
	while (i < grid_size)
	{
		n = 0;
		while (hint_list[i][n] != 0)
		{
		/*
			if (i == 0 && hint_list[i][n] == '4')
				ft_case_max(&grid[0], 0, n, i, grid_size);
			if (i == 1 && hint_list[i][n] == '4')
				ft_case_max(&grid[0], (grid_size - 1), n, i, grid_size);
			if (i == 2 && hint_list[i][n] == '4')
				ft_case_max(&grid[0], n, 0, i, grid_size);
			if (i == 3 && hint_list[i][n] == '4')
				ft_case_max(&grid[0], n, (grid_size - 1), i, grid_size);
			if (i == 0 && hint_list[i][n] == '1')
				ft_putnum('4', &grid[0], n, i);
			if (i == 1 && hint_list[i][n] == '1')
				ft_putnum('4', &grid[0], (grid_size - 1), n);
			if (i == 2 && hint_list[i][n] == '1')
				ft_putnum('4', &grid[0], n, 0);
			if (i == 3 && hint_list[i][n] == '1')
				ft_putnum('4', &grid[0], n, (grid_size - 1));
		*/
		n++;
		}
	i++;
	}
}

int	ft_write_clue_answers(int **hint_list, int grid_size) //, int **grid, )
{
	ft_maxmin(&hint_list[0], grid_size); //, &grid[0];
	return (0);
}
