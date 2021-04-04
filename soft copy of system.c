#include <stdio.h> 
#include<stdlib.h>
#define max 1000
int queue[max];
int front =-1, rear =-1;
 
struct node{ 
    int data; 
    struct node *next; 
};     

struct node *head, *tail = NULL; 
  
//add n nodes to the list 
void addNode(int n){
    int i,data;
	for(i=0;i<n;i++){
		//get number of books in each shevles
		scanf("%d",&data); 
    	struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
    	newNode->data = data; 
    	newNode->next = NULL; 
     
     
    	if(i == 0){ 
        	//both head and tail will point to new node 
        	head = newNode; 
        	tail = newNode; 
    	} 
   		else { 
        	//tail's next will point to newNode 
        	tail->next = newNode; 
        	//newNode will become new tail. 
        	tail = newNode; 
    	}
    }
}
  
//sort nodes of the list in ascending order 
void sortList(int x,int y,int k) { 
    //Node current,ptr and qtr will point to head and index will point to NULL
    struct node *current = head, *index = NULL, *qtr = head,*ptr=head; 
    int temp; 
    int i,j,count;
	if(x==y){
        if(x==1&&y==1){
            insert(current->data);
        }
        
		else{
			
        	for(i=1;i<x;i++){
        		current=current->next;			
        	}
        	insert(current->data);	
		}
	} 
    else{
		for(i=1;i<x;i++){
        	current=current->next;
		}
		for(j=0;j<y;j++){
			qtr=qtr->next;
		}
		 
        while(current != qtr) { 
            //Node index will point to node next to current 
            index = current->next; 
                 
            while(index != qtr) { 
                //If current node's data is greater than index's node data, swap the data between them 
                if(current->data > index->data) { 
                    temp = current->data; 
                    current->data = index->data; 
                    index->data = temp; 
                } 
                index = index->next; 
            } 
            current = current->next; 
        }
		for(count=1;count<k;count++){   
        	ptr = ptr->next; 
    	}
    	insert(ptr->data);    
    } 

} 


//insert value to queue
int insert(int n){

	if(rear==max-1){
		printf("overflow");
	}
	else{
		front=0;
		rear++;
		queue[rear]=n;
	}	
}

//give the output
void display(){
	int i;
	if(front==-1|| front >rear){
		printf("Queue is empty");
	}
	else{
		
		for(i=front;i<=rear;i++){
			printf("\n%d\n",queue[i]);
		}
	}
}

//update the value
void update(int x,int k){
	struct node *current =head;
	int i;
	for(i=1;i<x;i++){
		current=current->next;
	}
	current->data=k;
} 

     
int main() 
{ 
    int i,n,x,j,k,t,q,shelf1,shelf2,count,oldshelf,newvalue,choice; 
    printf("1 X K - update the number of books in xth shelf to k(1<=x<=k)");
    printf("\n0 X Y K- Find the number of books on the shelves x and y(both inclusive)with the k th rank(1<=x<=y<=N,1<=k<=y-x+1)\n");
    printf("\n**Input**\n");
	printf("test case:");
	scanf("%d",&t);
	for(j=0;j<t;j++){ 
		printf("number of shelve:");
		scanf("%d",&n);
		addNode(n);
		
		printf("Queries:");
    	scanf("%d",&q);
    	for(k=0;k<q;k++){
    		scanf("%d",&choice);
    		switch(choice){
    			case(0):
					scanf("%d%d%d",&shelf1,&shelf2,&count); // get value for X, Y and K to find the number of books on the shelves X and Y with K th rank
					sortList(shelf1,shelf2,count);
    				break;
    				
				case(1):
					
					scanf("%d%d",&oldshelf,&newvalue); // get value for X and K to update the number of books in X th shelf to K.
					update(oldshelf,newvalue);
					break;
					
				default:
					printf("\nwrong choice\n");
					break;	
			}
		}
		   
     
    }
    printf("\n**Output**\n");
    display();
    return 0;
}

