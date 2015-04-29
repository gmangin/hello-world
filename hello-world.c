/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   hello-world.c                                                            */
/*                                                                            */
/*   By: gmangin <gaelle.mangin@hotmail.fr>                                   */
/*                                                                            */
/*   Created: 2015/04/29 10:13:07 by gmangin                                  */
/*   Updated: 2015/04/29 10:14:57 by gmangin                                  */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int		main(void)
{
	write(1, "hello world\n", 12);
	return (0);
}
