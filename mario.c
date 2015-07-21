#include <stdio.h>
#include <cs50.h>

int main (void)
{
	int p_height = 0;
	int hash = 2;//give the value 2 to int hash because the base starts with 2 #
	int space = 0;	
	
	/*Ask the user for the desired pyramid height
	If the users gives an int below 0 or above 23 then repeat*/
	do 
	{	
	printf("Height: ");
	p_height = GetInt();
	}
	while (p_height < 0 || p_height > 23);
	
	space = p_height-1;//per height remove a space
	
	/*Outer loops sets the rows and the inner loops place the spaces and hashes.*/
	for (int i = 0; i < p_height; i++)
	{
		for (int s = 0; s < space; s++)
		{
		printf(" ");
		}
		for (int h = 0; h < hash; h++)
		{
		printf("#");
		}
		  
    space--;  
    hash++;
	printf("\n");
	}

}
