// Include necessary header files for different modules
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

// Main function to select and run different modules
int main() {
    // Initialize buffer for user input
    char buff[10];

    // Loop for module selection
    do {
        // Display options for different modules
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");

        // Read user input for module selection
        fgets(buff, 10, stdin);

        // Check the selected option using a switch statement
        switch (buff[0]) {
            case '1':
                // Run the fundamentals module
                fundamentals();
                break;
            case '2':
                // Run the manipulating module
                manipulating();
                break;
            case '3':
                // Run the converting module
                converting();
                break;
            case '4':
                // Run the tokenizing module
                tokenizing();
                break;
        }
    } while (buff[0] != '0'); // Continue until '0' (Exit) is selected

    return 0;
}
