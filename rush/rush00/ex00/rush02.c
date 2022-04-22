/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:49:16 by delais-v          #+#    #+#             */
/*   Updated: 2022/04/11 17:47:48 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	alt;
	int	larg;

	alt = 1;
	while (alt <= y)
	{
		larg = 1;
		while (larg <= x)
		{
			if ((larg == 1 && alt == 1) || (larg == x && alt == 1))
				ft_putchar('A');
			else if ((larg == 1 && alt == y) || (larg == x && alt == y))
				ft_putchar('C');
			else if ((larg == 1) || (larg == x) || (alt == 1) || (alt == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			larg++;
		}
		alt++;
		ft_putchar('\n');
	}
}
