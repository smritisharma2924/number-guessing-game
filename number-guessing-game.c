// Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to print characters one by one with a delay to create a typing effect
void slow_print(const char *str, int delay_ms) {
    while (*str) {
        printf("%c", *str++);
        fflush(stdout);
        struct timespec ts = {0, delay_ms * 1000000};
        nanosleep(&ts, NULL);
    }
}

// Function to compare guessed number with the original number and give hints
int trial(int org_num, int gsd_num) {
    if(org_num > gsd_num) {
        slow_print((org_num - gsd_num) > 20 ? "\nWay too small! Try guessing a higher number.\n" : "\nA bit low. Go a bit higher.\n",30);
        return 0;
    }
    else if(org_num < gsd_num) {
        slow_print((gsd_num - org_num) > 20 ? "\nWay too large! Try guessing a smaller number.\n" : "\nA bit high. Go a bit lower.\n",30);
        return 0;
    }
    else if(org_num==gsd_num) {
        return 1;
    }
    return 0;
}

int main() {
    // Variable declarations
    int org_num, gsd_num, attempts=0, diff, rate;
    // Game introduction and welcome message
    slow_print("~~==NUMBER GUESSING GAME==~~\n",30);
    slow_print("Welcome to the Number Guessing Challenge!\nTest your luck and logic. Can you guess the number correctly?\n",30);
    slow_print("\n~~== GAME RULES ==~~\n",30);
    slow_print("1. A random number between 1 and 100 will be generated.\n2. You have limited attempts to guess the correct number based on the difficulty level.\n",30);
    slow_print("   - EASY   : 10 attempts\n   - MEDIUM : 7 attempts\n   - HARD   : 5 attempts\n",30);
    slow_print("3. After each guess, you'll get a hint whether to guess higher or lower.\n",30);
    slow_print("4. Guess the number correctly within the attempts to win!\n",30);
    slow_print("5. If you fail, the correct number will be revealed.\n\n",30);
    slow_print("Choose your difficulty level to begin : \n",30);
    // Seed the random number generator
    srand(time(0));
    // Difficulty selection menu
    label :
        slow_print("1...EASY\n",30);
        slow_print("2...MEDIUM\n",30);
        slow_print("3...HARD\n",30);
        slow_print("4...QUIT\n",30);
        slow_print("Select Difficulty : ",30);
        scanf("%d",&diff);
        printf("\n");
    do {
        
        // Generate a random number between 1 and 100
        org_num = ((rand() % 100)+1); // The system is guessing a number here which will be stored as original number.
        // printf("%d\n",org_num);
    
        // Assign number of attempts based on difficulty
        switch (diff) {
            case 1 : attempts = 10; break;
            case 2 : attempts = 7; break;
            case 3 : attempts = 5; break; 
            case 4 : break;
            default : slow_print("You entered wrong choice.\n",30); goto label;
        }

        if (diff==4) {
            break;
        }
        
        printf("You have %d attempts. \n",attempts);
        for (int i=0 ; i<attempts ; i++) {
            printf("Enter number at attempt %d : ",(i+1));
            scanf("%d",&gsd_num);
            
            // Check if the guess is correct
            if (trial(org_num,gsd_num)) {
                slow_print("CONGRATS!!...YOU WON!!!!....\n",30);
                break;
            }
            // If last attempt is used and guess is wrong
            if (i == (attempts-1)) {
                slow_print("YOU LOSE!!!!\n",30);
                printf("The number was %d.\n",org_num);
                break;
            }
            printf("You have %d attempts left.\n", attempts-i-1);
        }
        // Restart game by going back to difficulty selection
        goto label;
        
     } while(diff!=4) ;
    
    // End game message and rating prompt
    slow_print("THANK YOU FOR PLAYING\n",30);
    slow_print("Developer : Smriti Sharma\n\n",30);
    slow_print("Would you like to rate us : (*)(*)(*)(*)(*)\n",30);
    slow_print("1...yes\n",30);
    slow_print("2...no\n",30);
    slow_print("Select your choice : ",30);
    scanf("%d",&rate);
    // Handle user rating input
    if (rate==1) {
        int star;
        slow_print("Enter number of stars : ",30);
        scanf("%d",&star);
        if (star>5) {
            star=5;
        }
        for(int i=0 ; i<star ; i++) {
            printf("(*)");
        }
        for(int i=0 ; i<(5-star) ; i++) {
            printf("( )");
        }
    }
    // Handle case where user declines to rate
    else if (rate==2) {
        slow_print("OKAY THANK YOU\n",30);
    }
    // Handle invalid rating input
    else {
        printf("Invalid choice\n");
    }
    return 0;
}