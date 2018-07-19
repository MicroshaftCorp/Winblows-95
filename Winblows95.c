#include <stdio.h>
   #include <stdio.h>
#include <errno.h>
int main (void) {
int main()
{
printf("=[-S]")
printf("Winblows 95");
   return 0;
}
sleep(6000);

    FILE *fp;
    fp = fopen ("Windows93.c","w");
    if (fp == NULL) {
        printf ("File not created okay, errno = %d\n", errno);
        return 1;
    }
    //fprintf (fp, "Hello, there.\n"); // if you want something in the file.
    fclose (fp);
    printf ("File created okay\n");
    return 0;
}
