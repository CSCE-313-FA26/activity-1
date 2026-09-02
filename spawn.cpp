/* spawn.cpp - start N workers with fork().
 *
 * Part B of the activity. There is exactly ONE TODO, in main(). Everything
 * else - including the loop that reaps the children - is written for you.
 */
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <sys/wait.h>

#define N_WORKERS 4

int main()
{
    printf("spawner pid %d starting %d workers\n", (int)getpid(), N_WORKERS);
    fflush(stdout);

    for (int i = 0; i < N_WORKERS; i++) {

        /* ================= TODO: your work goes here =================
         *
         * Fork one child per pass of this loop. In each child:
         *
         *   1. call fork() and store the result
         *   2. if it returned < 0, perror("fork") and exit(1)
         *   3. in the CHILD only, print EXACTLY this one line:
         *
         *          worker %d pid %d parent %d
         *
         *      with i, the child's own PID, and the child's parent PID,
         *      then leave the child with  exit(i);
         *
         *   4. the PARENT does nothing here - it just keeps looping.
         *
         * The single most common mistake: forgetting to exit() the child.
         * A child that falls through carries on round the loop and forks
         * again, and you get far more than four workers. Part A shows you
         * how to watch that happen.
         *
         * ============================================================= */

    }

    /* ---- GIVEN: reap every child. You do not need to change this. ---- */
    int reaped = 0;
    for (;;) {
        int status;
        pid_t done = wait(&status);
        if (done < 0) break;                 /* no children left */
        if (WIFEXITED(status))
            printf("spawner reaped pid %d exit %d\n",
                   (int)done, WEXITSTATUS(status));
        else
            printf("spawner reaped pid %d (killed)\n", (int)done);
        fflush(stdout);
        reaped++;
    }

    printf("spawner done, reaped %d\n", reaped);
    return 0;
}
