class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // Initialize the first array's first and last element as minVal and maxVal
        int minVal = arrays[0][0];
        int maxVal = arrays[0].back();
        int maxDistance = 0;

        // Iterate through the arrays starting from the second one
        for (int i = 1; i < arrays.size(); ++i) {
            int currentMin = arrays[i][0];
            int currentMax = arrays[i].back();

            // Calculate the potential maximum distance with the current array
            int distance1 = abs(currentMax - minVal);
            int distance2 = abs(maxVal - currentMin);

            // Update the maximum distance found
            maxDistance = max(maxDistance, max(distance1, distance2));

            // Update global minVal and maxVal
            minVal = min(minVal, currentMin);
            maxVal = max(maxVal, currentMax);
        }

        return maxDistance;
    }
};
