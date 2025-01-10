/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 09:41:01 by lucda-si          #+#    #+#             */
/*   Updated: 2025/01/10 09:56:23 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main(int ac, char **av)
{
	char	*res;

	if (ac != 3)
		printf("You must provide exactly 2 arguments, duck!");
	if (ac == 3)
	{
		res = ft_strcpy(av[1], av[2]);
		printf("%s", res);
	}
	return (0);
}
*/
