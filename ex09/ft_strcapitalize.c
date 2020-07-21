/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:37:45 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/16 10:51:39 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_check(char *str, int index)
{
	int	i;

	i = index - 1;
	if (index == 0)
		return (1);
	if ('0' <= str[i] && str[i] <= '9')
		return (0);
	if ('A' <= str[i] && str[i] <= 'Z')
		return (0);
	if ('a' <= str[i] && str[i] <= 'z')
		return (0);
	return (1);
}

void	go_uppercase(char *str, int index)
{
	if ('a' <= str[index] && str[index] <= 'z')
		str[index] = str[index] - 32;
}

void	go_lowercase(char *str, int index)
{
	if ('A' <= str[index] && str[index] <= 'Z')
		str[index] = str[index] + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (check_check(str, index))
			go_uppercase(str, index);
		else
			go_lowercase(str, index);
		index++;
	}
	return (str);
}
