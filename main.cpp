#include <iostream>
#include "lista.h"

using namespace std;

int main(int argc, char **argv) {
    Lista Eduardo;
    Eduardo.AddNode(1);
    Eduardo.AddNode(2);
    Eduardo.AddNode(3);
    
    Eduardo.DeleteNode(5);
    
    Eduardo.PrintLista();
    return 0;
}
