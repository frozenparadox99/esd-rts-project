#define int time=0


void delay(void){ //  second delay as per STM32 standards
	while(400000--)
	}

struct node {    // creating the node for the queue
int data;
struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;	
int isEmpty(){
	if(rear == front == -1)
		return 1;
	else
		return 0
		}
int isFull(){
	if(front = (rear+1)%MAX)
		return 1;
	else return 0;
}
int enQ(int *p){   //Used to add the functions to the queue
	if (isEmpty()){
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data =(*p);
		temp->next = NULL;
		front = temp;
		rear = temp;
	else 
		temp =(struct node*) malloc (sizeof( struct node));
    temp -> data = (*p);
	  temp -> next = NULL;
	  rear -> next = temp;
	  rear = temp;
	  return;
}
	}
		
int setPriority(int t){   // Deciding which set of priorities to use based on time frame of button interrupt
	if(t%15 <5){   // First set of priorities
		enQ(*fn_motorclock);
		enQ(*fn_motoranticlock);
		enQ(*fn_LED);
		enQ(*fn_buzzer);
	}
	else if (5<t%15<10){  //Second set of priorities
		enQ(*fn_motoranticlock);
		enQ(*fn_LED);
		enQ(*fn_buzzer);
		enQ(*fn_motorclock);
	}
	else {   // Third set of priorities
		enQ(*fn_LED);
		enQ(*fn_buzzer);
		enQ(*fn_motorclock);
		enQ(*fn_motoranticlock);
	}
}
		
	
int main(){
	while(1){
		delay();
		time++;
		void interrupt vHandleLED(void){
		if (GPIO_PIN_0 == 0){
			setPriority(time);
		}
	}
		void interrupt vHandleBuzzer(void){
			if (GPIO_PIN_1 ==0){
				setPriority(time);
			}
		}
		void interrupt vHandleMotor_clock(void){
			if (GPIO_PIN_2 ==0){
				setPriority(time);
			}
		}
		void interrupt vHandleMotor_anticlock(void){
			if (GPIO_PIN_3 ==0){  
				setPriority(time);
			}
		}
	}
}
	
