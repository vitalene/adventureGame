// The Iron Yard Day 2 Homework
// My Adventure Game by Neil Vitale
// Copyright ©️ Neil Vitale


#include <stdio.h>
#include <stdbool.h>


void printIntro();
int getRoomChoice();
void roomOne();
void roomTwo();
void roomThree();
void roomFour();
void roomFive();
void roomSix();
void doorIsLocked();
int noticeRoom();
int doorOpens();

int main(int argc, const char * argv[]) {
    
    int counter = 1;
    while (counter < 3) {
        int goAgain = 0;
        int numberOfItems = 0;
        printIntro();
        getRoomChoice();
        if (counter == 1) {
        printf("\nDo you want to try again?  Type 0 for NO and 1 for YES.");
        } else {
            break;
        }
        numberOfItems =scanf("%d", &goAgain);
        if (goAgain == 1) {
            counter++;
        } else {
            break;
        }
    }
    
  
    
    return 0;
}

// Introduction:

void printIntro() {
    printf("*****************************\n");
    printf("Welcome to my adventure game! \n");
    printf("*****************************\n");
    printf("You are a weary traveler stopping at a motel for the night.\n");
    printf("*****************************\n\n");
    printf("You get your key, but it's dark and you can't read the room numbers.\n");
    printf("In which door will you try your key?\n\n");
    printf("Type the coresponding number\n\n");
    printf("||||||||||||||||||||||||||\n");
    printf("1. There is a creepy cat's howl coming from inside.\n");
    printf("2. It's dead silent\n");
    printf("3. You can hear a loud thumping noise\n");
    printf("4. The shutters bang noisily in the wind.\n");
    printf("5. A TV blares loudly\n");
    printf("6. A tea kettle whistles\n");
    printf("||||||||||||||||||||||||||\n");
    
}

// Rooms:

void roomOne() {
    doorIsLocked();
}
void roomTwo() {
    doorOpens();
}
void roomThree() {
    noticeRoom();
}
void roomFour() {
    doorIsLocked();
}
void roomFive() {
    noticeRoom();
}
void roomSix() {
    doorIsLocked();
}

//choosing a room

int getRoomChoice() {
    printf("Type a number (1-6):");
    fpurge(stdin);
    int numberScanned;
    int choiceNumber;
    numberScanned = scanf("%d", &choiceNumber);
    if (choiceNumber == 1) {
        roomOne();
    }
    if (choiceNumber == 4) {
        roomFour();
    }
    if (choiceNumber == 6) {
        roomSix();
    }
    if (choiceNumber == 5) {
        roomFive();
    }
    if (choiceNumber == 2) {
        roomTwo();
    }
    if (choiceNumber == 3) {
        roomThree();
    }
    return choiceNumber;
    }

//endings:

void doorIsLocked() {
    printf("\n##################################################\n");
    printf("\nThe door is locked.  You feel dejected and sulk for a moment before carrying on...\n");
    printf("\n##################################################\n");
    }
// first int function
int noticeRoom() {
    printf("You notice that the room is not yours.  Where do you put your key?\n");
    printf("1. Your left pocket.\n");
    printf("2. Your right pocket.\n");
    printf("3. Swallow it.\n");
    printf("Enter a number: ");
    int numberEntered;
    int yourChoiceNumber;
    numberEntered = scanf("%d", &yourChoiceNumber);
    return yourChoiceNumber;
}
// first int function
int doorOpens() {
    printf("The door opens.  Will you?:\n");
    printf("1. Enter and turn on the light.\n");
    printf("2. Timidly say \"hello\" and wait for a response\n");
    printf("3. Shuffle through your papers to find your receipt with the room number.\n");
    printf("Your Choice:");
    int yourChoiceNow;
    int yourNumberEntered;
    yourNumberEntered = scanf("%d", &yourChoiceNow);
    return yourChoiceNow;
}
