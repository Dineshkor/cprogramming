#include <stdio.h>
#include <stdlib.h>

int main()
{
    writeToFile();
    readAFile();
    return 0;
}

void writeToFile() {
    FILE *f;
    f = fopen("/home/dinesh/program.txt", "w+");
    if (f == NULL) {
        printf("ERROR");
        exit(1);
    }

    fprintf(f, "hey man whatcha doing???");
    fclose(f);

}

void readAFile() {
    FILE *f;
    char c;
    f = fopen("/home/dinesh/program.txt", "r");
    if (f == NULL) {
        printf("ERROR");
        exit(1);
    }
    while(1) {
        c = fgetc(f);
        if(c == EOF) {
            break;
        }
        printf("%c", c);
    }
    fclose(f);
}
