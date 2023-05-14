/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:52:02 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 16:54:29 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	s_i;
	size_t	d_i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	d_i = dest_len;
	s_i = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (d_i < (size - 1) && src[s_i])
	{
		dst[d_i] = src[s_i];
		d_i++;
		s_i++;
	}
	dst[d_i] = '\0';
	return (src_len + dest_len);
}
