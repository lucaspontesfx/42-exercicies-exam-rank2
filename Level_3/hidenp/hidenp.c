/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaspontes <lucaspontes@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:15:04 by lucda-si          #+#    #+#             */
/*   Updated: 2025/03/25 08:53:03 by lucaspontes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;
	len = 0;
	while (str[len])
		len++;
	return (len);
}
int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	count;
	int	len;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		count = 0;
		len = ft_strlen(av[1]);
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[2][j] == av[1][i])
				{
					count++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (count == len)
			return (write(1, "1\n", 2));
		return (write(1, "0\n", 2));
	}
	write (1, "\n", 1);
	return (0);
}
