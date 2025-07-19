/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-g <rgomes-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:46:07 by rgomes-g          #+#    #+#             */
/*   Updated: 2025/07/19 14:23:32 by rgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;

	size = ft_strlen(src) + 1;
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

// #include <stdio.h> 
// int main(void)
// {
// 	char original[] = "42 São Paulo";
// 	char *copia;

// 	copia = ft_strdup(original);

// 	if (copia == NULL)
// 	{
// 		printf("Erro ao alocar memória.\n");
// 		return 1;
// 	}

// 	printf("Original: %s\n", original);
// 	printf("Cópia   : %s\n", copia);
// 	printf("Endereço original: %p\n", (void *)original);
// 	printf("Endereço da cópia: %p\n", (void *)copia);

// 	free(copia);
// 	return 0;
// }