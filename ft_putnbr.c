/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:20:11 by aderby            #+#    #+#             */
/*   Updated: 2019/05/01 12:18:08 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //TODO is cool

void	ft_putnbr(int n)
{
	char c;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	//those edge cases tho
	if (n == -2147483648)
	{
		n = 147483648;
		ft_putchar('2');
	}
	if (n / 10 > 0)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	ft_putchar(c);
}



