#include "main.h"

/**
 * print_from_to - prints a range of char addresses
 * @start: starting address
<<<<<<< HEAD
 * @stop: used to stop the address
=======
 * @stop: stopping address
>>>>>>> 623431059182253a6f119a936d7080935bd8dc21
 * @except: except address
 *
 * Return: number bytes printed
 */
<<<<<<< HEAD

=======
>>>>>>> 623431059182253a6f119a936d7080935bd8dc21
int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}

/**
 * print_rev - prints string in reverse
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printed
 */
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - prints string in rot13
 * @ap: string
 * @params: the parameters struct
 *
 * Return: number bytes printed
 */
<<<<<<< HEAD

=======
>>>>>>> 623431059182253a6f119a936d7080935bd8dc21
int print_rot13(va_list ap, params_t *params)
{
	int i, index;
	int count = 0;
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	index = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z')
<<<<<<< HEAD
				|| (a[i] >= 'a' && a[i] <= 'z'))
=======
		    || (a[i] >= 'a' && a[i] <= 'z'))
>>>>>>> 623431059182253a6f119a936d7080935bd8dc21
		{
			index = a[i] - 65;
			count += _putchar(arr[index]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}
