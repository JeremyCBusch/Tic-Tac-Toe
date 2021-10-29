# include <iostream>
# include <String>
# include <string>
# include <array>

using namespace std;
using namespace std;

class Board {
public:
	char tiles[9] = { '1', '2',  '3',  '4',  '5',  '6',  '7',  '8',  '9'};
	char turn = 'x';
	Board() {
	}


	char* get_tiles() {
		return tiles;
	}

	void change_board(int space_to_change) {
		//changes the board based on the parameter and changes the turn
		if (tiles[space_to_change - 1] != 'x' && tiles[space_to_change - 1] != 'o') {
			tiles[space_to_change - 1] = turn;
		}
		else {
			cout << "Someone already placed a tile there";
		}
	}

	void change_turn() {
		/*cout << "changing turn";*/
		if (turn == 'x') {
			turn = 'o';
		}
		else if (turn == 'o') {
			turn = 'x';
		}
	}

	bool check_if_winner() {
		// this will take the board and the turn and determine if the current turn won
		if(tiles[0] == turn && tiles[1] == turn && tiles[2] == turn){
			return true;
		}
		else if(tiles[3] == turn and tiles[4] == turn and tiles[5] == turn){
			return true;
		}
		else if(tiles[6] == turn and tiles[7] == turn and tiles[8] == turn){
			return true;
		}
		else if(tiles[0] == turn and tiles[3] == turn and tiles[6] == turn){
			return true;
		}
		else if(tiles[1] == turn and tiles[4] == turn and tiles[7] == turn){
			return true;
		}
		else if(tiles[2] == turn and tiles[5] == turn and tiles[8] == turn){
			return true;
		}
		else if(tiles[0] == turn and tiles[4] == turn and tiles[8] == turn){
			return true;
		}
		else if(tiles[2] == turn and tiles[4] == turn and tiles[6] == turn){
			return true;
		}
		else{
			return false;
		}
	}

	void print_board() {
		cout << "\n\n";
		cout << tiles[0];
		cout << "|";
		cout << tiles[1];
		cout << "|";
		cout << tiles[2];
		cout << "\n-+-+-\n";
		cout << tiles[3];
		cout << "|";
		cout << tiles[4];
		cout << "|";
		cout << tiles[5];
		cout << "\n-+-+-\n";
		cout << tiles[6];
		cout << "|";
		cout << tiles[7];
		cout << "|";
		cout << tiles[8];
		cout << "\n\n";
	}

};
	
