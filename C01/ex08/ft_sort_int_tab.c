/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:10:41 by azyavuz           #+#    #+#             */
/*   Updated: 2025/02/27 16:32:31 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	sayac;

	i = 0;
	while (i <= (size - 1))
	{
		sayac = i + 1;
		while (sayac <= (size - 1))
		{
			if (tab[i] > tab[sayac])
			{
				swap = tab[i];
				tab[i] = tab[sayac];
				tab[sayac] = swap;
			}
			sayac++;
		}
		i++;
	}
}
