#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *ret;
	int *temp;
	
	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * ((long long)max - min));
	if (!ret)//없어도 될거같은데??
		return (0);
	temp = ret;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}

void main()
{
	int *arr = ft_range(1, 10);
	int i = 0;
	while (arr[i])
		printf("%d ", arr[i++]);
}

