/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:34:47 by amargiac          #+#    #+#             */
/*   Updated: 2023/02/10 15:43:43 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

# define TYPES "cspdiuxX"

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(const char *str);
int		lenght(int nb, int base);
int		ll_lenght(long long nb, int base);
int		ft_putnbr(int nb);
int		print_char(va_list param);
int		ft_hex_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_hex(unsigned int num, const char format);
int		ft_ptr_len(unsigned long long n);
int		ft_ptr_print(unsigned long long num);
void	ft_ptr_conv(unsigned long long num);
int		ft_put_unsigned_nbr(unsigned int nb);
int		ft_conversion(va_list vl, const char format);
#endif
