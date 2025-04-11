#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    char *msg = "Hello World xv6\n";
    int len = 0;
    
    // Calculate the length of the message
    while (msg[len] != '\0') {
        len++;
    }
    
    // Write the message to standard output (file descriptor 1)
    write(1, msg, len);
    
    // Exit the program
    exit(0,"");
}
