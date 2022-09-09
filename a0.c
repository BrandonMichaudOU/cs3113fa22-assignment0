#include <stdio.h>

int main(int argc, char** arg, char** envp) {
	
	// Declare an integer to hold input from stdin	
	int val;

	// Declare an integer and assign the return value of the scan to it
	int status = scanf("%d", &val);

	// Read input until the EOF token or non-integer
	while(status != 0 && status != EOF) {

		// Check if the value is divisible by 3
		if (val % 3 == 0) {

			// Check if the value is also divisible by 5
			if (val % 5 == 0) {

				// Print out "Boomer Sooner!" if the value is divisible by both 3 and 5
				printf("Boomer Sooner!\n");
			}

			else {
				// Print out "Boomer!" if the value is only divisible by 3
				printf("Boomer!\n");
			}
		}

		// Check if the value is divisible by 5
		else if (val % 5 == 0) {
			// Print out "Sooner!" if the value is divisible by only 5
			printf("Sooner!\n");
		}
		else {
			// If the value is not divisble by either 3 or 5 print out the value
			printf("%d\n", val);
		}
		status = scanf("%d", &val);
	}	
	// Default return
	return 0;
}
