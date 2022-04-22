/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:13:06 by dofranci          #+#    #+#             */
/*   Updated: 2022/04/14 19:31:21 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	limiting(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unity;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten<= '8')
		{
			unity = ten+ 1;
			while (unity <= '9')
			{
				limiting(hundred, ten, unity);
				unity++;
			}	
			ten++;
		}
		hundred++;
	}
}
