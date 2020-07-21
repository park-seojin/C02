/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:09:29 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/16 15:30:17 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char n)
{
	char *hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_hex(n / 16);
		ft_print_hex(n % 16);
	}
	else
		ft_putchar(hex[n]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((0 <= str[i] && str[i] <= 31) || ((unsigned char)str[i] >= 127))
		{
			ft_putchar('\\');
			if ((unsigned char)str[i] < 16)
			{
				ft_putchar('0');
			}
			ft_print_hex((unsigned char)str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
