/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telias-p <telias-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:30:07 by telias-p          #+#    #+#             */
/*   Updated: 2021/03/12 17:39:56 by telias-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strdup retorna um ponteiro pra dest(nova string), que é copia de src
*/

char	*ft_strdup(const char *src)
{
	char *dest;

	if (!(dest = (char *)malloc(ft_strlen(src) + 1)))
		return (0);
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}
