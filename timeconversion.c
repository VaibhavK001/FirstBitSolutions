#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;

    
    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    
    hours = minutes / 60;
    remainingMinutes = minutes % 60;

  
    printf("%d minutes is equal to %d hour(s) and %d minute(s).\n", minutes, hours, remainingMinutes);

    return 0;
}
