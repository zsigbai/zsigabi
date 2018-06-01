/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:27:45 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/28 08:31:59 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(char *str, size_t n)
{
	unsigned char	z;
	size_t			i;

	i = 0;
	z = str;
	while (i < n)
	{
		z = 0;
	}
}