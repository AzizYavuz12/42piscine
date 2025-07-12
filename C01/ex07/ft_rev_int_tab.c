/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:05:25 by azyavuz           #+#    #+#             */
/*   Updated: 2025/02/27 14:57:23 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ti;
	int	hafiza;

	i = 0;
	ti = size - 1;
	while (i < (size / 2))
	{
		hafiza = tab[i];
		tab[i] = tab[ti];
		tab[ti] = hafiza;
		i++;
		ti--;
	}
}
