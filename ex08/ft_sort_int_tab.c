/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:58:02 by cristian          #+#    #+#             */
/*   Updated: 2023/02/09 16:57:41 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	n;

	i = 0;
	while (i < size - 1)
	{
		i2 = 0;
		while (i2 < size - i - 1)
		{
			if (tab[i2] > tab[i2 + 1])
			{
				n = tab[i2];
				tab[i2] = tab[i2 + 1];
				tab[i2 + 1] = n;
			}
			i2++;
		}
		i++;
	}
}

int main(void)
{
	int	tab[8] = {3, 1, 32, 5, -5, 9, 0, 7};
	int	size = 8;
	int index = 0;
	ft_sort_int_tab(tab, size);
	while (index < size)
	{
		printf("%d ", tab[index]);
		index++;
	}
	return 0;
}
