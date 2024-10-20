# include<stdio.h>

/*
Print the pattern :
 1 
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

How to do this ?
There are 5 rows in total. So, you need to create a loop that runs 5 times 

In each row:
You will print numbers starting from 1.
The number of numbers you print should match the row number. For example:
In row 1, print only 1.
In row 2, print 1 2.
In row 3, print 1 2 3, and so on.
To do this, create a loop inside another loop.
*/

int main(){
    // write your code here
    int rows;
    printf("enter the number of rows");
    scanf("%d", &rows);
    
    for (int row = 1; row <= rows; row++) {
        for (int col = 1;  col <= row;  col++) {
            printf("%d", col);
        }
        printf("\n");
        
    }

    return 0;
}