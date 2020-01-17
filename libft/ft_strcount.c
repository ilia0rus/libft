/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:28:19 by gusujio           #+#    #+#             */
/*   Updated: 2019/12/01 17:28:22 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcount(char *s1, char *s2) // колическтво s2 в s1
{
	int         i;
	long int    j;
	char        *s3;

	i = 0;
	j = 0;
	while (s1[j])
	{
		if ((s3 = ft_strstr(&s1[j], s2)))
		{
			j = s3 - (s1 + j);
			s1 = s3;
			i++;
		}
		j++;
	}
	return (i);
}