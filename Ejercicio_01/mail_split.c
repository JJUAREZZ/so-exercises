#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mail_split(char* mail, char** user, char** dominio) {
    char userlol = strtok(mail, "@");
    printf("%s", userlol);
}

int main(void) {
    char* mail = "ritchie@ansic.com.ar";
    char* user;
    char* dominio;
    mail_split(mail, &user, &dominio);
    return 0;
}