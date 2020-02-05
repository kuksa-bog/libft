/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkuksa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:03:59 by bkuksa            #+#    #+#             */
/*   Updated: 2018/11/01 16:44:05 by bkuksa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char*)malloc((++size) * sizeof(*s));
	if (s == NULL)
		return (NULL);
	s[size] = '\0';
	while (size--)
		s[size] = '\0';
	return (s);
}
