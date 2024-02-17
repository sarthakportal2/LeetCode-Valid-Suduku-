class Solution{
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //optimal sol(using bfs_aprroach)
        int row[9][9]={0};int col[9][9]={0};int gridnum[9][9]={0};//initializing row,colmn nd grida
        for(int i=0;i<board.size();i++){//iterating through row and col
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){//checking unique number(num) is present in row or column
                    int num=board[i][j]-'0'; //coverting char to number
                    int k= i/3*3 + j/3; //gridnum's determistic val
                    if(row[i][num-1]++||col[j][num-1]++ ||gridnum[k][num-1]++)//checking if number is present in sub grid or not
                        return false;//printing false non present num
                }
            }
        }
        return true;//printing true to present(num) in grid 
    }
};
