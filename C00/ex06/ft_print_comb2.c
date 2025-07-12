/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:50:50 by azyavuz           #+#    #+#             */
/*   Updated: 2025/02/23 12:41:59 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			write(1, " ", 1);
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			if (! (first == 98))
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
