/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:47:07 by dofranci          #+#    #+#             */
/*   Updated: 2022/04/17 17:59:43 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	sizestart;
	int	sizefinish;
	int	temp;

	sizefinish = size - 1;
	sizestart = 0;
	while (sizefinish >= sizestart)
	{
		temp = tab[sizefinish];
		tab[sizefinish] = tab[sizestart];
		tab[sizestart] = temp;
		sizefinish--;
		sizestart++;
	}
}
