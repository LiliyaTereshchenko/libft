/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:08:09 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/20 15:20:44 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = dest;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}
