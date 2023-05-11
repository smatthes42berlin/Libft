/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:52:02 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/11 12:40:43 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
char	*ft_strchr(char *s, int c)
{
	char c_cast;

	c_cast = (unsigned char)c;
	if (*s == c_cast)
		return (s);
	while (*s != c_cast && *s)
		s++;
	if (*s == c_cast)
		return (s);
	return (NULL);
}