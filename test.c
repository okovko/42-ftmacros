/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 19:41:13 by olkovale          #+#    #+#             */
/*   Updated: 2017/07/31 01:48:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "test.h"

int			f(void)
{
	int	a;

	a = 0;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	;
	ASMV("jmp l_f_extra_lines");
	ASMV("l_f_return:");
	return (a);
}

void		f_extra_space(void)
{
	int	a;

	ASMV("l_f_extra_lines:");
	a = 5;
	ASMV("jmp l_f_return");
}

int			main(void)
{
	printf("%d\n", f());
	VAR(int, a, 0);
	SWITCH(a,
		CASE(1,
			printf("case 1\n")),
		DEFAULT(
			printf("case default\n")));
	TERN(a == 0, printf("a is 0\n"), printf("a is not 0\n"));
	DECL(int, c);
	c = 0;
	printf("nested %d\n", TERN(a == 0, TERN(c == 0, a, c), c));
	printf("%d\n", c);
	WHILE(true,
		VAR(int, b, 0),
		printf("%d\n", b),
		BREAK);
	GOTO(test);
	test:
	LOOP(
		printf("outer\n"),
		LOOP(
			printf("inner\n"),
			GOTO(final)));
	final:
	return (0);
}
