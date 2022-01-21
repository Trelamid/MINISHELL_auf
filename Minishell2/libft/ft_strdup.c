/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminna <sminna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:55:28 by sminna            #+#    #+#             */
/*   Updated: 2021/12/26 14:26:11 by sminna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		l;
	char	*x;

	i = 0;
	l = 0;
	while (s1[i])
		i++;
	x = malloc(i + 1);
	x[i] = 0;
	if (x != 0)
	{
		while (l < i)
		{
			x[l] = s1[l];
			l++;
		}
	}
	return (x);
}