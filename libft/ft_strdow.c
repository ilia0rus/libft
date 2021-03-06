/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:36:38 by gusujio           #+#    #+#             */
/*   Updated: 2019/11/26 16:53:17 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdow(const char *s)
{
	char	*s2;
	int		i;

	i = ft_strlen(s);
	s2 = (char*)malloc(i);
	s2[i] = 0;
	while (--i >= 0)
	{
		s2[i] = s[i];
		s2[i] = (char)ft_tolower(s2[i]);
	}
	return (s2);
}
