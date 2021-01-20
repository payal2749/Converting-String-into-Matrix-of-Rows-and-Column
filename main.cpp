#include <bits/stdc++.h>
using namespace std;

string func(string s)
{
   string k;
   int p=0;
   int l=s.length();
   float d=sqrt(l);
   int f=floor(d);
   int c=ceil(d);
   cout<<f<<c;
   char array[f][c];
   while(p!=l)
   {
   for(int i=0;i<f;i++)
   {
      for(int j=0;j<c;j++)
      {
          array[i][j]=s[p];
          p++;
          
      }
      cout<<endl;
       
   }
   }
  
   
//   for(int i=0;i<f;i++)
//   {
//      for(int j=0;j<c;j++)
//      {
//         cout<<array[i][j];    
//      }  
//      cout<<endl;  
//   }
   
   for(int j=0;j<c;j++)
   {
      for(int i=0;i<f;i++)
      {
         cout<<array[i][j];
         
      }
      cout<<" ";
      
   }
//   for(int j=0;j<c;j++)
//   {
//      for(int i=0;i<f;i++)
//      {
//         k.push_back(array[i][j]);
//         
//      }
//      k.push_back(" ");
//      
//   }      
//   return k;
   
   
   
   
   
   
   
//   for(int i=0;i<f;i++)
//   {
//       for(int j=0;j<c;j++)
//          k=k+array[i][j];
//   }
//   for(int i=0;i<f;i++)
//   {
//      for(int j=0;j<c;j++)
//         cout<<k[i][j];
//      cout<<endl;    
//   }
      
   
   
//   for(int i=0;i<f;i++)
//   {
//      for(int j=0;j<c;j++)
//        cout<<array[i][j];
//      cout<<endl;
//      
//   }
   
   
//   for(int i=0;i<c;i++)
//   {
//      for(int j=0;j<f;j++)
//      {
//          k.push_back(array[i][j]);
//          
//          
//      }
//      
//             
//   }
   
      
   
    
   
   
   
   
    
}
int main()
{

   string s;
   cin>>s;
   cout<<func(s);
   
   
   
   
   
   
   return 0;    
}