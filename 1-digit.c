#include "main.h"

/**
<<<<<<< HEAD
 * init_params - clears struct fields and reset buff
=======
 * init_params - clears struct fields and reset buf
>>>>>>> 623431059182253a6f119a936d7080935bd8dc21
 * @params: the parameters struct
 * @ap: the argument pointer
 * Return: void
 */

void init_params(params_t *params, va_list ap)
{
	params->unsign = 0;
<<<<<<< HEAD
=======

>>>>>>> 623431059182253a6f119a936d7080935bd8dc21
	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

	params->width = 0;
	params->precision = UINT_MAX;

	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)ap;
<<<<<<< HEAD
}

=======
}     
>>>>>>> 623431059182253a6f119a936d7080935bd8dc21
