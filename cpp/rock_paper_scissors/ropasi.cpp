/********************************************
 * Rock Paper Scissors
 *
 *
 * Author: swolewizard
 ********************************************/
#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		/* Rules
 		 * 
 		 * Rock beats scissor
 		 * Scissor beats paper
 		 * Paper beats rock
 		 */

		cout << "Ready ... rock paper scissor go: " << endl;
		cout << "1: Rock 2: Paper 3: Scissor" << endl;
		int opt;
		cin >> opt;
		
		int machine_opt;
		/* Cheating mechanism */
		switch(opt)
		{
			case 1:
				machine_opt = 2;
				break;
			case 2:
				machine_opt = 3;
				break;
			case 3:
				machine_opt = 1;
				break;
			default:
				cout << "You cannot choose nuclear explosion. Sorry." << endl;
				return 0;
		}

		cout << "Sorry you lost, machine chose ";
		
		if (machine_opt == 1)
			cout << "rock";
		else if (machine_opt == 2)
			cout << "paper";
		else if (machine_opt == 3)
			cout << "scissor";
		
		cout << "." << endl << endl; 
	}


	return 0;
}
