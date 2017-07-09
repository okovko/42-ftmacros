/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darksideft.h                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 04:43:07 by olkovale          #+#    #+#             */
/*   Updated: 2017/07/09 04:43:07 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARKSIDEFT
# define DARKSIDEFT

# define IF(cond, body) if(cond){body;}
# define FOR(init, cond, counter, body) for(init; cond; counter){body;}
# define NULLIF(cond) if (cond) return (NULL);

#endif
