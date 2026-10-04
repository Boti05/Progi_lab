#include <stdio.h>

void lekerdez()
{
    int index = 0;
    char a;
    char text[10] = "";
    scanf("%c", &a);
    while (text != "exit")
    {
        scanf("%c", &a);
        text[index] = a;
    }
    printf("%s", text);
    

}

int main()
{
    lekerdez();
    return 0;
}