/******************************************************************************
 * A basic system daemon that writes to a log file
 * per http://www.thegeekstuff.com/2012/02/c-daemon-process/
 * Author: Patrick Kennedy
 * Started: October 19, 2017
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char* argv[]) {
  FILE *fp = NULL;
  pid_t process_id = 0;
  pid_t sid = 0;

  // Create child process
  process_id = fork();

  // Indication if fork() fails
  if (process_id < 0) {
    puts("The fork() failed");
    // Return failue in exit status
    exit(1);
  }

  // Parent process: need to kill it
  if (process_id > 0) {
    printf("process_id of child process: %d\n", process_id);
    // Return success in exit status
    exit(0);
  }

  // unmask the file mode
  unmask(0);
  // set a new session
  sid = setsid();
  if (sid < 0) {
    // Return session failure
    exit(1);
  }

  // Change the current working directory to root
  chdir("/");
  // Close std, stdout and stderr
  close(STDIN_FILENO);
  close(STDOUT_FILENO);
  close(STDERR_FILENO);
  // Open a log file in write mode
  fp = fopen("daemon_log.txt", "w+");
}
