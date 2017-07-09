/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macrosft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 04:43:07 by olkovale          #+#    #+#             */
/*   Updated: 2017/07/09 04:43:07 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROSFT
# define MACROSFT

# define NULLCHECK(...) N(__VA_ARGS__,N8,N7,N6,N5,N4,N3,N2,N1)(__VA_ARGS__)
# define N(_1, _2, _3, _4, _5, _6, _7, _8, F, ...) F
# define N1(a) if(!a)return(NULL);
# define N2(a,b) if(!a||!b)return(NULL);
# define N3(a,b,c) if(!a||!b||!c)return(NULL);
# define N4(a,b,c,d) if(!a||!b||!c||!d)return(NULL);
# define N5(a,b,c,d,e) if(!a||!b||!c||!d||!e)return(NULL);
# define N6(a,b,c,d,e,f) if(!a||!b||!c||!d||!e||!f)return(NULL);
# define N7(a,b,c,d,e,f,g) if(!a||!b||!c||!d||!e||!f||!g)return(NULL);
# define N8(a,b,c,d,e,f,g,h) if(!a||!b||!c||!d||!e||!f||!g||!h)return(NULL);

# define MIN(...) N(__VA_ARGS__,MN8,MN7,MN6,MN5,MN4,MN3,MN2,MN1)(__VA_ARGS__)
# define MN1(a) (a)
# define MN2(a,b) (a<b?a:b)
# define MN3(a,b,c) (MN2(a,b)<c?MN2(a,b):c)
# define MN4(a,b,c,d) (MN3(a,b,c)<d?MN3(a,b,c):d)
# define MN5(a,b,c,d,e) (MN4(a,b,c,d)<e?MN4(a,b,c,d):e)
# define MN6(a,b,c,d,e,f) (MN5(a,b,c,d,e)<f?MN5(a,b,c,d,e):f)
# define MN7(a,b,c,d,e,f,g) (MN6(a,b,c,d,e,f)<g?MN6(a,b,c,d,e,f):g)
# define MN8(a,b,c,d,e,f,g,h) (MN7(a,b,c,d,e,f,g)<h?MN7(a,b,c,d,e,f,g):h)

# define MAX(...) N(__VA_ARGS__,MX8,MX7,MX6,MX5,MX4,MX3,MX2,MX1)(__VA_ARGS__)
# define MX1(a) (a)
# define MX2(a,b) (a>b?a:b)
# define MX3(a,b,c) (MX2(a,b)>c?MX2(a,b):c)
# define MX4(a,b,c,d) (MX3(a,b,c)>d?MX3(a,b,c):d)
# define MX5(a,b,c,d,e) (MX4(a,b,c,d)>e?MX4(a,b,c,d):e)
# define MX6(a,b,c,d,e,f) (MX5(a,b,c,d,e)>f?MX5(a,b,c,d,e):f)
# define MX7(a,b,c,d,e,f,g) (MX6(a,b,c,d,e,f)>g?MX6(a,b,c,d,e,f):g)
# define MX8(a,b,c,d,e,f,g,h) (MX7(a,b,c,d,e,f,g)>h?MX7(a,b,c,d,e,f,g):h)

# define IF(cond, body) if(cond){body;}
# define FOR(init, cond, counter, body) for(init; cond; counter){body;}
# define NULLIF(cond) if (cond) return (NULL);

# define ISSPACE(c) (c == ' ' || c == '\t' || c == '\n' || ISSPACE2(c))
# define ISSPACE2(c) (c == '\r' || c == '\v' || c == '\f')
# define ISDIGIT(c) (c >= '0' && c <= '9')
# define ABS(x) ((x) < 0 ? -(x) : (x))

#endif
