/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:17:54 by bsheryl           #+#    #+#             */
/*   Updated: 2021/10/21 16:25:30 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_check_spec(const char *str, va_list arg, int *len, int *i);
void	ft_print_char(va_list arg, int *len);
void	ft_print_str(va_list arg, int *len);
void	ft_print_int(va_list arg, int *len);
void	ft_print_unsigned(va_list arg, int *len);
void	ft_print_hex(va_list arg, int *len, char c);
void	ft_print_point(va_list arg, int *len);
void	ft_putnbr_hex(unsigned long long int n, int *len, char c);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa_uns(unsigned int n);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);

#endif