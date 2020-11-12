//Hamza Safdar Regd. 2018-ag-8204

#include <stdio.h>
#include <math.h>

int main ()
{
	int x, y, z;
	char selection;
		
	while (selection != 'x')
	{
		printf("Press 'n' for Normal and 's' for Scientific Calculator\n");
		printf("\nEnter 'x' to exit\n");
		scanf(" %c", &selection);
		if (selection == 'N' || selection == 'n')
		{
			printf("\n[The operations supported: +, -, *, / and %%.]\n");
			printf("\n===================================================================\n");
			printf("Enter first value: ");
			scanf("%d", &x);
			printf("Enter operation: ");
			scanf(" %c", &selection);			
			printf("Enter second value: ");
			scanf("%d", &y);
			printf("\n===================================================================\n");
	
			switch (selection)
			{
				case '+':
					z = x + y;
					printf("\nThe sum of %d and %d is %d\n\n", x, y, z);
					break;
				case '-':
					z = x - y;
					printf("\nThe subtraction of %d and %d is %d\n\n", x, y, z);
					break;
				case '*':
					z = x * y;
					printf("\nThe multiplication of %d and %d is %d\n\n", x, y, z);
					break;
				case '/':
					z = x / y;
					printf("\nThe division of %d and %d is %d\n\n", x, y, z);
					break;
				case '%':
					z = x % y;
					printf("\nThe modulus of %d and %d is %d\n\n", x, y, z);
					break;
				default:
					printf("Invalid input");
					break;
			}
		}
		else if (selection == 'S' || selection == 's')
		{
			float res;
			printf("\n===================================================================\n");
			printf("\nEnter '1' for sin()\n");
			printf("\nEnter '2' for cos()\n");
			printf("\nEnter '3' for tan()\n");
			printf("\nEnter '4' for log()\n");
			printf("\nEnter '5' for sinh()\n");
			printf("\n===================================================================\n");
			printf("\nEnter operation: ");
			scanf(" %c", &selection);
			printf("Enter the value: ");			
			scanf("%d", &x);
			printf("\n===================================================================\n");

			switch (selection)
			{
				case '1':
					res = sin(x);
					printf("\nThe sin() of %d is %f\n\n", x, res);
					break;
				case '2':
					res = cos(x);
					printf("\nThe cos() of %d is %f\n\n", x, res);
					break;
				case '3':
				 	res = tan(x);
					printf("\nThe tan() of %d is %f\n\n", x, res);
					break;
				case '4':
					res = log(x);
					printf("\nThe log() of %d is %f\n\n", x, res);
					break;
				case '5':
					res = sinh(x);
					printf("\nThe sinh() of %d is %f\n\n", x, res);
					break;
				default:
					printf("Invalid input");
					break;
			}
		}	
		else
		{
			selection = 'x';
		}
	}
	return 0;
}

//code for scientific calculator.
