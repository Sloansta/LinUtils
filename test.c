#include <stdio.h>
#include "LinUtils.h"
#include "Helpers.h"

int main(int argv, char* argc[])
{	
	
	int size = get_file_size(argc[1]);

	int formated = convert_to_format(size, "kb");
	
	printf("The files size is: %d kb. But in bytes it's %d\n", formated, size);

	return 0;
}
