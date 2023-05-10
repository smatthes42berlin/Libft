/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:52:02 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/10 19:07:50 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	c_cast;
	size_t	s_len;

	s_len = ft_strlen(s);
	c_cast = (unsigned char)c;
	if (s[s_len] == c_cast)
		return (s);
	while (s[s_len] != c_cast && s_len > 0)
		s_len--;
	if (*s == c_cast)
		return (s);
	return (NULL);
}
