/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarmet <tcarmet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:10:18 by tcarmet           #+#    #+#             */
/*   Updated: 2014/11/04 18:42:42 by tcarmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*c1;
	char	*c2;

	c1 = s1;
	c2 = (char *)s2;
	while (*c1)
		c1++;
	while (*c2)
	{
		*c1 = *c2;
		c1++;
		c2++;
	}
	*c1 = '\0';
	return (s1);
}