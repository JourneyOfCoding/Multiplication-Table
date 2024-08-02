#include<stdio.h>  // Include standard input-output library

int main()
{
    int no;  // Variable to store the number for which the multiplication table will be generated
    int i;   // Loop counter variable

    // Gets the value from user to enter a number
    printf("Enter any number to generate multiplication table: ");
    scanf("%d", &no);  // Read the input number from the user

    // Loop to generate the multiplication table
    for(i = 1; i <= 10; i++)
    {
        // Print the multiplication result for the current value of i
        printf("%d X %d = %d\n", no, i, i * no);
    }

    return 0;  // Indicate that the program ended successfully
}
