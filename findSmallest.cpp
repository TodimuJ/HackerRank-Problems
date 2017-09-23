#include <iostream>



using namespace std;



int findSmallest (int anArray[], int size);



int main()

{

 
    int bucky[6] = {23, -1, 2343, -59 , 68960, 456};
    
   
 
     cout << "The smallest number in the array is: " << findSmallest(bucky, 6);

}





int findSmallest (int anArray[], int size)

{
  
 	 int smallest  = anArray[0];
    
 

 	 for (int i = 0; i< size; i++)
  
  {
    
 
   
  if(anArray[i] < smallest)
   

  {


         
      smallest = anArray[i];
     



   
 
 

    }

     
    
        
 
   }
    
    

return smallest;
   
 
}