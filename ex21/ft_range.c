/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:26:18 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/19 15:14:42 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_totalnum(int min, int max)
{
	int	total;

	total = max - min;
	return (total);
}

int	*ft_range(int min, int max)
{
	int	totalspc;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	totalspc = ft_totalnum(min, max);
	array = malloc(totalspc * sizeof(int));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

// #include <stdio.h>    // printf

// int *ft_range(int min, int max);

// int main(void)
// {
// 	int min = 3;
// 	int max = 8;
// 	int *array;
// 	int size = max - min;

// 	array = ft_range(min, max);

// 	if (array == NULL)
// 	{
// 		printf("Retorno nulo: min >= max\n");
// 		return 1;
// 	}

// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("array[%d] = %d\n", i, array[i]);
// 	}

// 	free(array); // não esquecer de liberar
// 	return 0;
// }