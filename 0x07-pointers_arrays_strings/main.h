#ifndef	MAIN_H
#define	MAIN_H

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
int	_putchar(char	c);
char	*_memset(char	*s,	char	b,	unsigned	int	n);
char	*_memcpy(char	 *dest,	char	*src,	unsigned	int	n);
char	*_strchr(char	*s,	char	c);
extern size_t strspn(const char	*_s,	const	char	*_accept);
char	*_strpbrk(char	*s,	char	*accept);
char	const(haystack);
void	print_chessboard(char	(*a)[8]);
void	print_diagsums(int	*a,	int	size);
void	set_string(char	**s,	char	*to);
#endif/*MAIN_H*/
