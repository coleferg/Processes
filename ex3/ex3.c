// Write another program using `fork()`. The child process should print "hello";
// the parent process should print "goodbye". You should ensure that the child
// process always prints first.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    // Your code here
    int rc = fork();
    if (rc < 0) {
        printf("error man");
        exit(1);
    } else if (rc == 0) {
        printf("hello\n");
    } else {
        waitpid(rc, NULL);
        printf("goodbye\n");
    }
    return 0;
}
