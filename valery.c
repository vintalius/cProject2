/*
 * valery.c
 * 
 * Copyright 2019 rtg <rtg@rtg-desktop>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
//#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char **argv)
{
	//printf("hello Valery test 1\n");
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("TEST.txt","a");
   if(fptr == NULL)
   {
      printf("\nError!\n");   
      return 102;             
   }
   fprintf(fptr," LINE v1\n");
   fprintf(fptr," LINE v2\n");
   fprintf(fptr," LINEv 3\n");
   fprintf(fptr," LINE v4\n");
   fclose(fptr);

	
	return 0;
}

