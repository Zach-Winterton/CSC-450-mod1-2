//============================================================================
// Name        : CSC 450 mod1-2 corrections.cpp
// Author      : Zach Winterton
// Date        : 12/15/2023
// Description : Program given with syntax errors.
// My task was to correct all given syntax errors so that program compiles correctly.
//============================================================================

/*-------------ORIGINAL PROGRAM NO CORRECTIONS MADE-------------

#include<iostream>
#include<conio.h>

Standard namespace declaration
using namespace std;

Main Function
int main()
{

     double myMoney = 1000.50;  //this should be printed out


     Standard Ouput Statement
     cout"Please be sure to correct all syntax errors in this program"<<endl;

     cout<<"I have corrected all errors for this program. <<endl;

     cout<<" The total amount of money available is = "<<   <<endl;

     // Wait For Output Screen

     Main Function return Statement
     return 0;
}

*/

//-------------PROGRAM WITH SYNTAX CORRECTIONS MADE-------------

// Include necessary header files <--- Added this comment in for proper documentation.
#include<iostream>
/* Though not necessarily considered a syntax error, I removed <conio.h> since it is not a standard header in C++ and its usage is discouraged in modern C++ programming.
 * <conio.h> is also not portable and may lead to compatibility issues on different systems or with different compilers. I also find it not necessary for this program.
 */

// Standard namespace declaration <--- This line needed commented out.
using namespace std;

// Main Function <--- This line needed commented out.
int main()
{

     double myMoney = 1000.50;  // This should be printed out


     // Standard Ouput Statement <--- This line needed commented out.
     cout << "Please be sure to correct all syntax errors in this program." << endl; // Needed the << operator after cout and before the string in order to function properly. I also added a period at the end.

     cout << "I have corrected all errors for this program." << endl; // The message/string needed a closing quotation mark " in order to function properly.

     cout << "The total amount of money available is = $"<< myMoney << endl; // The space between the beginning quotation mark and the word "The" was unnecessary and I added a $ symbol. Also the variable myMoney was missing.
     // Without it, the compiler cannot properly display the value of the variable. So I added it at the end between the two << << operators

 	/* I Removed "Wait For Output Screen" comment as I believe it not to be necessary.
 	 * If running in a specific IDE that closes the console window immediately, I would then want to add cin.get() or cin.ignore() to achieve the desired functionality for waiting for a user's input.
 	 * This would help the program not terminate right after displaying the results, leaving the user unable to view the data.
 	 */

     // Main Function return Statement <--- This line needed commented out.
     return 0;
}
