/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:41:34 by isrguerr          #+#    #+#             */
/*   Updated: 2024/08/03 22:33:32 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_readlist(int *list, int n)
{
    int i;

    i = 0;
    while (list[i])
        {
            if (list[i] == n)
                return (1);
            i++;
        }
    return (0);
}

int	ft_check_cells(int *col, int *row, int n)
{
    int ans;

    ans = ft_readlist(col, n);
    if (ans == 1)
        return (ans);
    ans = ft_readlist(row, n);
    return (ans);
}

void	ft_putnum(int a, int **grid, int i, int n)
{
    if (ft_check_cells(&grid[0][n], &grid[i][0], a))
        **grid = a;
}
