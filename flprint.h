// Display function for Flare OS  
// Version 1.1
// Author: Alex Yang
#define _VIDMEM 0xb8000

    char *vidptr = (char*)_VIDMEM;
    
    int init_display() 
   { 
	unsigned int j = 0;
	while(j < 80 * 25 * 2)
	 {
		vidptr[j] = ' ';	
		vidptr[j+1] = 0x07; 		
		j = j + 2;
	 }
	 return 0;
   }
   
     int print(char* text) 
   {
     	unsigned int i = 0;
     	unsigned int j = 0;
     	while(text[j] != '\0') 
	 {
		vidptr[i] = text[j];
		vidptr[i+1] = 0x07;
		++j;
		i = i + 2;
	 }
     return 0;
   }
