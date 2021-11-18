/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:24:36 by bsheryl           #+#    #+#             */
/*   Updated: 2021/10/21 16:25:30 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_point(va_list arg, int *len)
{
	unsigned long long int	point;

	point = va_arg(arg, unsigned long long int);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	(*len) += 2;
	ft_putnbr_hex(point, len, 'x');
}

void	ft_check_spec(const char *str, va_list arg, int *len, int *i)
{
	if (str[*i] == 'c')
		ft_print_char(arg, len);
	else if (str[*i] == 's')
		ft_print_str(arg, len);
	else if (str[*i] == 'p')
		ft_print_point(arg, len);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_print_int(arg, len);
	else if (str[*i] == 'u')
		ft_print_unsigned(arg, len);
	else if (str[*i] == 'x' || str[*i] == 'X')
		ft_print_hex(arg, len, str[*i]);
	else if (str[*i] == '%')
	{
		ft_putchar_fd('%', 1);
		(*len)++;
	}
}

void	ft_putnbr_hex(unsigned long long int n, int *len, char c)
{
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16, len, c);
		n %= 16;
	}
	if (n >= 10 && n <= 15)
	{
		if (c == 'x')
			ft_putchar_fd((n - 10 + 'a'), 1);
		if (c == 'X')
			ft_putchar_fd((n - 10 + 'A'), 1);
	}
	else
		ft_putchar_fd((n + '0'), 1);
	(*len)++;
}
