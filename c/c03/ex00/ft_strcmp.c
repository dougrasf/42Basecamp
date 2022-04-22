/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:06:46 by dofranci          #+#    #+#             */
/*   Updated: 2022/04/20 20:27:29 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
		{
			return ((unsigned char) s1[count] - (unsigned char)s2[count]);
		}
		count++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1="teste";
	char *s2="teste"; // igual s1
	char *s3="tEste";
	char *s4="t3ste";
	char *s5="te$te";
	char s6[]={-10, 'e', 's', 't', 'e'};
	char *s7="testee";
	char *s8="test";

	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s
	, s6: %s, s7: %s, s8: %s\n\n", s1, s2, s3, s4, s5, s6, s7, s8);

	printf("comparando s1 com s2\n");
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("função original= %d\n\n", strcmp(s1, s2));

	printf("comparando s1 com s3\n");
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s3));
	printf("função original= %d\n\n", strcmp(s1, s3));

	printf("comparando s1 com s4\n");
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s4));
	printf("função original= %d\n\n", strcmp(s1, s4));

	printf("comparando s1 com s5\n");
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s5));
	printf("função original= %d\n\n", strcmp(s1, s5));

	printf("comparando s1 com s6\n");
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s6));
	printf("função original= %d\n\n", strcmp(s1, s6));

	printf("comparando s1 com s7\n");
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s7));
	printf("função original= %d\n\n", strcmp(s1, s7));

	printf("comparando s1 com s8\n");
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s8));
	printf("função original= %d\n\n", strcmp(s1, s8));
}
*/