# Library_Mangment_System
library system in C

find no of books in each shelves after sorting and update the number of books in shelves.
1 X K = update the number of books in Xth shelf to K (1 means update)
0 X Y K = find the number of books on the shelves X and Y (0 means find)
**1st test case**
2	->        test case
2->         number of shelves
4 3	->      number of books in each shelves
2	->        number of Queries
0 1 2 1	->  we have to find number of books in shelf 1 after sorting books between 
            shelves 1 and 2. If we sort number of books it will give 3 4. Then find the 	
            number of books in shelf 1.so Output must be 3.
            0 1 2 2	-> we have to find number of books in shelf 2 after sorting books between 
            shelves 1 and 2. If we sort number of books it will give 3 4. Then find the 
            number of books in shelf 2.so Output must be 4.
**2nd test case**            
4	->        number of shelves
5 2 3 1	->  number of books in each shelves
0 1 1 1	->  we have to find number of books in shelf 1 after sorting books between
            shelves 1 and 1. If we sort number of books it will give 5. Then find the 
            number of books in shelf 1.so Output must be 5.
1 1 1	->    we have to update number of books in shelf 1 as 1. So 5 will update as 1.	
0 1 1 1	->  we have to find number of books in shelf 1 after sorting books between
            shelves 1 and 1. If we sort number of books it will give 1. because we 
            update the number of books in shelf 1. so Output must be 1.
0 1 4 3	->  we have to find number of books in shelf 3 after sorting books between
             shelves 1 and 4. If we sort number of books it will give 1 1 2 3. Then find
             the number of books in shelf 3.so Output must be 2.
             
 Output
3
4
5
1
2




