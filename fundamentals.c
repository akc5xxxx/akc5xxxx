// Disable warnings for certain functions
#define _CTR_SECURE_NO_WARNINGS

// Include necessary headers
#include <stdio.h>
#include "fundamentals.h"

// Define constants for buffer and input sizes
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

// Function to demonstrate fundamental string operations
void fundamentals() {
	//Version 1
	
    // Display start message for indexing strings demo
    printf("*** Start of Indexing Strings Demo ***\n");

    // Initialize variables
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    // Loop for indexing strings
    do
    {
        // Prompt for non-empty string or 'q' to quit
        printf("Type not empty string (q - to quit):\n");

        // Read input string
        fgets(buffer1, BUFFER_SIZE, stdin);
        // Remove newline character from input
        buffer1[strlen(buffer1) - 1] = '\0';
        
        // Check if input is not 'q'
        if (strcmp(buffer1, "q") != 0)
        {
            // Prompt for character position within the string
            printf("Type the character position within the string:\n");

            // Read input for position
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            // Remove newline character from input
            numInput[strlen(numInput) - 1] = '\0';
            
            // Convert position input to integer
            position = atoi(numInput);

            // Check if position is within the string length
            if (position >= strlen(buffer1))
            {
                // Adjust position if it exceeds string length
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }
            // Display character at specified position
            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0); // Continue until input is 'q'

    // Display end message for indexing strings demo
    printf("*** End of Indexing String Demo ***\n\n");

	//Version 2

    // Start demonstration for measuring string length
    printf("*** Start of Measuring Strings Demo ***\n");
    char buffer2[BUFFER_SIZE];

    // Loop for measuring string length
    do
    {
        // Prompt for string input or 'q' to quit
        printf("Type a string (q - to quit):\n");
        // Read input string
        fgets(buffer2, BUFFER_SIZE, stdin);

        // Remove newline character from input
        buffer2[strlen(buffer2) - 1] = '\0';

        // Check if input is not 'q'
        if (strcmp(buffer2, "q") != 0)
        {
            // Display the length of the input string
            printf("The length of \'%s\' is %d characters\n",
                buffer2, (int)strlen(buffer2));
        }

    } while (strcmp(buffer2, "q") != 0); // Continue until input is 'q'

    // Display end message for measuring string demo
    printf("*** End of Measuring String Demo ***\n\n");

	//Version 3

    // Start demonstration for copying strings
    printf("*** Start of Copying String Demo ***\n");

    // Initialize variables for source and destination strings
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];

    // Loop for copying strings
    do
    {
        // Reset destination string to empty
        destination[0] = '\0';
        printf("Destination string is reset to empty\n");
        printf("Type the source string (q to quit):\n");
        // Read source string
        fgets(source, BUFFER_SIZE, stdin);
        // Remove newline character from input
        source[strlen(source) - 1] = '\0';

        // Check if input is not 'q'
        if (strcmp(source, "q") != 0)
        {
            // Copy source string to destination
            strcpy(destination, source);
            // Display the new destination string
            printf("New destination string is \'%s\'\n", destination);
        }
    } while (strcmp(source, "q") != 0); // Continue until input is 'q'

    // Display end message for copying string demo
    printf("*** End of Copying String Demo ***\n\n");
}
