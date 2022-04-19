    /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:29:45 by maltunda          #+#    #+#             */
/*   Updated: 2021/12/02 14:54:12 by kcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	sut;
	int	sat;

	sat = 1;
	while (sat <= y && x > 0)
	{
	sut = 1;
		while (sut <= x)
		{
			if ((sut == 1 && sat == 1) || (sut == 1 && sat == y))
				ft_putchar('A');
			else if ((sut == x && sat == 1) || (sut == x && sat == y))
				ft_putchar('C');
			else if ((sut == 1) || (sut == x) || (sat == 1) || (sat == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			sat++;
		}
		ft_putchar('\n'); 
	sut++;
	}
}
