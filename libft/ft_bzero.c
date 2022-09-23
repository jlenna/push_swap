/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlenna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:30:11 by jlenna            #+#    #+#             */
/*   Updated: 2021/10/20 13:34:59 by jlenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *dest, size_t n)
{
	unsigned char	*dest1;

	dest1 = (unsigned char *)dest;
	while (n != 0)
	{
		*dest1++ = '\0';
		n--;
	}
	return (dest);
}
