/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 09:11:53 by olkovale          #+#    #+#             */
/*   Updated: 2017/07/31 09:15:58 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "macrosft.h"

/*
** NULLCHECK returns NULL if any [a, b, c] are NULL
** CHKALLOC frees [d, e, f] and returns NULL if any [d, e, f] are NULL
** note that freeing NULL is not problematic
*/
void	*usage(void *a, void *b, void *c)
{
	NULLCHECK(a, b, c);
	VAR(void *, d, malloc(sizeof(32)));
	VAR(void *, e, malloc(sizeof(32)));
	VAR(void *, f, malloc(sizeof(32)));
	CHKALLOC(d, e, f);
	return (NULL);
}
