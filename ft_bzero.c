/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:13:34 by mflury            #+#    #+#             */
/*   Updated: 2022/11/11 15:58:05 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//pas tester, pas encore fait la libft pour l instant

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n * sizeof(char));
}
