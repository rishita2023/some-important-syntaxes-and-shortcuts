  typedef pair<string, int> pi;
  
  
 /* binary search*/
  binarySearch(arr, x, low, high)
        repeat till low = high
               mid = (low + high)/2
                   if (x == arr[mid])
                   return mid
   
                   else if (x > arr[mid])
                       low = mid + 1
   
                   else              
                       high = mid - 1
/*Recursive Method / divide and conquer method */

    binarySearch(arr, x, low, high)
           if low > high
               return False 
   
           else
               mid = (low + high) / 2 
                   if x == arr[mid]
                   return mid
       
               else if x > arr[mid]       
                   return binarySearch(arr, x, mid + 1, high)
               
               else                       
                   return binarySearch(arr, x, low, mid - 1) 
                   
               /* dp dimensions */    
         int x[] = {0,0,1,-1};
        int y[] = {1,-1,0,0};
