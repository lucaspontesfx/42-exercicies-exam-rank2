#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
/*
int	main(int ac, char **av)
{
	//int	i = 0;
	int	res;

	if (ac == 2)
	{
		res = ft_strlen(av[1]);
		printf("%d\n", res);
	}
	return (0);
}
*/
