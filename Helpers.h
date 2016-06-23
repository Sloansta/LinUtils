#ifndef HELPERS
#define HELPERS

#include <stdio.h>

/*

Helpers.h is a set of helper functions for linUtils.h just to make my life a bit easier when writing stuff.

Feel free to use Helpers.h in your own project if you see something that might be of use

*/



//Covnerts the integer from bytes into the proper format of what it's remander is
int convert_to_format(int, char*);

int convert_to_format(int size, char* format)
{
	int kb_rem = 1000;
	int mb_rem = 1000000;
	int gb_rem = 1000000000;

	int mod_size = 0;

	if(format == "kb")
		mod_size = size / kb_rem;
	else if(format == "mb")
		mod_size = size / mb_rem;
	else if(format == "gb")
		mod_size = size / gb_rem;
	else
		mod_size = size;

	return mod_size;
}


#endif
