/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:36:24 by gusujio           #+#    #+#             */
/*   Updated: 2019/11/26 16:49:04 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strup(const char *s)
{
	char	*s2;
	int		i;

	i = ft_strlen(s);
	s2 = (char*)malloc(i);
	s2[i] = 0;
	while (--i >= 0)
	{
		s2[i] = s[i];
		s2[i] = (char)ft_toupper(s2[i]);
	}
	return (s2);
}
