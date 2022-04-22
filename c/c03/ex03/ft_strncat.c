/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:20:51 by dofranci          #+#    #+#             */
/*   Updated: 2022/04/20 21:00:49 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while ((src[count2] != '\0') && (count2 < nb))
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

	printf("s1:%s\ns2: %s\n\n", s1, s2);
	printf("ft_strcat = %s\n", ft_strncat(s1, s2, 3));
	printf("função original= %s\n\n", strncat(s1, s2, 3));
}
*/