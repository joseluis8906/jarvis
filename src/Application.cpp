#include <iostream>
#include "String.h"
#include "Scanner.h"
#include "Console.h"
#include "Integer.h"

int main () {
    Glock::Integer i = 1000000;
    Glock::Console::PrintLn(i);
    /*Glock::String str = "Hola {name}";
    Glock::Scanner scanner;
    Glock::Console::Print("Escribe tu nombre: ");
    Glock::String name = scanner.NextLine();
    str.Replace("{name}", name);
    Glock::Console::PrintLn (str);*/
}
