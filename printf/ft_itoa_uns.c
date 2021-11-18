/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:22:15 by                   #+#    #+#             */
/*   Updated: 2021/10/21 16:49:10 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_sizen_uns(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*ft_nbrtostr_uns(char *res, int i, unsigned int n)
{
	res[i--] = 0;
	if (n == 0)
		res[i] = '0';
	while (n > 0)
	{
		res[i--] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}

char	*ft_itoa_uns(unsigned int n)
{
	int		i;
	char	*res;

	i = ft_sizen_uns(n);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	res = ft_nbrtostr_uns(res, i, n);
	return (res);
}
