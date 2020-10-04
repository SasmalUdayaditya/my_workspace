'''specifications
  
  Array Operations
 	1. Numeric Array
 	2. Character Array
 
  Assign Date : 04.06.2020
  Complete By : 10.06. 2020
  Status : uncomplete
'''

'''VARIABLE NAMES WITH THEIR MEANINGS
  
  CA : Choose type of array
  NA : Choose type of numeric array
  ch : Choose operation
  so : Select opearation
'''
from os import system, name

print("OS name : ", name)

#menu function
def menu() :
  """\tSelect type of Operation
  \t 1. Search Operation
  \t 2. Insert Operation✓
  \t 3. Delete Operation
  \t 4. Sorting Operation
  \t 5. Others
  \t10. Display✓
  \t 0. Exit✓
  """
  global ch
  ch = int(input("Choose Mode of Operation : "))
  
# Searching Menu of Numeric Array
def MENU_Numeric_SO() :
  """\tSearching Operation on A Numeric Array
  \t1. Search A Value✓
  \t2. Search Maximum Value✓
  \t3. Search Minimum Value✓
  \t4. Search Second Maximum
  \t5. Search Second Minimum
  \t6. Search Frequency of a Value✓
  \t7. Search Frequency All
  \t8. Search Primes✓
  \t0. Exit✓
  """
  global so
  so = int(input("Select Operation from above : "))
  
#Insert Menu of Numeric Array
def MENU_Numeric_IO() :
  """\tInsert Operation on A Numeric Array
  \t1. Insert a Value✓
  \t2. Insert at First✓
  \t3. Insert After Maximum Value✓
  \t4. Insert Before Maximum Value✓
  \t5. Insert After Minimum Value✓
  \t6. Insert Before Minimum Value✓
  \t0. Exit✓
  """
  global so
  so = int(input("Select Operation fron above : "))
  
#Delete Menu of Numeric Array
def MENU_Numeric_DO() :
  """\tDelete Operation on A Numeric Array
  \t1. Delete a Value✓
  \t2. Delete the First Value✓
  \t3. Delete the Last Value✓
  \t4. Delete Maximum Value✓
  \t5. Delete MInimum Value✓
  \t6. Delete Odd Values✓
  \t7. Delete Repeated Values
  \t8. Delete all Repeated Values
  \t0. Exit
  """
  global so
  so = int(input("Select Operation fron above : "))
  
#Others Menu of Numeric Array
def MENU_Numeric_OO() :
  """\tSome Intersting Operation on A Numeric Array
  \t1. Replace a value(y) by onether value(x)✓
  \t2. Reverse the Array✓
  \t3. Average of All the Values✓
  \t4. Count Even & Odd Values✓
  \t5. Separate Even & Odd Values✓
  \t6. Separate Prime & Non-prime Values
  \t7. Shuffle
  \t0. Exit
  """
  global so
  so = int(input("Select Operation fron above : "))
  
#Sorting Menu of Numeric Array
def MENU_Numeric_SoO() :
  """\tSorting Operation on A Numeric Array
  \t1. Order Ascending
  \t2. Order Descending
  \t3. Bubble Sort
  \t4. Modified Bubble Sort
  \t5. Quick Sort
  \t6. Selection Sort
  \t7. Insertion Sort
  \t0. Exit
  """
  global so
  so = int(input("Select Operation fron above : "))
  
#Menu for Character Array
def menu_c() :
  """Some Problems Releated Character Array
   1. String Read
   2. String Trim
   3. String Lower
   4. String Upper
   5. String LTrim
   6. String RTrim
   7. String Display
   8. String Copy
   9. String Length
  10. String Cap Small
  11. String Delete
  12. String Compare
  13. String Reverse
  14. String Insert
  15. String Palindrome
  16. String Abbreviate
  17. String Concat
  18. String Search
  19. String Count Word
  20. String Replace
  21. String Reverse Word
  22. String Count Sentence
  23. String Count Paragraph
  24. String Reverse Sentence
  25. string Sub String 
  26. String Remove Space
  27. String Count Vowel & Consonant
   0. Exit
  """
  global so
  
  so = int(input("Select Operation from above : "))
  
#Display function of Numeric Array
def DISPLAY(A, N) :
  if N == 0 :
    print("The Array is Empty")
  else :
    print(A)
    
#Insert a value in unordered array
def Insert_UoA() :  
  global A; global N
  A[N] = int(input("Enter Value to Insert : "))
  N += 1
  
#Insert at First location
def Insert_1st_UoA() :  
  Insert_UoA()
  temp = A[0]
  A[0] = A[N - 1]
  A[N - 1] = temp
  
#Search a Value
def Search_UoA(A, N, x) :
  global loc
  loc = -1
  i = 0
  while i < N :
    if(A[i] == x) :
      loc = i
      i = N
    i += 1

#Search Maximum & Minimum value
def Search_Max_Min_UoA(A, N) :
  global Max; global Min
  Max = 0
  Min = 0
  i = 1
  while i < N :
    if A[i] > A[Max] :
      Max = i
    elif A[i] < A[Min] :
      Min = i
    i += 1

'''Search 2nd Maximum Value
def Search_2nd_Max()
  global A; global N; global Max; global Max2
  Max = 0
  Max2 = -1
  while i < N :
    if A[i] > Max
'''
#Search Frequency of a given value
def Search_frequency(A, N, x) :
  global R; global oc
  #oc : occurance number
  #R is the result array to hold all the locatiob of occurances
  R = {}
  i = 0; oc = 0
  while i < N :
    if A[i] == x :
      R[oc] = i
      oc += 1
    i += 1
'''
#Search Frequency All
def Search_frequency_Alll(A,N) :
  global R; global Elem; global oc
  R = {}
  Elem = {}
  oc = 0
  i = 0
  while i < N :
    j = 0
    while j < N :
      ifA[i]
'''      
#Search All Prime
def Search_Prime_All(A, N) :
  global R; global oc
  R = {}
  oc = 0
  i = 0
  while i < N :
    loc = Prime(A[i])
    if loc == 1 :
      R[oc] = A[i]
      oc += 1
    i += 1    

#Check prime 
def Prime(x) :
  if x == 1 or x == 0 :
    loc = -1
    return loc
  i = 1
  sqrt = 1
  while i <= x :
    sqrt += 1
    i = sqrt * sqrt
  sqrt = sqrt - 1
  
  loc = 1  
  i = 2
  while i <= sqrt :
    if x % i == 0 :
      loc = -1
    i += 1
  return loc
    
#Insert a value before maximum value
def Insert_Before_Max() :
  Insert_UoA()  
  Search_Max_Min_UoA(A, N-2)
  if Max == 0 :
    print("Maximum value found at 0th index, Can't perform the operation rather insert the value at last index")
  else :
    temp = A[Max - 1]
    A[Max - 1] = A[N-1]
    A[N-1] = temp

#Insert a value after maximum value
def Insert_After_Max() :
  Insert_UoA()  
  Search_Max_Min_UoA(A, N-2)
  temp = A[Max + 1]
  A[Max + 1] = A[N -1]
  A[N-1] = temp
  
#Insert a value before minimum value
def Insert_Before_Min() :
  Insert_UoA()  
  Search_Max_Min_UoA(A, N-2)
  if Min == 0 :
    print("Min value found at 0th index, can't perform the operation rather insert the value at last index")
  else :
    temp = A[Min - 1]
    A[Min - 1] = A[N-1]
    A[N-1] = temp
  
#Insert a value after minimum value
def Insert_After_Min() :
  Insert_UoA()  
  Search_Max_Min_UoA(A, N-2)
  temp = A[Min + 1]
  A[Min + 1] = A[N-1]
  A[N-1] = temp

#Delete a value from the given array
def Delete_UoA(x) :
  global A; global N; global loc
  Search_UoA(A, N, x)  
  if loc != -1 :
    A[loc] = A[N-1]
    N = N - 1
    
#Delete the first value
def Delete_1st_Value() :
  global A; global N
  if N == 0 :
    return 
  else :
    A[1] = A[N-1]
    N -= 1
    
#Delete the last value
def Delete_last_value() :
  global A; global N
  if N == 0 :
    return
  else :
    N -= 1
    
#Delete maximum value
def Delete_Max() :
  global A; global N
  Search_Max_Min_UoA(A, N)
  A[Max] = A[N-1]
  N -= 1
  
#Delete minimum value
def Delete_Min() :
  global A; global N
  Search_Max_Min(A, N)
  A[Min] = A[N-1]
  N -= 1
  
#Delete odd values
def Delete_Odd() :
  global A; global N; temp = 0
  i = 0
  while i < N :
    if A[i] % 2 == 0 :
      A[temp] = A[i]
      temp += 1
    i += 1    
  N = temp
  
'''#Delete repeated values
def Delete_Repeated_Values(x) :
'''
  
#Replace a value(Y) by another value(x)
def Replace(y, x) :
  global A; global N
  Search_UoA(A, N, y)
  if loc != -1 :
    A[loc] = x
    
#Reverse the Array
def Reverse() :
  global A; global N
  lb = 0
  ub = N
  while lb < ub :
    temp = A[ub]
    A[ub] = A[lb]
    A[lb] = temp
    lb += 1
    ub -= 1
    
#Average of all values
def Average(A, N) :
  global avg
  avg = 0
  sum = A[0]
  i = 1
  while i < N :
    sum += A[i]
    i += 1
  avg = sum/N
  
#Count number of Even and odd values
def Count_even_odd(A, N) :
  global even; global odd
  even = 0
  odd = 0
  i = 0
  while i < N :
    if A[i] % 2 == 0 :
      even += 1
    else :
      odd += 1
    i += 1
    
#Separate even and odd values
def Separate_Even_Odd(A, N) :
  global Even; global Odd; global NE; global NO
  Even = {}
  Odd = {}
  NE = 0
  NO = 0
  i = 0
  while i < N :
    if A[i] % 2 == 0 :
      Even[NE] = A[i]
      NE += 1
    else :
    	Odd[NO] = A[i]
    	NO += 1
    i += 1
     
#driver Function
print("\t~~~Operations on Array~~~")
print("------------------------------------------")
print("1. Numeric Array \n2. Character Array \n0. Exit")
CA = int(input("\tPlease Enter the type of Array : " ))

while CA != 0 :
  #Block of Numeric array
  if CA == 1 :
    print("\tYou Choose Numeric Array")
    print("\t\tChoose Type of Numeric Array : \n\t\t1. Ordered Array\n\t\t2. Unordered Array")
    NA = int(input("\t\tPlease Enter type of Numeric Array : "))
    A = {}; N = 0;
    system('clear')
    print(menu.__doc__) 
    menu()  
    while ch != 0 :
      if ch == 1 :
        print(MENU_Numeric_SO.__doc__)
        MENU_Numeric_SO()
        while so != 0 :
          if so == 1 :
            x = int(input("Enter a Value to Search : "))
            Search_UoA(A, N, x)
            if loc != -1 :
              print("The Value", x ,"is found at ", loc)   
            else :
              print("The Value", x,"is not found")
          elif so == 2 :
            Search_Max_Min_UoA(A, N)
            print("Maximum value found at index",Max,"& the value is ", A[Max])
          elif so == 3 :
            Search_Max_Min_UoA(A, N)
            print("Minimum value found at index",Min,"& the value is ", A[Min])
          elif so == 4 :
            print("Operation : ", so)
          elif so == 5 :
            print("Operation : ", so)
          elif so == 6 :
            x = int(input("Enter a value to search Occurances : "))
            Search_frequency(A, N, x)
            if oc != 0 :
              print("Number of Occurances of",x,"is",oc)
              print(R)
            else :
              print("Occurances are notnfound")
          elif so == 7 :
            print("Operation : ", so)
          elif so == 8 :
            Search_Prime_All(A, N)
            print(R)
          else : 
            print("You Entered a Wrong Choice")
          so = int(input("Select Operstion from above : "))
      
      elif ch == 2 :
        print(MENU_Numeric_IO.__doc__)
        MENU_Numeric_IO()
      
        while so != 0 :
          if so == 1 :
            Insert_UoA()
          elif so == 2 :
            Insert_1st_UoA()
          elif so == 3 :
            Insert_After_Max()
          elif so == 4 :
            Insert_Before_Max()
          elif so == 5 :
            Insert_After_Min()
          elif so == 6 :
            Insert_Before_Min()
          else : 
            print("You Entered a Wrong Choice")
          so = int(input("Select Operstion from above : "))
        
      elif ch == 3:
        print(MENU_Numeric_DO.__doc__)
        MENU_Numeric_DO()
        while so != 0 :
          if so == 1 :
            x = int(input("Enter value to delete : "))
            Delete_UoA(x)
          elif so == 2 :
            Delete_1st_Value()
          elif so == 3 :
            Delete_last_Value()
          elif so == 4 :
            Delete_Max()
          elif so == 5 :
            Delete_Min()
          elif so == 6 :
            print("Operation : ", so)
          elif so == 7 :
            print("Operation : ", so)
          elif so == 8 :
            print("Operation : ", so)
          else : 
            print("You Entered a Wrong Choice")
          so = int(input("Select Operstion from above : "))
        
      elif ch == 4 :
        print(MENU_Numeric_SoO.__doc__)
        MENU_Numeric_SoO()
        while so != 0 :
          if so == 1 :
            print("Operation : ", so)
          elif so == 2 :
            print("Operation : ", so)
          elif so == 3 :
            print("Operation : ", so)
          elif so == 4 :
            print("Operation : ", so)
          elif so == 5 :
            print("Operation : ", so)
          elif so == 6 :
            print("Operation : ", so)
          elif so == 7 :
            print("Operation : ", so)
          else : 
            print("You Entered a Wrong Choice")
          so = int(input("Select Operstion from above : "))
      
      elif ch == 5 :
        print(MENU_Numeric_OO.__doc__)
        MENU_Numeric_OO()
        while so != 0 :
          if so == 1 :
            y = int(input("Enter a value that has to be replace : "))
            x = int(input("Enter a value to replace : "))
            Replace(y, x)
          elif so == 2 :
            Reverse()
          elif so == 3 :
            Average(A, N)
            print("Average of all the elements of the given array is", avg)
          elif so == 4 :
            Count_even_odd(A, N)
            print("Number of even values : ", even)
            print("Number of odd values : ",odd)
          elif so == 5 :
            Separate_Even_Odd(A, N)
            print("Even values are listed below : \n", Even)
            print("\nOdd values are listed below : \n",Odd,"\n")
          elif so == 6 :
            print("Operation : ", so)
          elif so == 7 :
            print("Operation : ", so)
          else : 
            print("You Entered a Wrong Choice")
          so = int(input("Select Operstion from above : "))
          
      elif ch == 10 :
        DISPLAY(A, N)
            
      else :
        print("You Entered a Wrong choice")
    
      input("Press Enter To Continue : ")
      system('clear')
      print(menu.__doc__)
      ch = int(input("Choose Mode of Operation : "))

    print("End of Numeric Array")

  #Block of Character Array  
  elif CA == 2 :
    system('clear')
    print(menu_c.__doc__)
    menu_c()
  
    print("End of Character Array")
  
  else :
    print("You Entered a Wrong Choice")
  
  print("\nDo You wants to Explore again : \nPress 'y'/'Y' for yes & 'n'/'N' for No.")
  p = input()
  if p == 'Y' or p == 'y':
    system('clear')
    print("\t~~~Operations on Array~~~")
    print("------------------------------------------")
    print("1. Numeric Array \n2. Character Array \n0. Exit")
    CA = int(input("\tPlease Enter the type of Array : " ))
  else :
    CA = 0
  
print("Seasion Expire")