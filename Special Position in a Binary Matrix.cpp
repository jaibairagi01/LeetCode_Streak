class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        // Get the number of rows(n) and columns(m) in the matrix
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        
        // Vector to store the sum of each row( SIZE OF VECTOR IS n AND ALL ELEMNTS ARE SET 0)
        vector<int>rowsum(n,0);
         // Vector to store the sum of each column of size m and all elements are initially 0
        vector<int>colsum(m,0);
        
        // Calculate the sum of each row and column
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                rowsum[i]+=mat[i][j];
                colsum[j]+=mat[i][j];
            }
        }
        
         // Check for special positions
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // Check if the current position is 1 and the sum of its row and column is 1
               if(mat[i][j]==1 && rowsum[i]==1 && colsum[j]==1)
               {
                   // Increment the ans for special positions
                   ans++;
               }
            }
        }
        // Return the total count of special positions
        return ans;
        
    }
};
