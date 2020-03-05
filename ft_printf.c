#include <unistd.h>
#include <stdarg.h>

typedef struct s_flag
{
	int		min;
	int		prec;
	char	conv;
	int		dot;

}				t_flag;


void	init_strc(t_flag *strc)
{
	strc->min = 0;
	strc->prec = 0;
	strc->conv = '~';
	strc->dot = 0;
}

t_flag	fill_strc(const char *format, int *i, t_flag strc)
{
	int res = 0;
	*i += 1;
	while ((format[(*i)] >= '0' && format[(*i)] <= '9'))
	{
		res = res * 10 + format[(*i)] - '0';
		(*i)++;
	}
	strc.min = res;
	if (format[(*i)] == '.')
	{
		strc.dot = 1;
		(*i)++;
	}
	res = 0;
	while ((format[(*i)] >= '0' && format[(*i)] <= '9'))
	{
		res = res * 10 + format[(*i)] - '0';
		(*i)++;
	}
	strc.prec = res;
	strc.conv = format[(*i)];
	return (strc);
}



int		ft_putchar(char c, int rep)
{
	int i = 0;
	while ( i < rep)
	{
		write(1, &c, 1);
		i++;
	}
	return (rep);
}

int		ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int		ft_putstr(char *str, int len)
{
	write(1, str, len);
	return (len);
}

void	ft_putnbr(unsigned int  number, unsigned int base, int *ret)
{
	if (number >= base)
	{
		ft_putnbr((number / base), base, ret);
		ft_putnbr((number % base), base, ret);
	}
	else
	{
		if (number >= 10)
			*ret += ft_putchar(number + 87, 1);
		else
			*ret += ft_putchar(number + 48, 1);
	}
}

int		nb_digit(long number, int base)
{
	int		count = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		count += 1;
		number *= -1;
	}
	while (number != 0)
	{
		count += 1;
		number /= base;
	}
	return (count);
}

int		string_process(t_flag strc, va_list ap)
{
	int		nb_space;
	char	*chain;
	int		len;
	chain = va_arg(ap, char*);
	if (chain == NULL)
		chain = "(null)";
	len = ft_strlen (chain);
	len = (len > strc.prec && strc.dot == 1) ? strc.prec : len;
	nb_space = strc.min - len;
	nb_space = (nb_space < 0) ? 0 : nb_space;
	ft_putchar(' ', nb_space);
	return (ft_putstr(chain, len) + nb_space);
}

int		int_process(t_flag strc, long number, int base)
{
	int		nb_space;
	int		nb_zero;
	if (strc.dot == 1 && number == 0 && strc.prec == 0)
	{
		ft_putchar(' ', strc.min);
		return (strc.min);
	}
	if (nb_digit(number, base) > strc.prec)
		strc.prec = 0;

	nb_zero = strc.prec - nb_digit(number, base);
	nb_zero += (number < 0) ? 1 : 0;
	nb_zero = (nb_zero < 0) ? 0 : nb_zero;
	nb_space = strc.min - nb_zero - nb_digit(number, base);
	nb_space = (nb_space < 0) ? 0 : nb_space;
	ft_putchar(' ', nb_space);
	int ret = 0;
	if (number < 0)
	{
		ret += ft_putchar('-', 1);
		number *= -1;
	}
	if (strc.dot == 1)
		ft_putchar('0', nb_zero);
	ft_putnbr((unsigned int)number, base, &ret);
	return (ret + nb_space + nb_zero);
}

int		chose_conv(const char *format, int *i, va_list ap)
{
	t_flag	strc;
	init_strc(&strc);
	strc = fill_strc(format, i, strc);
	if (strc.conv == 'd')
		return (int_process(strc, (long)va_arg(ap, int), 10));
	if (strc.conv == 's')
		return (string_process(strc, ap));
	return (int_process(strc, (long)va_arg(ap, unsigned int), 16));
}

int		ft_printf(const char *format, ...)
{
	int		i = 0;
	int		ret;
	va_list	ap;
	va_start(ap, format);
	ret = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
			ret += chose_conv(format, &i, ap);
		else 
		{
			if (format[i] == '%' && format[i + 1] == '%')
			 i++;
			ret += ft_putchar(format[i], 1);
		}
		i += 1;
	}
	va_end(ap);
	return (ret);
}