/* observe.cpp - a WORKING fork program. Do not change this file.
 *
 * Part A of the activity uses this under GDB. It is already correct, so the
 * debugger work does not depend on anything you write.
 */
#include <cstdio>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int counter = 7;                    /* both processes start with this */

    fflush(stdout);
    pid_t pid = fork();

    if (pid < 0) {              /* <== ACTIVITY: break here (line 17) */
        perror("fork");
        return 1;
    }

    if (pid == 0) {
        counter += 100;
        printf("child : counter = %d\n", counter);
        return 0;
    }

    wait(nullptr);
    printf("parent: counter = %d\n", counter);
    return 0;
}
