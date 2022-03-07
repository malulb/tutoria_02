#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define QTD_MESSAGES 2

int main() {
    int pipeFileDescriptors[2];
    int returnStatus;
    pid_t pid;
    char writeMessages[QTD_MESSAGES][20] = {":)", "<3"};
    char readMessages[20];
    memset(readMessages, '\0', sizeof(char) * 20);

    returnStatus = pipe(pipeFileDescriptors);

    if (returnStatus == -1) {
        printf("Error when create pipe\n");
        return 1;
    }

    pid = fork();

    if (pid == 0) {
        read(pipeFileDescriptors[0], readMessages, sizeof(readMessages));
        printf("Child Process Reading Message 1 is %s\n", readMessages);
        read(pipeFileDescriptors[0], readMessages, sizeof(readMessages));
        printf("Child Process Reading Message 2 is %s\n", readMessages);
    }
    else if(pid > 0){
        printf("Parent Process Writing Message 1 is %s\n", writeMessages[0]);
        write(pipeFileDescriptors[1], writeMessages[0], sizeof(writeMessages[0]));
        printf("Parent Process Writing Message 2 is %s\n", writeMessages[1]);
        write(pipeFileDescriptors[1], writeMessages[1], sizeof(writeMessages[1]));
    }

   return 0;
}


