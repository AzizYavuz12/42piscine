/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:19:03 by azyavuz           #+#    #+#             */
/*   Updated: 2025/03/08 13:21:58 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0')
		return (0);
	if (base_len(base) <= 1)
		return (0);
	while (base[i])
	{
		if (!(base[i] >= 'A' && base[i] <= 'Z')
			&& !(base[i] >= 'a' && base[i] <= 'z')
			&& !(base[i] >= '0' && base[i] <= '9'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr, char *base, int bas)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / bas, base, bas);
		write(1, &(base[(-nbr % bas)]), 1);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr, base, bas);
		return ;
	}
	else if (nbr >= bas)
		ft_putnbr(nbr / bas, base, bas);
	write(1, &(base[nbr % bas]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bas;

	if (!base_check(base))
		return ;
	bas = base_len(base);
	ft_putnbr(nbr, base, bas);
}
