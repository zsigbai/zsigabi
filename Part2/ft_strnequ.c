/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:50:04 by zsigabi           #+#    #+#             */
/*   Updated: 2018/05/30 13:36:58 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	if (n != '\0')
		return (1);
	if (s1 && s2 && n)
	{
		while (n > 0)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
			n--;
		}
		return (1);
	}
	return (0);
}
