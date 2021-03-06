/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:01:07 by aderby            #+#    #+#             */
/*   Updated: 2019/05/03 23:50:12 by aderby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 0)
		return (0);
	if (c >> 6 > 0)
		return (0);
	if ((c & 0b00110000) == 48)
	{
		if ((c & 0b00001000) == 8)
		{
			if ((c & 0b00000100) == 4)
				return (0);
			if ((c & 0b00000010) == 2)
				return (0);
		}
		return (1);
	}
	return (0);
}
