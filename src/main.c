#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Function to sleep for a given number of seconds and then print a message
void sleepAndPrint(int seconds, const char* message) {
    sleep(seconds);
    puts(message);
}

int main() {
    // Print introductory message
    printf("\033[0;31mHeight calculator!\n\n\033[0m");

    // Declare variables
    float weight, height;

    // Get user input for weight
    printf("Enter your weight: ");
    if (scanf("%f", &weight) != 1) {
        printf("Invalid weight. Please enter a valid number.\n");
        return 1;
    }
    while (getchar() != '\n'); // Flush the input buffer

    // Get user input for height
    printf("Enter your height in cm: ");
    if (scanf("%f", &height) != 1) {
        printf("Invalid height. Please enter a valid number.\n");
        return 1;
    }
    while (getchar() != '\n'); // Flush the input buffer

    // Perform calculations
    printf("\n\nCalculating...\n");
    printf("[|     ] Reading mind...\n");

    // Define an array of messages to display during the calculation process
    const char* messages[] = {
        "[||    ] Calculating something...",
        "[|||   ] Asking Chatgpt about the answer...",
        "[||||  ] Finding answers about the meaning of life...",
        "[||||| ] If your HP drops to 0, you die...",
        "[||||||] Mind Control...",
        "Done\n"
    };

    // Iterate over the messages array and display each message after a delay
    for (int i = 0; i < sizeof(messages) / sizeof(messages[0]); i++) {
        sleepAndPrint(2, messages[i]);
    }

    // Print the calculated height
    printf("\033[0;32mYour height is: %.0f cm\n\n\033[0m", height);

    // Prompt the user to press enter to continue
    printf("Press enter key to continue . . .");
    while (getchar() != '\n'); // Discard the key press

    return 0;
}
