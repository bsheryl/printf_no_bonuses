/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:12:38 by bsheryl           #+#    #+#             */
/*   Updated: 2021/10/21 18:50:28 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(va_list arg, int *len)
{
	char	c;

	c = va_arg(arg, int);
	ft_putchar_fd(c, 1);
	(*len)++;
}

void	ft_print_str(va_list arg, int *len)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
		s = "(null)\0";
	ft_putstr_fd(s, 1);
	(*len) += ft_strlen(s);
}

void	ft_print_int(va_list arg, int *len)
{
	int		num;
	char	*str;

	num = va_arg(arg, int);
	str = ft_itoa(num);
	ft_putstr_fd(str, 1);
	(*len) += ft_strlen(str);
	free(str);
}

void	ft_print_unsigned(va_list arg, int *len)
{
	unsigned int	num;
	char			*str;

	num = va_arg(arg, unsigned int);
	str = ft_itoa_uns(num);
	ft_putstr_fd(str, 1);
	(*len) += ft_strlen(str);
	free(str);
}

void	ft_print_hex(va_list arg, int *len, char c)
{
	unsigned int	hex;

	hex = va_arg(arg, unsigned int);
	ft_putnbr_hex(hex, len, c);
}
