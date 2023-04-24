#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int height);

int main(void)
{
    int height = get_size();
    print_grid(height);
}

//reprompts user until they input a positive integer for height.
int get_size(void)
{
    int height;
    do
    {
        height = get_int("Enter a positive number between and including 1-8. ");
    }
    while (height <= 0 || height >= 9);
    return height;
}

//prints the stairs
void print_grid(int height)
{
    for (int i = height; i > 0; i--) // height of stairs
    {

        for (int j = 0; j < i-1; j++) // width of " "
        {
            printf(" ");
        }

        //if input is 3. used i bc it is decreasing. ex. 3,2,1. height remains the same as initial input of 3.
        //so as k decreases with i, it has to add one more hash than the previous line.
        for (int k = i; k < height+1; k++) // width of the # in the left side of stairs
        {
            printf("#");
        }

        printf("  ");   // the two spaces between each set of stairs.

        for (int k = i; k < height+1; k++) // width of the # in the right side of the stairs
        {
            printf("#");
        }

        printf("\n");
    }

}
