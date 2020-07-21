/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:59:03 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/15 21:56:15 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
		{
			if (!('a' <= str[i] && str[i] <= 'z'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
