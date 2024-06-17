#include<stdio.h>
#include<ctype.h>

int main(){

    printf("Welcome to Event Management program!");
    
    int numofevent;
    char agreement;
    
    printf("\n\nDo you want manage an event?");
    printf("\n\n1. Press 'A' to add a new event.");
    printf("\n2. Press 'E' to edit a planned event.");
    printf("\n3. Press 'U' to undo an event.");
    printf("\n4. Press 'D' to display your event.");
    printf("\n5. Press 'S' to search to search for an event.");
    printf("\n\nPress 'N' to cancel action.");
    
    scanf(" %c", &agreement);
    
    agreement = tolower(agreement);
    
    switch(agreement){
        case 'a':
        break;
        case 'e':
        break;
        case 'u':
        break;
        case 'd':
        break;
        case 's':
        break;
        case 'n':
        break;
        default:
        break;
    }

return 0;
}