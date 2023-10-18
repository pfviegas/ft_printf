/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas <pviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:54:47 by pviegas           #+#    #+#             */
/*   Updated: 2023/05/01 15:14:11 by pviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_ct(char c, size_t *counter);
void	ft_putstr_ct(char *str, size_t *counter);
void	ft_putnbr_ct(int num, size_t *counter);
void	ft_putptr_ct(void *ptr, size_t *counter);
void	ft_putuint_ct(unsigned int num, size_t *counter);
void	ft_puthexl_ct(unsigned int num, size_t *counter);
void	ft_puthexh_ct(unsigned int num, size_t *counter);
char	*ft_base_conv(unsigned long long n, char *base);
size_t	ft_strlen(const char *str);

#endif
