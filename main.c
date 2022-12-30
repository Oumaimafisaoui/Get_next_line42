
#include "get_next_line.h"

int main(int argc, char *argv[]){
    char *line;
    int fd = open(argv[1], O_RDONLY);
    
    while (get_next_line(fd)){
        printf("%s\n", line);
        free(line);
    }
    printf("%s\n", line);
    free(line);
    return (0);
} 