/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:55:51 by pviegas           #+#    #+#             */
/*   Updated: 2023/05/01 15:24:09 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "ft_printf.h"

void	ft_check_format(va_list args, char spec, size_t *counter)
{
	if (spec == 'd' || spec == 'i')
		ft_putnbr_ct(va_arg(args, int), counter);
	else if (spec == 'c')
		ft_putchar_ct(va_arg(args, int), counter);
	else if (spec == 's')
		ft_putstr_ct(va_arg(args, char *), counter);
	else if (spec == 'p')
		ft_putptr_ct(va_arg(args, void *), counter);
	else if (spec == 'u')
		ft_putuint_ct(va_arg(args, unsigned int), counter);
	else if (spec == 'x')
		ft_puthexl_ct(va_arg(args, unsigned int), counter);
	else if (spec == 'X')
		ft_puthexh_ct(va_arg(args, unsigned int), counter);
	else if (spec == '%')
		ft_putchar_ct(spec, counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	size_t	counter;

	if (!format)
		return (0);
	va_start(args, format);
	i = -1;
	counter = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			ft_check_format(args, format[i + 1], &counter);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			counter++;
		}
	}
	va_end(args);
	return (counter);
}
/*
int	main(void)
{
	int		x, X, y, z;
	char	c;
	char	str[] = "Paulo";
	size_t	counter;
	size_t	counter_aux;
	int		*p ;
	unsigned int u = 42;


	z = -1000;
	c = 'P';
	y = 42;
	p = &y;
	x = 15;
	X = 255;
	counter = 0;
	printf("\n=========== ft_printf ===========\n");
	counter = ft_printf("Teste!!!\nx: %d \nc: %c\nstr:"
			" %s\nu: %u\np: %p\nx: %x\nX: %X\n %%\n",
			z, c, str, u, (void *)&p, x, X);
	printf("============= printf =============\n");
	counter_aux = printf("Teste!!!\nx: %d \nc: %c\nstr:"
			" %s\nu: %u\np: %p\nx: %x\nX: %X\n %%\n",
			z, c, str, u, (void *)&p, x, X);
	printf("==================================\n");
	printf("Valor de counter: %zu \nValor de counter_aux: %zu\n", counter,
			counter_aux);
	printf("==================================\n");
	ft_printf("%5%");
	ft_printf("\n");
	printf("%5%");
	printf("\n");
	
	ft_printf("%-5%");
	ft_printf("\n");
	printf("%-5%");
	printf("\n");
	return (0);
}
*/
