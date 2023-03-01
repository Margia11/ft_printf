/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:33:53 by amargiac          #+#    #+#             */
/*   Updated: 2023/02/11 10:44:23 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(va_list vl, const char format)
{
	if (format == 'c')
		return (print_char(vl));
	else if (format == 's')
		return (ft_putstr(va_arg(vl, char *)));
	else if (format == 'p')
		return (ft_ptr_print(va_arg(vl, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(vl, int)));
	else if (format == 'u')
		return (ft_put_unsigned_nbr(va_arg(vl, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(vl, unsigned int), format));
	else if (format == '%')
		ft_putchar('%');
	return (1);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	vl;
	int		char_printed;

	i = 0;
	char_printed = 0;
	va_start(vl, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			char_printed += ft_conversion(vl, s[i]);
			i++;
		}
		if (!s[i])
			return (char_printed);
		if (s[i] != '%')
		{
			char_printed++;
			ft_putchar(s[i]);
			i++;
		}
	}
	return (char_printed);
}
