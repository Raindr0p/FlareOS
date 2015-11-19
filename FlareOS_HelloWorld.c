// Flare OS HelloWorld Version
#include "flprint.h"
#include "stdio.h" 

int main() 
{
	char* text="Hello, World! Hello, Flare!";
	init_display();
	print(text);
}
