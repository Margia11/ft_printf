/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:39:27 by andreamargi       #+#    #+#             */
/*   Updated: 2023/02/10 15:37:50 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list param)
{
	char	buffer;

	buffer = va_arg(param, int);
	ft_putchar(buffer);
	return (1);
}
