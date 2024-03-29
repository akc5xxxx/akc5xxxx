// Disable warnings for certain functions
#define _CRT_SECURE_N0_WARNINGS
// Define buffer size for input strings
#define BUFFER_SIZE 80
// Include necessary header file
#include "converting.h"

// Function to demonstrate converting strings to different numeric types
void converting(void)
{
    // Version 1
    // Display start message for integer conversion demo
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Initialize variables
    char intString[BUFFER_SIZE];
    int intNumber;

    // Loop for converting integer strings
    do
    {
        // Prompt for input
        printf("Type an int numeric string (q - to quit):\n");
        // Read input string
        fgets(intString, BUFFER_SIZE, stdin);
        // Remove newline character from input
        intString[strlen(intString) - 1] = '\0';

        // Check if input is not 'q'
        if (strcmp(intString, "q") != 0)
        {
            // Convert string to integer
            intNumber = atoi(intString);
            // Display converted number
            printf("Converted number is %d\n", intNumber);
        }

    } while (strcmp(intString, "q") != 0); // Continue until input is 'q'

    // Display end message for integer conversion demo
    printf("*** End of Converting Strings to int Demo ***\n\n");

    //Version 2
    // Start demonstration for converting strings to double
    printf("*** Start of Converting Strings to double Demo ***\n");
    // Declare variables for double conversion
    char doubleString[BUFFER_SIZE];
    double doubleNumber;

    // Loop for converting double strings
    do
    {
        // Prompt for input
        printf("Type the double numeric string (q - to quit):\n");
        // Read input string
        fgets(doubleString, BUFFER_SIZE, stdin);
        // Remove newline character from input
        doubleString[strlen(doubleString) - 1] = '\0';

        // Check if input is not 'q'
        if ((strcmp(doubleString, "q") != 0))
        {
            // Convert string to double
            doubleNumber = atof(doubleString);
            // Display converted number
            printf("Converted number is %f\n", doubleNumber);
        }

    } while (strcmp(doubleString, "q") != 0); // Continue until input is 'q'

    // End message for double conversion demo
    printf("** End of Converting String to double Demo ***\n\n");


    /////////Version 3
    // Start demonstration for converting strings to long
    printf("*** Start of Converting Strings to long Demo ***\n");
    // Declare variables for long conversion
    char longString[BUFFER_SIZE];
    long longNumber;

    // Loop for converting long strings
    do {
        // Prompt for input
        printf("Type the long numeric string (q - to quit):\n");
        // Read input string
        fgets(longString, BUFFER_SIZE, stdin);
        // Remove newline character from input
        longString[strlen(longString) - 1] = '\0';

        // Check if input is not 'q'
        if ((strcmp(longString, "q") != 0)) {
            // Convert string to long
            longNumber = atol(longString);
            // Display converted number
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0); // Continue until input is 'q'

    // End message for long conversion demo
    printf("*** End of Converting Strings to long Demo ***\n\n");
}
