// Bianca Farfan
// February 19th
// Hello world using write system call

#include <unistd.h>

int main(int argc, char* argv[]) {

    char message[] = "Hello, world!\n";

    write(STDOUT_FILENO, message, 14);

    return 0;
}
