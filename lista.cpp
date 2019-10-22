/*
 * Implementation of a linked list class.
 * Copyright (C) 2019  Eduardo Quiros eduardo@eduardoquiros.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <cstdlib>
#include <iostream>
#include "lista.h"

using namespace std;

Lista::Lista()
{
    head = NULL;
    current = NULL;
    temp = NULL;
}

void Lista::AddNode ( int data )
{
    nodePtr n = new node;
    n->next = NULL;
    n->data = data;

    if ( head != NULL ) { //Si la lista tiene elementos, inicia el recorrido.
        current = head;

        while ( current->next != NULL ) { //Si no esta al final de la lista, continua.
            current = current->next;
        }
    } else {
        head = n;
    }
}

void Lista::DeleteNode(int data){
    nodePtr delPtr = NULL;
    temp = head;
    current = head;
    
    while(current != NULL && current->data != data){
        temp = current;
        current = current->next;
    }
    if(current == NULL){
        cout << data << "no encontrado en la lista\n";
        delete delPtr;
    }
    else{
        delPtr = current;
        current = current->next;
        temp->next = current;
        delete delPtr;
        cout << "Elemento borrado\n";
    }
}

void Lista::PrintLista(){
    current = head;
    while(current!=NULL){
        cout << current->data << endl;
        current = current->next;
    }
}
