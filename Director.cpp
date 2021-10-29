# include <iostream>
# include <String>
# include "board.cpp"
# include "bot.cpp"
# include <array>
# include <cstdlib>

using namespace std;


int main() {
	Board board;
	//Bot bot(1);
	bool continue_playing = true;
	cout << "Welcome to Tic Tac Toe, you are X's and the computer is the O's.\n\nGoodluck!";
	while (continue_playing == true) {
		int move = 1;
		if (board.turn == 'x') {
			board.print_board();
			cout << "it is your turn. Enter a spot you want to place (1-9). Enter 0 to quit\n> ";
			cin >> move;
			if (move == 0) {
				continue_playing = false;
			}
			else {
				board.change_board(move);
				continue_playing = !(board.check_if_winner());
				if (continue_playing == false) {
					cout << board.turn << "'s win!! thanks for playing\n";
					board.print_board();

				}
				board.change_turn();
			}

		}
		else if (board.turn == 'o') {
			//cout << "it's the computers turn now";
			//move = bot.execute_best_stradegy(board.tiles);
			move = ((rand() % 8) + 1);
			board.change_board(move);
			continue_playing = !(board.check_if_winner());
			if (continue_playing == false) {
				cout << board.turn << "'s win!! thanks for playing\n";
				board.print_board();
			}
			board.change_turn();

		}
		else {
			cout << "wrong turn";
		}
		
	}
	
} 