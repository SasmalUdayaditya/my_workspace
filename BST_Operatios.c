/*
Assignment: 05(4th sem)
program name: BST operations
date: 04.05.2020
*/

#include<stdio.h>
#include<stdlib.h>

// node sturcture defination for BST, the node structe have 3 part, one integer part and two pointer part
typedef struct node
{
  int DATA;          // DATA holds integer value
  struct node * RCP; // RCP points to another node in Right side of it
  struct node * LCP; // RCP points to another node in Left side of it
}Node; 

// node sturcture defination for stack, the node structe have 3 part, one integer part and two pointer part
typedef struct node1
{
  int St;    // St holds the status, if we push root then status holds 0 and if we push right side child then St holds 1
    
  Node * data;  // data holds the address of roots 
  struct node1 * Next; // points to the next node of the stack
}Node1;

int main(void)
{
  void BST_insert(Node ** , int );
  void BST_search(Node ** , int , Node ** , Node ** );
  void BST_delete(Node ** , int , Node ** , Node ** );
  void Inorder_Traversal(Node ** );
  void Preorder_Traversal(Node ** );
  void Postorder_Traversal(Node ** );
  void menu(int *);
  void Display(Node * );
    
  int x, ch, f, chT, i, temp;
  Node * Root, *pp, *p;
  char c[32], C;
    
  Root = NULL; // intialize the root of the tree with null. initially no child 
    
  f = 0;    
  while(f == 0)
  {
    // menu() function calling
    menu(&ch);
    
    // switch the choice, 'ch'
    switch(ch)
    {
      case 1:
            printf("\nEnter a Value to Insert in BST, Enter 'n/N' to exit.\n");
      
            while(1) 
            {
              x = 0;
              C = 'z';
              printf("insert value: ");
              scanf("%s", c);
            
              i = 0;
              while(c[i] != '\0')
              {
                if(c[i] == 'n' || c[i] == 'N')
                {
                  C = 'n';
                  break;
                }
                else
                {
                  c[i] -= 48;
                }
                i += 1;
              }
              temp = i;
              i = 0;
              while(i < temp)
              {
                x = (x * 10) + c[i];
                i += 1;
              }
              if(C == 'n')
              {
                break;
              }
              else
              {
                
                // BST_insert() function calling
                BST_insert(&Root, x);
              }
            }
            break;
      
      case 2:
            printf("\nEnter a Value to Search in BST: ");
            scanf("%d", &x);
            
            // BST_search() function calling
            BST_search(&Root, x, &pp, &p);
            
            // if the searching value is not present in the BST then p will be NULl
            if(p == NULL)
            {
              printf("\nEntered Value is not Found in the BST.\n");
            }  // end of if(p == NULL)
            
            // if the searching value is found at root then pp is NULL & p will hold the address of Root
            else if(pp == NULL)
            {
              if(p != NULL)
              {
                printf("\nEntered Value is Found at Root in the BST.\n");
              } // if(p != NULL)
            } 
            // in case of pp is not null and p also not null that means the value is found at any position but not in root.
            else
            {
              printf("\nEntered Value is Found  in the BST as ");
              if(p == (pp -> LCP))
              {
                printf("Left Child of %d\n", (pp -> DATA));
              }
              else
              {
                printf("Right child of %d\n", (pp -> DATA));
              } // end of if(p == (pp -> LCP))
            } // end of if(p == NULL)
            
            break;
            
      case 3: 
            printf("\nEnter a Value to Delete from BST: ");
            scanf("%d", &x);
            
            // BST_delete() function calling
            BST_delete(&Root, x, &pp, &p);
           
            // p holds the location of x. if x is not present then p holds null.
            if(p == NULL)
            {
              printf("\nThe Given Value,%d is not Found in the BST to Delete\n", x);
              // if p is null and pp(parent of p) also null that means root is null
            }              
            // if p and pp both are not null then the value is found and delete from the BST
            else
            {
              printf("\nThe Given Value,%d has been Deleted from the BST.\n", x);
              
              printf("\nAfter Deletion of %d, Display the BST using Inorder Traversal.\n", x);
              
              // Display the BST
              printf("\nLeft Side Child || Value || Right Side Child\n");
              printf("- ------------------------------------------\n");
              //inorder traversal using to display the BST
              Inorder_Traversal(&Root);
              
              printf("\n");
            } // end of if(p == NULL)
            
            break;
      
      case 4:             
            printf("\nDisplay the BST by Inorder Traversal\n");
            // Display the BST using inorder traversal
            printf("\nLeft Side Child || Value || Right Side Child\n");
            printf("- ------------------------------------------\n");
            
            //inorder traversal using to display the BST
            Inorder_Traversal(&Root);
            printf("\n");
            
            break;
            
      case 5:
            printf("\n1. Inorder Traversal");
            printf("\n2. Preorder Traversal");
            printf("\n3. Postorder Traversal");
            
            printf("\nEnter a Choice to Traverse the BST: ");
            scanf("%d", &chT);
            
            switch(chT)
            {
              case 1:
                    printf("\nTraverse the Given BST by Inorder Traversal\n");
                    
                    // Traversal the BST by Inorder 
                    printf("\nLeft Side Child || Value || Right Side Child\n");
                    printf("- ------------------------------------------\n");
                    // inorder traversal function calling
                    Inorder_Traversal(&Root);
                    printf("\n");
                    break;
                
              case 2:
                    printf("\nTraverse the Given BST by Preorder Traversal\n");
                    
                    // Traversal the BST by Preorder 
                    printf("\nLeft Side Child || Value || Right Side Child\n");
                    printf("- ------------------------------------------\n");
                    // preorder traversal function calling
                    Preorder_Traversal(&Root);
                    printf("\n");
                    break;
                
              case 3: 
                    printf("\nTraverse the Given BST by Postorder Traversal\n");
                    
                    // Traversal the BST by Postorder 
                    printf("\nLeft Side Child || Value || Right Side Child\n");
                    printf("- ------------------------------------------\n");
                    // post order traversal function calling
                    Postorder_Traversal(&Root);
                    printf("\n");
                    break;
            }  // end of switch(chT) [Switch 2]     
            break;
            
      case 0:
             printf("\nSession Expire\n");
            
             // stoping criteria for while(f == 0). if f != 0 then the loop will terminate.
             f = 1; 
             break;
            
      default :
             printf("\nYou Enter a wrong choice.\n");
             break;
    } // end of switch(ch) [switch 1]
  } // end of while(f == 0)
    
  return 1;
} // end of main function

// menu for the user guide. display the option to do
void menu(int *ch)
{
  printf("|||...Operations on Binary Search Tree...|||\n\n");
    
  printf("\t1. Insert\n");
  printf("\t2. Search\n");
  printf("\t3. Delete\n");
  printf("\t4. Display\n");
  printf("\t5. Traversal\n");
  printf("\t0. EXIT\n");
  
  printf("\n\tEnter Your Choice: ");
  scanf("%d", ch);
  getchar();
  
  return;
} // end of manu

// Display the one node with, i.e node - data, lest child data and right child data
void Display(Node * p)
{
    Node * a ;
    
/* if the node has a left child, then display the value of left child otherwise diplay null */
        
  if((p -> LCP) == NULL)
  {
    printf("           NULL || ");
  }
  else
  {
    a = (p -> LCP);
    printf("%15d || ", (a -> DATA));
  }
    
// display the node-data  
  printf("%5d || ", (p -> DATA));

/* if the node has a right child, then display the value of right child otherwise diplay null */    
    
  if((p -> RCP) == NULL)
  {
    printf("           NULL\n");
  }
  else
  {
    a = (p -> RCP);
    printf("%15d\n", (a -> DATA));
  }
  return;
} // end of display


// inorder traversal function
void Inorder_Traversal(Node ** Root)
{
  void PUSH(Node1 ** , Node * , int );
  void POP(Node1 **, Node **, int * );
    
  Node * p;
  Node1 * top;
  int status;
  
  top = NULL;
  p = NULL;
  status = 0;
    
// PUSH Null at the 1st node
  PUSH(&top, p, status);

  p = (*Root); 
// pushes left most path of the BST in the stack
  while(p != NULL)
  {
    // push function calling to push the current node
    PUSH(&top, p, status);  
              
    // update pointer p to the next left child
    p = (p -> LCP);        
  } // end of while(p != NULL)

// pop the last entered node fron the stack into p
  POP(&top, &p, &status);

// untill a the node traverse [backtracking]   
  while(p != NULL)
  {
      
    Display(p); // process p

    // if node p has a right child goto right child  
    if((p -> RCP) != NULL)
    {
      p = (p -> RCP);
      // pushes left most path of node p 
      while(p != NULL)
      {
        // push function calling
        PUSH(&top, p, status);
        // update p to the next left node
        p = (p -> LCP);
      } // end of while(p != NULL)
    }  // end of if((p -> RCP) != NULL)
    // pop the next node from the stack [backtracking]
    POP(&top, &p, &status);
  } // end of while(p != NULL)
  return;
} // end of inorder traversal function

// preorder traversal function
void Preorder_Traversal(Node ** Root)
{
  void PUSH(Node1 ** , Node * , int );
  void POP(Node1 **, Node **, int * );
    
  Node * p, *temp;
  Node1 * top;
  int status;
  
  top = NULL;
  p = NULL;
  status = 0;
    
// PUSH Null at the 1st node
  PUSH(&top, p, status);

  p = (*Root); 
    
// until all the node traverse, while all the node traverse then p will be NULL
    
  while(p != NULL)
  {
    Display(p); // process the current node
    
    // if the node has a right child push the right child into stack    
    if((p -> RCP) != NULL)
    {
      temp = (p -> RCP); // temp holds the right child address
            
      // push right child into stack
      PUSH(&top, temp, status);
    } // end of if((p -> RCP) != NULL)
    
    /* if node, p has the left child the update p to the left child either pop another node fron stack*/
        
    if((p -> LCP) != NULL)
    {
      p = (p -> LCP); // update p to the left child
    }
    else
    {
      // pip anothe node 
      POP(&top, &p, &status);
    } // end of if((p -> LCP) != NULL)
  } // end of while(p != NULL)
  return;
} // end of preorder treversal function

// postorder traversal function
void Postorder_Traversal(Node ** Root)
{
  void PUSH(Node1 ** , Node * , int );
  void POP(Node1 ** , Node ** , int * );
    
  Node * p, *temp;
  Node1 * top;
  int status;
  
  top = NULL;
  p = NULL;
  status = 0;
    
// PUSH Null at the 1st node
  PUSH(&top, p, status);
  
  p = (*Root);
// pushes the left most path with right child of the node
  while(p != NULL)
  {
    status = 0;
    PUSH(&top, p, status); // push the node as a root with status 0
    
    // if right child exist push right child with status 1
    if((p -> RCP) != NULL)
    {
      status = 1; // make the status 1, to indicate that the node is push as right child
      temp = p -> RCP;
      // push the right child
      PUSH(&top, temp, status); 
    } // end of if((p -> RCP) != NULL)
        
    p = (p -> LCP); // update p to the next left child
  }

// pop a node from the stack [backtracking]    
  POP(&top, &p, &status);

// while all the not trversed. when all node has been travesed then p will NULL
  while(p != NULL)
  {
    if(status == 1) // if p was push as righ child if block execute
    {
      // push the left most path of p with right child
      while(p != NULL)
      {
        status = 0;
                
        // push the node as root, status : 0
        PUSH(&top, p, status);
        
        // if p has right child push right child, status : 1
        if((p -> RCP) != NULL)
        {
          status = 1;
          temp = p -> RCP;
          // push right child, status : 1          
          PUSH(&top, temp, status);
                    
        } // end of if((p -> RCP) != NULL)              
        p = (p -> LCP); // update p to the left child
      } // end of while(p != NULL)
    } //end of if(status == 1)
    else
    {
      // display the value of root
      Display(p);
    } // end of if(status == 1)
    // pop another node from stack into p
    POP(&top, &p, &status);
  } // end of while(p != NULL)
  return;
} // end of postorder traversal

// push function 
void PUSH(Node1 ** top, Node * p, int status)
{
  Node1 * NN; // NN : New Node
  
  // allocate memory for new node 
  NN = (Node1 *) malloc(sizeof(Node1));
  
  // if allocation fails, then return.
  if(NN == NULL)
  {
    printf("\nERROR!! FAILD TO ALLOCATE NEW NODE FOR PUSH OPERATION\n");
    return;
  }
    
  (NN -> data) = p; // initialize the address of p in data part of new node
  (NN -> St) = status; // initialze ststus in St part of new node
  (NN -> Next) = (*top); // New node next will point to the top at intially top is null
  
  (*top) = NN; // update top, now top points to new node
  return;
} // end of push

// pop function
void POP(Node1 **top, Node **p, int * status)
{
  // if there was no node to pop, the return
  if((*top) == NULL)
  {
    return;
  } // end of if((*top) == NULL)
    
  (*p) = ((*top) -> data); // p holds the top dats
  (*status) = ((*top) -> St); // status holds tje Top St
  (*top) = ((*top) -> Next); // delete node from the stack, 
    
   return;
} // end of pop

// BST insert function
void BST_insert(Node ** Root, int x)
{
  Node * NN, *pp, *p;

// NN holds the address of new node
  NN = (Node *) malloc(sizeof(Node));
    
// if malloc fails to allocate memory for new node if block execute either else block execute
  if(NN == NULL)
  {
    printf("ERROR!! FAILD TO ALLOCATE NEW NODE\n");
    return;
  } // end of if(NN == NULL)
    
  // intializin the inserted value, x in data part, and NULL in the pointer part of the new node
  else
  {        
    (NN -> DATA) = x;
    (NN -> RCP) = NULL;
    (NN -> LCP) = NULL;
  }
  
  pp = NULL;
  p = *Root;  

  // if root is null then the inserted value will insert in the root 
  if (p == NULL)
  {
    p = NN;
    (*Root) = p;
       
    return;
  }
  // else the node will insert in the last location w.r.t its value
  else
  {
    // until p goes to NULL
    while(p != NULL)
    {
      // update parent of p, pp 
      pp = p;
      
      // if x <= pp then traverse at left side of pp else right side of pp untill p goes to null
      if(x <= (pp -> DATA))
      {
        p = (p -> LCP);
      }
      else
      {
        p = (p -> RCP);
      } // end of if(x <= (pp -> DATA))
    } // end of while(p != NULL)
  } // end of if (p == NULL)

//after p goes to null if x <= pp then insert the node at left side child of pp else right side child of pp
  if(x <= (pp -> DATA))
  {
    (pp -> LCP) = NN;
  }
  else
  {
    (pp -> RCP) = NN;
  } // end of if(x <= (pp -> DATA))
  return;
} // end of BST insert function

// BST delete function
void BST_delete(Node ** Root, int x, Node ** pp, Node ** p)
{
  Node * PSuc, *Suc;
    
  void BST_search(Node ** , int , Node ** , Node ** );
  void Delete_BST_Node(Node ** , Node * , Node *);
  void Find_Successor(Node ** , Node ** , Node ** );
  
  // BST_Serach() function calling to find out the location where to perform delete operation
  BST_search(Root, x, pp, p);
    
// if p is null means x is not found  
  if((*p) == NULL)
  {
    return;
  } // end of if((*p) == NULL)

// if p is not null and Right child and left child is present then have to search a succesor who will be the right value for the position
  if(((*p) -> LCP) != NULL)
  {
    if(((*p) -> RCP) != NULL)
    {
     
      // Find_Successor() is calling to find the sucessor
      Find_Successor(p, &PSuc, &Suc);
      // after find the succeor delete the node and replace the value of p with the value of successor
            
      Delete_BST_Node( Root, PSuc, Suc);
      ((*p) -> DATA) = (Suc -> DATA);
      return;
    } // end of if(((*p) -> RCP) != NULL)
  } // end of if(((*p) -> LCP) != NULL)
  
  // Delete_BST_Node() function calling to delete the node p
  Delete_BST_Node(Root, *pp, *p);
    
  return;
} // end of BST delete

// Delete_BST_Node() function
void Delete_BST_Node(Node ** Root, Node * pp, Node *p)
{
  // pp == NULL mean p is root
  if(pp == NULL)
  {
    // if the left side child is not present then right side child will be the root else left side child will be root
    if((p -> LCP) == NULL)
    {
      (*Root) = (p -> RCP);
    }
    else
    {
      (*Root) = (p -> LCP);
    } // end of if((p -> LCP) == NULL)
  } // end of if(pp == NULL)
  
// if p is left side child of parent of p then if left side child of p is null then right side child of p will goes to left side child of pp else left side child of p will goest to left side child of pp
  if(p == (pp -> LCP))
  {
    if((p -> LCP) == NULL)
    {
      (pp -> LCP) = (p -> RCP);
    }
    else
    {
      (pp -> LCP) = (p -> LCP);
    } // end of if((p -> LCP) == NULL)
  }
  
  /* if p is right side child of parent of p then if right side child of p is null then left side child of p will goes to right side child of pp else left side child of p will goes to right side child of pp*/
  else
  {
    if((p -> LCP) == NULL)
    {
      (pp -> RCP) = (p -> RCP);
    }
    else
    {
      (pp -> RCP) = (p -> LCP);
    } // end of if((p -> LCP) == NULL)
  } // end of if(p == (pp -> LCP))
    
  return;
} // end of BST Node Delete function

// Find_Successor() function
void Find_Successor(Node ** p, Node ** PSuc, Node ** Suc)
{
  // PSuc holds the location of the succespr
  // Suc holds the location of the parent of successor
  (*PSuc) = (*p);
  (*Suc) = ((*p) -> RCP);

  while(((*Suc) -> LCP) != NULL)
  {
    (*PSuc) = (*Suc);
    (*Suc) = ((*Suc)->LCP);
  } // end of while(((*Suc) -> LCP) != NULL)
    
  return;
} // end of find successor function

// BST_search() function
void BST_search(Node ** Root, int x, Node ** pp, Node ** p)
{
  // p holds the location of the serching value,x
  // pp holds the parent node of p
    
  (*pp) = NULL;
  (*p) = (*Root);

// if root is null, no need to search    
  if((*p) == NULL)
  {
    return;
  } // end of if((*p) == NULL)
    
// until p becones null search BST as per the algorithm
  while((*p) != NULL)
  {
    // if x is found, then return
    if(((*p) -> DATA) == x)
    {
      return;
    } // end of if(((*p) -> DATA) == x)
    
    // pp will comes to p
    (*pp) = (*p);
        
    // if x is less then of p->DATA, then go to the lest side else go to the right side
    if(x < ((*p) -> DATA))
    {
      (*p) = ((*p) -> LCP);
    }
    else
    {
      (*p) = ((*p) -> RCP);
    } // end of if(x < ((*p) -> DATA))
  } // end of while((*p) != NULL)
  return;
} // end of BST search function
