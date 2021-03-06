/*
Ty Meutz
Volume_Menu
CIT-145
10/8/2018
Find the volume of any shape in the menu.
*/


#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	// shape varibles
	float length, width, height, radius, base, result;

	// menu choice
	int menu_ch;

	// value of pi
	float pie = 3.14;


	do
	{
		// Menu
		printf("Menu options \n\n");
		printf("Select the shape you want the volume of \n");
		printf("(1) Box \n");
		printf("(2) Cone \n");
		printf("(3) Cyleider \n");
		printf("(4) Sphere \n");
		printf("(5) Pyramids \n");
		printf("(6) Exit \n");
		printf("Enter choice: \n");

		scanf_s("%d", &menu_ch);

		if (menu_ch < 1 || menu_ch > 6)
		{
			printf("Invald choice please choose again. \n");
		}

	} while (menu_ch < 1 || menu_ch > 6);

	switch (menu_ch)
	{
	case 1:
	{
		printf("Enter the length: \n");
		scanf_s("%f", &length);

		printf("Enter the width: \n");
		scanf_s("%f", &width);

		printf("Enter the height: \n");
		scanf_s("%f", &height);

		// Volume of a box formula
		result = length * width * height;

		break;

	}

	case 2:
	{
		printf("Enter the height: \n");
		scanf_s("%f", &height);

		printf("Enter the radius: \n");
		scanf_s("%f", &radius);

		// Volume of a cone formula
		result = 0.3333 * pie * (height) * (radius * radius);

		break;
	}

	case 3:
	{
		printf("Enter the height: \n");
		scanf_s("%f", &height);

		printf("Enter the radius: \n");
		scanf_s("%f", &radius);

		// Volume of a cylinder formula
		result = pie * (radius * radius) * (height);

		break;
	}

	case 4:
	{
		printf("Enter the radius: \n");
		scanf_s("%f", &radius);

		// Volume of a sphere formula
		result = 1.3333 * pie * pow(radius, 3);
	}

	case 5:
	{
		printf("Enter the height: \n");
		scanf_s("%f", &height);

		printf("Enter the base: \n");
		scanf_s("%f", &base);

		// volume of a square pyramid
		result = (base * base) * height / 3;
	}
	case 6:
	{
		exit(0);
	}

	}// end of switch

	printf("Your result is %.6f\n", result);

	return(0);

}// end of main