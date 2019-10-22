/*
 * Header for a linked list class.
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

#ifndef LISTA_H
#define LISTA_H

/**
 * @todo write docs
 */
class Lista
{
private:
    typedef struct node {
        int data;
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    Lista();
    void AddNode ( int data );
    void DeleteNode ( int data );
    void PrintLista();
};

#endif // LISTA_H
