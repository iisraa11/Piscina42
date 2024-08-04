/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cells.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:57:32 by sscheini          #+#    #+#             */
/*   Updated: 2024/08/03 20:33:42 by isrguerr         ###   ########.fr       */
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

