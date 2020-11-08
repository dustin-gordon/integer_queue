/* 
 * Dustin Gordon
 */

#include <iostream>
#include "myQueue.h"
using namespace std;

int main()
{
    char choice;

    cout << "*****************************************************************" << endl;
    cout << "**        Testing the Implemented Queue Data Structure.        **" << endl;
    cout << "*****************************************************************" << endl;

    //Initialize the queue:
    myQueue queue;

    do
    {
        cout << endl;
        cout << "Choose your task from the following options: "<< endl;
        cout << "1: Push items"  << endl;
        cout << "2: Pop items"   << endl;
        cout << "3: Print items" << endl;
        cout << "4: Exit"        << endl << endl;
        cout << ">> ";
        cin >> choice;

        //Validate user input:
        if(choice == '1')
        {
            char toCheck;
            bool flag = true;
            int inputItem;
            cout << endl << "Enter items to push to stack; Type 'c' to cancel." << endl;
            cout << ">> ";

            while(flag)
            {
                cin >> toCheck;
                if(toCheck == 'c') {
                    cout << "Finished." << endl;
                    flag = false;
                }

                if(flag)
                {
                    inputItem = toCheck - '0';

                    if(queue.isFull())
                    {
                        cout << endl << "ERROR! The queue is full." << endl;
                        flag = false;
                    }
                    if(queue.push(inputItem))
                    {
                        cout << "Added '" << inputItem << "' to the queue!" << endl;
                        cout << ">> ";
                    }
                }
            }
            cout << endl << "Back to the main menu!" << endl;
        }

        else if(choice == '2')
        {
            char toCheck;
            bool flag = true;
            int count;

            cout << endl << "Enter the number of items to pop-out; Type 'c' to cancel." << endl;
            cout << ">> ";
            cin >> toCheck;

            if(toCheck == 'c')
            {
                flag = false;
                cout << "Finished." << endl;
            }

            while(flag)
            {
                count = toCheck -'0';

                if(queue.isEmpty())
                {
                    cout << endl << "ERROR! The queue is empty." << endl;
                    flag = false;
                }
                for (int i = 0; i < count; i++) {
                    int popped = queue.pop();
                    if(popped == -1)
                    {
                        break;
                    }
                    cout << "Popped element: '" << popped << "'." << endl;
                }
                flag = false;
            }
            cout << "Back to the main menu!" << endl;
        }

        else if(choice == '3')
        {
            queue.print();
        }

        else if(choice == '4')
        {
            cout << "***************************************************************** " << endl;
            cout << "**                     Program Terminated.                     ** " << endl;
            cout << "***************************************************************** " << endl;
            return 0;
        }
        else
        {
            cout << endl << "ERROR! Invalid menu choice." << endl << endl;
        }
    }while(true);
}
