## CIS 165 - Lab 10: Lottery Program
# Course Section: CIS-165-W099


# Initial Plan
The program will generate five random winning digits between 0 and 9 and ask the player to enter five digits. I will use two integer arrays named winningDigits and player, with five elements in each array.
I will use a loop to generate the winning digits and another loop to collect the player's digits. A third loop will compare the digits at the same positions and increase a match counter whenever the digits are equal.
At the end, the program will display the winning digits, the player's digits, and the total number of matching positions.

# How to Compile and Run
The program uses C++17.
To compile using g++, enter:
bash
g++ -std=c++17 -Wall -Wextra lottery.cpp -o lottery

To run the program:
bash
./lottery

# Required Test Cases
## Test Results

| Test | Winning Digits | Player Digits | Expected Matches | Actual Matches | Result |
|------|----------------|--------------|-----------------|---------------|--------|
| 1 | [7, 4, 9, 1, 3] | [4, 2, 9, 7, 3] | 2 | 2 | Pass |
| 2 | [7, 4, 9, 1, 3] | [7, 4, 9, 1, 3] | 5 | 5 | Pass |
| 3 | [7, 4, 9, 1, 3] | [0, 0, 0, 0, 0] | 0 | 0 | Pass |
| 4 | [1, 1, 2, 2, 3] | [1, 2, 2, 3, 3] | 3 | 3 | Pass |
| 5 | [2, 8, 5, 6, 9] | [2, 3, 4, 7, 9] | 2 | 2 | Pass |

Test 5 checks whether the program correctly counts matches at the first and last positions, with an expected result of 2 matches.

## Final Random Generation Test
After completing the fixed-array tests, I restored the random number generation using `rand() % 10`.

| Test Information | Result |
|------------------|--------|
| Winning Digits | [9, 5, 7, 4, 5] |
| Player Digits | [9, 2, 5, 2, 1] |
| Expected Matches | 1 |
| Actual Matches | 1 |
| All Winning Digits Between 0 and 9 | Yes |
| Expected and Actual Results Match | Yes |
| Final Test Result | Pass |
I ran the program with random winning digits and entered five player digits. I checked each position in both arrays to calculate the expected number of matches. I then compared my calculated count with the program's output. All winning digits should be between 0 and 9.

## Explanation Questions

# How does the random expression keep every digit between 0 and 9?
The expression rand() % 10 uses the modulus operator to get a remainder between 0 and 9. This keeps every generated winning digit within the required range.

# Why does a matching digit in another position not count?
The program compares the digits using the same array index. It only counts a match when the winning digit and player digit are equal at the same position. A digit in a different position does not count.

# Trace the count through the example arrays.
Winning digits: [7, 4, 9, 1, 3]
Player digits: [4, 2, 9, 7, 3]

Index 0: 7 and 4 do not match. Count = 0.
Index 1: 4 and 2 do not match. Count = 0.
Index 2: 9 and 9 match. Count = 1.
Index 3: 1 and 7 do not match. Count = 1.
Index 4: 3 and 3 match. Count = 2.

The final result is 2 matching positions.

# Why do array loops stop before SIZE, and what did your fixed tests establish?
Array indexes start at zero, so an array with five elements has indexes 0 through 4. The loop condition i < SIZE prevents the program from accessing an index outside the array.
The fixed tests establish that the program correctly counts matching positions, including when all digits match, no digits match, or repeated digits appear.

# Final Compilation and Submission
The program was successfully compiled using g++ with C++17, ran correctly, and all temporary fixed-array test values were restored to random number generation before the final submission.
