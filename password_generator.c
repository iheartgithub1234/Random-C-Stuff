#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int getIndex(int max) {
    srand(time(0));
    int index = rand() % max;

    return index;
}

int main() {
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    char capitals[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[11] = "12345567890";
    char symbols[7] = "!@#$^&*";

    char answer;
    int length;

    printf("How long do you want your password? ( [s]hort, [m]edium, [l]ong, [g]iant ): ");
    scanf("%c", &answer);

    if(answer == 's') {
        length = 1;
    }

    if(answer == 'm') {
        length = 2;
    }

    if(answer == 'l') {
        length = 4;
    }

    if(answer == 'g') {
        length = 8;
    }

    printf("Making random password... May take up to 35 seconds...\n\n");

    for(int i = 0; i <= (length - 1); i++) {
        printf("%c", alphabet[getIndex(25)]);
        sleep(1);
        printf("%c", capitals[getIndex(25)]);
        sleep(1);
        printf("%c", numbers[getIndex(9)]);
        sleep(1);
        printf("%c", symbols[getIndex(6)]);
        sleep(1);
    }

    printf("\n");

    return 0;
}