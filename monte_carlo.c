float mc_pi(int n ){
   int incircle = 0;
   
  for ( int i=0; i<n ;i++ ){
  float x = frandom();
  float y= frandom();
  float  d= x*x + y*y;
  if ( d <= 1 ){
   incircle++;
   }
  }
  float pi = 4*(float)incircle/n;
   return pi;   
  
  }
