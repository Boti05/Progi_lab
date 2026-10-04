#include <stdio.h>
#include <string.h>

int lekerdez()
{
    char input_text[100];
    char exit[] = "exit";
    int kilep = 1;
    
    while (kilep)
    {
        printf("Ird ide amit akarsz: ");
        if (fgets(input_text, sizeof(input_text), stdin) != NULL) //fgets() fájl beolvas, hosszabb string beolvas (egy sort); stdin a standard input, billentyűzet, nem file; NULL az lenne, ha nem sikerülne a beolvasás
        {
            input_text[strcspn(input_text, "\r\n")] = 0; // levesszük az entert -> strcspn string complement span -> indexet keres szövegben, ha nincs benne a string teljes hosszát adja vissza
            if (strcmp(input_text, exit) != 0) // strcmp string compare -> nem a memóriahelyeket hasonlítja össze, hanem a teljes stringet karakterről karakterre
            {
                printf("Ezt kerted: %s\n\n", input_text);
            }
            else
            {
                printf("Akkor kilepunk.\n");
                kilep = 0;
            }
        }
    }
}

int main()
{
    lekerdez();
    return 0;
}