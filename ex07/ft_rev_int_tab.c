/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:31:39 by cristian          #+#    #+#             */
/*   Updated: 2023/02/09 12:34:33 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	index2;
	int	n;

	index = 0;
	index2 = size - 1;
	while (index <= index2)
	{
		n = tab[index];
		tab[index] = tab[index2];
		tab[index2] = n;
		index++;
		index2--;
	}
}

/*int	main(void)
{
	int	tab[5] = {9, 7, 5, 3, 1};
	int	size = 5;
	int index = 0;

	ft_rev_int_tab(tab, size);
	while(index < size)
	{
		printf("%d", tab[index]);
		index++;
	}
	return 0;
}*/
