/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:38:03 by amargiac          #+#    #+#             */
/*   Updated: 2023/02/10 15:37:26 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long n)
{
	int	cont;

	cont = 0;
	while (n != 0)
	{
		n = n / 16;
		cont++;
	}
	return (cont);
}

int	ft_ptr_print(unsigned long long num)
{
	int		len;

	len = 0;
	write(1, "0x", 2);
	if (num == 0)
		return (write(1, "0", 1) + 2);
	else
		ft_ptr_conv(num);
	return (ft_ptr_len(num) + 2);
}

void	ft_ptr_conv(unsigned long long num)
{
	if (num >= 16)
	{
		ft_ptr_conv(num / 16);
		ft_ptr_conv(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}
