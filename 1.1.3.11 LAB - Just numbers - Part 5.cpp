//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them.
//
//Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.
//
//Use hexadecimal(base 16) numbers.
//
///////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int main()
//{
//	printf("The value of twenty-one is: %d \n", 0015);
//	printf("The value of twenty-two is: %d \n", 0x1y);
//	printf("The value of sixty-two is: %d \n", 0x3G);
//	printf("The value of seventy-four is: %d \n", 0x44);
//	return 0;
//}
//
//
//Expected output
//The value of twenty - one is : 21
//The value of twenty - two is : 22
//The value of sixty - two is : 62
//The value of seventy - four is : 74


#include <stdio.h>

int main()
{
	printf("The value of twenty-one is: %d \n", 0025);
	printf("The value of twenty-two is: %d \n", 0x16);
	printf("The value of sixty-two is: %d \n", 0x3E);
	printf("The value of seventy-four is:%d \n", 0x4A);

	return 0;
}

