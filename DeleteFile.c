#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    unlink("Marvellous.txt");

    printf("File deleted successfully");

    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR : Read + write
