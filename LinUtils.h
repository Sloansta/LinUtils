#ifndef LINUTILS
#define LINUTILS

#include <stdio.h>
//#include "Helpers.h"


/* LINUtils
*
* LINUtils is a set of linux terminal, and general useage functions that make it easier for working with files, and fileio.
* Feel free to modify this source code and contribute  as you wish.
*/



/*****REFERENCES*****/


//Gets the size of the specified file
int get_file_size(char*);



/*****IMPLEMENTATION*****/

int get_file_size(char* filename)
{
	int size = 0;
	FILE *fl = fopen(filename, "rb");
	
	if(fl == NULL)
		printf("The file that you have specified cannot be opened.");
	else {
		fseek(fl, 0, SEEK_END);
		size = ftell(fl);
		fclose(fl);
	}
	return size;
}


#endif
