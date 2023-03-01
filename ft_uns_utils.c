/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:57:03 by amargiac          #+#    #+#             */
/*   Updated: 2023/02/10 15:37:27 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr(unsigned int nb)
{
	if (nb == 4294967295)
	{
		ft_putnbr(nb / 10);
		ft_putchar('5');
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
	if (nb < 0)
		return (ll_lenght(4294967295 - nb + 1, 10));
	return (ll_lenght(nb, 10));
}
