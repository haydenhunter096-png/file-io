# file-io
Algorith: Read CSV file and repeat words
1. Start program
2. Create the file for an input stream
3. Open the file "data.csv"
4. In case the file does not open, a print error message along with the program stopping
5. Create a string variable for holding each line
6. With there being lines left in the file

    -a. Read a full line from the file
    -b. Create a stringstream using the same line
    -c. Then create a three string variable
        ` first number (as string)
        ` second number (as string)
        ` word
    -d. Using getline() with a ',' for extracting the first number
    -e. Using getline() with a ',' for extracting the second number
    -f. Using getline() for extracting word
    -g. Create a stringstream for converting first number into a int
    -h. Create a stringstream for converting the second number into a int
    -i. Add two int together
    -j. Use a loop for printing the word the required of times


8. Close the file
9. Ending the program
