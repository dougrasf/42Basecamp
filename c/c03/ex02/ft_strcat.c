/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:15:08 by dofranci          #+#    #+#             */
/*   Updated: 2022/04/20 20:23:30 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[17]="teste de ";
	char s2[7]="string";

	printf("s1: %s, s2: %s\n", s1, s2);
	printf("ft_strcat = %s\n", ft_strcat(s1, s2));
	printf("função original= %s\n\n", strcat(s1, s2));
}
*/