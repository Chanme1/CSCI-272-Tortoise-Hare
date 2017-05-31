//
//  Project 2 - Tortoise and Hare
//
//  Created by Melissa Chan on 2/13/17.
//  Copyright © 2017 Melissa Chan. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int finish = 70;

void moveTortoise (int *);
void moveHare (int *);
void position (const int * const, const int * const);
// void position (const int *const, const int *const);

int main()
{
    int tortoise = 1;
    int hare = 1;
    int timer = 0;
    
    const int size = 70;
    
    srand(time(0));
    
    cout << "Bang!!!!! \nAND THEY'RE OFF!!!!!" << endl;
    
    while (tortoise != finish && hare != finish)
    {
        moveTortoise (&tortoise);
        moveHare (&hare);
        position (&tortoise, &hare);
        //position (&tortoise, &hare );
        timer ++;
    }
    
    if (tortoise > hare)
        cout << "TORTOISE WINS!!! YAY!!!" << endl;
    else if (hare > tortoise)
        cout << "Hare wins. Yuch" << endl;
    else if (hare == tortoise)
        cout << "It's a tie" << endl;
    
    cout << "Timer Stops At: " << timer << " seconds" << endl;
    
    return 0;
}

void moveTortoise (int *tortoisePtr)
{
    int i = rand () % 10 + 1; //tortoise and hare have different random generator as they both have their own move type
    
    if (i >= 1 && i <= 5) //fast plod
        *tortoisePtr += 3;
    else if ( i >= 6 && i <= 7) //slip so -6
        *tortoisePtr -= 6;
    else //Slow Plod
        *tortoisePtr += 1;
    
    //If position of tortoise is lower than postion 1
    if (*tortoisePtr < 1)
        *tortoisePtr = 1; //sets to beginning
    //If hare passes position 70
    if (*tortoisePtr > finish)
        *tortoisePtr = finish; //hare = 70
    
    
}

void moveHare (int *harePtr)
{
    int i = rand () % 10+1;
    
    if (i >= 1 && i <= 2) //Sleep
        *harePtr = *harePtr; //equal each other as don't move
    else if (i >= 3 && i <= 4) //Big Hop
        *harePtr += 9;
    else if (i == 5) //Big Slip
        *harePtr -= 12;
    else if (i >= 6 && i <= 8) //Small Hop
        *harePtr += 1;
    else //Small Slip
        *harePtr -= 2;
    
    //If position of Hare is lower than position 1
    if (*harePtr < 1)
        *harePtr = 1;
    
    //If hare passes position 70
    if (*harePtr > finish)
        *harePtr = finish; //hare = 70
}


 void position (const int * const tortoisePtr, const int * const harePtr)
 {
     if (*tortoisePtr == *harePtr)
         cout << setw(*tortoisePtr) << "OUCH" << endl;
     if (*tortoisePtr > *harePtr)
         cout << setw(*harePtr) << "H" << setw(*tortoisePtr-*harePtr) << "T" << endl;
     else
         cout << setw(*tortoisePtr) << "T" << setw(*harePtr - *tortoisePtr) << "H" << endl;
 }
