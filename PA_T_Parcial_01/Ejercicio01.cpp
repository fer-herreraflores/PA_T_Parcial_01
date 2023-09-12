#include "Ejercicio01.h"

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    int Primerletra, Ultimaletra;
    while(Primerletra!=0&&Ultimaletra!=0)
    {
        if (Primerletra >= Ultimaletra)
        {
            return true;
        }
        if (Primerletra != Ultimaletra)
        {
            return false;
        }
        return Primerletra + 1, Ultimaletra - 1;
    }
    
    
    return 0;
}
