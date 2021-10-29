# include <iostream>
# include <String>
# include <string>
# include <array>
# include <vector>
# include <cstdlib>

using namespace std;




class Bot {
public:
	//all the possible orientations to win in tic tac toe
	char win_stradegies[8][3] = {
		{'0','1','2'},
		{'3','4','5'},
		{'6','7','8'},
		{'0','3','6'},
		{'1','4','7'},
		{'2','5','8'},
		{'0','4','8'},
		{'2','4','6'},
	};
	int difficulty_level = 1;
	// will need an arraylist for possible win stradegies
	Bot(int difficulty) {
		difficulty_level = difficulty; // expecting a 1-3
	}


	// all of these functions need to call each other to update what options the computer has

	void organize_play_que() {
		// finds if there are any ways to win in one move then 2 and then 3. orders them from easiest to hardest
	}

	int create_necessary_block_move(char* tiles) {
		// make moves based on if the pkayer is about to win to block it
		int block_move = 0;
		int possible_block_move = 0;
		for (int y = 0; y <= 8; y++) {
			int amount_of_xs = 0;
			int amount_of_os = 0;
			for (int x = 0; x <= 3; x++) {
				if (tiles[win_stradegies[y][x]] == 'x') {
					amount_of_xs++;
				}
				else if (tiles[win_stradegies[y][x]] == 'o') {
					amount_of_os++;
				}
				else {
					possible_block_move = x - 1;
				}
				if (amount_of_xs == 2) {
					return possible_block_move;
				}
			}
		}
		return 0;
	}


	int assess_best_possible_way_to_win(char* tiles) {
		//grabs and stores the win stradegies that it can still win with currently in the game


		// this for loop goes through every stradegy and determines which ones can be done with the least amount of moves
		for (int y = 0; y <= 8; y++) {
			int amount_of_xs = 0;
			int amount_of_os = 0;
			char possible_moves[3]{};
			for (int x = 0; x <= 3; x++) {
				if (tiles[win_stradegies[y][x]] == 'x') {
					amount_of_xs++;
				}
				else if (tiles[win_stradegies[y][x]] == 'o') {
					amount_of_os++;
				}
				else {
					possible_moves[x] = win_stradegies[y][x];
				}
			}


			if (amount_of_os > 1 && amount_of_xs == 0) {
				for (int x = 0; x <= 3; x++) {
					if (possible_moves[x] != 'x' && possible_moves[x] != 'o') {
						return (int)possible_moves[x];
					}

				}
			}


			else if (amount_of_os > 0 && amount_of_xs == 0) {
				for (int x = 0; x <= 3; x++) {
					if (possible_moves[x] != 'x' && possible_moves[x] != 'o') {
						return (int)possible_moves[x];
					}

				}
			}


			if (amount_of_os == 0 && amount_of_xs == 0) {
				for (int x = 0; x <= 3; x++) {
					if (possible_moves[x] != 'x' && possible_moves[x] != 'o') {
						return (int)possible_moves[x];
					}

				}
			}



		}
	}


	int execute_best_stradegy(char* tiles) {
		//executes the easiest way to win. returns an int for the tiles number to place its piece.
		//vector<int> items = assess_possible_way_to_win();
		//cout << items;
			
		/*int move = create_necessary_block_move(tiles);
		cout << move;*/
			
			
		/*
		char move = assess_best_possible_way_to_win(tiles);
		move = (int)move;
		*/
		
		
		return ((rand() % 8) + 1);

	}


	
};