/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorsa <victorsa@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:25:24 by victorsa          #+#    #+#             */
/*   Updated: 2025/05/06 12:18:10 by victorsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;
	int	poss;

	poss = 0;
	sign = 1;
	num = 0;
	while (nptr[poss] != '\0' && (nptr[poss] == ' '
			|| (nptr[poss] >= 9 && nptr[poss] <= 13)))
		poss++;
	if (nptr[poss] != '\0' && nptr[poss] == '-')
	{
		sign = sign * -1;
		poss++;
	}
	else if (nptr[poss] == '+')
		poss++;
	while (nptr[poss] != '\0' && (nptr[poss] >= '0' && nptr[poss] <= '9'))
	{
		num = (num * 10) + (nptr[poss] - '0');
		poss++;
	}
	return (num * sign);
}
