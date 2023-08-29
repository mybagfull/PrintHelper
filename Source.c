/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Input num of pages to print: ");
    int input;
    scanf_s("%d", &input);
    int pages = input;
    printf("\nBLANC PAGES: ");
        while ((pages % 4) != 0) {
            pages++;
            printf("%d", pages);
        }
    printf("\n");
    //*int pages[input];
    int page1 = pages;
    int page2 = 1;
    int i = 0;
    printf("\nPRINT PAGES: \n");
    while (i != pages)
    {
        printf("%d,", page1);
        page1--;
        i++;
        printf("%d,", page2);
        page2++;
        i++;
        printf("%d,", page2);
        page2++;
        i++;
        printf("%d,", page1);
        page1--;
        i++;
    }
    return 0;
}
