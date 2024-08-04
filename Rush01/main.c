/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscheini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:04:46 by sscheini          #+#    #+#             */
/*   Updated: 2024/08/03 12:04:49 by sscheini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

/*
**For greater grid size, add an argument such as int dimensions.
**The oposite value on the grid would be in dimensions x 2.
*/

int	ft_check_values(char *str);
int	ft_solve_grid(int **hint_list, int grid_size);

void	ft_error_msg(int ans)
{ 
	if (ans == 1)
	{
		write(1, "Error! The inputed arguments aren't valid.\n", 44);
		write(1, "Make sure the values were writed inside \" \".\n", 45);
		write(1, "Terminating program.\n", 21);
	}
	if (ans == 2)
	{
		write(1, "Error! The inputed arguments don't have a solution.\n", 53);
		write(1, "Terminating program.\n", 21);
	}
}

int	ft_run_error_check(int argc, char *argv)
{
	int	ans;
	
	if (argc != 2)
	{
		ft_error_msg(1);
		return (1);
	}
	ans = ft_check_values(&argv[0]);
	if (ans == 1 || ans == 2)
	{
		ft_error_msg(ans);
		return (ans);
	}
	return(ans);
}

char	*ft_save_hints(char *argv, int *hint_list, int size)
{
	int i;
	
	i = 0;
	while (i < size)
	{
		if (*argv != ' ')
		{
			hint_list[i] = *argv;
			argv++;
			i++;
		}
		else
			argv++;
	}
	argv++;
	return	(argv);
}

int	main(int argc, char **argv)
{
	int	**hint_list;
	int ans;
	int	i;
	char *ptr_argv;

	if (ft_run_error_check(argc, &argv[1][0]) == 1)
		return (1);
	hint_list = (int**) malloc(4 * 4);
	ptr_argv = &argv[1][0];
	i = 0;
	while(i < 4)
	{
		hint_list[i] = (int*) malloc(4 * 4);
		ptr_argv = ft_save_hints(ptr_argv, &hint_list[i][0], 4);
		i++;
	}
	ans = ft_solve_grid(&hint_list[0], 4);
	if (ans == 2)
	{
		ft_error_msg(ans);
		return (ans);
	}
	return (ans);
}

