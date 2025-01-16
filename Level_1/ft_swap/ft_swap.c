#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	a = 200;
	int	b = 500;

	printf("Value of a before swap: %d\n", a);
	printf("Value of b before swap: %d\n", b);

	ft_swap(&a, &b);


	printf("Value of a after the swap: %d\n", a);
	printf("Value of a after the swap: %d\n", b);
	return (0);
}
*/
