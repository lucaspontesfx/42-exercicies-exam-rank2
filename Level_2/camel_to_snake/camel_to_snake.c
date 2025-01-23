#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (i > 0)
					ft_putchar('_');
				ft_putchar(av[1][i] + 32);
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
