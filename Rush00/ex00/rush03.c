/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:43:27 by azyavuz           #+#    #+#             */
/*   Updated: 2025/03/02 10:09:33 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	if (!(x <= 0 || y <= 0))
	{
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				if ((i == 0 && j == 0) || (j == y - 1 && i == 0))
					ft_putchar('A');
				else if (i > 0 && i < x - 1 && j > 0 && j < y - 1)
					ft_putchar(' ');
				else if ((i == x - 1 && j == 0) || (j == y - 1 && i == x - 1))
					ft_putchar('C');
				else
					ft_putchar('B');
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
