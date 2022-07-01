#include <stdio.h>
/**
 * The main code starts here
 * This code will accept an input and print my initials, age ,sex
 */
int main(void){
        /*
         * Type Definition:
         * int (which means Integers), char(Characters)
         * long: allocates 8 bytes of memory
         */
        char a, b, c;
        int age;
        long char name, sex;
        /*
         * prinf() function prints string, characters, integers embedded inside the parentheses
         * scanf() accepts an input and passes it to the address(&(any acceptable keyword)) 
         */
        printf ("Enter your name");
        scanf("%c",&name)
        printf ("Enter your Initials:");
        putchar ("%c %c %c \n", &a, &b, &c);
        printf ("Enter your age:");
        scanf ("%d \n",&age);
        printf ("Enter your sex:");
        scanf("Male or Female:%c \n",&sex);
        print("Greetings Dear %c of %d years old. You are welcome to eXodus Organiation and we are glad to have you here.\
        Your initials are %c%c%c .Your are such a wonderful entity to the %c community.", name, age, a, b, csex)
        return (0);
}
        
