#include <iostream>

void print_board(char board[]){
    for(int i = 7; i >= 0; i--){
        for(int j = 0; j < 8; j++){
            std::cout << board[i*8 + j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char** argv){
    char board[64] = {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', 
                    'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
                    '.', '.', '.', '.', '.', '.', '.', '.',
                    '.', '.', '.', '.', '.', '.', '.', '.',
                    '.', '.', '.', '.', '.', '.', '.', '.',
                    '.', '.', '.', '.', '.', '.', '.', '.',
                    'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 
                    'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' 
                    };
    print_board(board);
    return 0;
}