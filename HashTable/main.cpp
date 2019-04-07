#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef char HashElement;
typedef struct{
int index;
HashElement *H;
int size ;
}Hash_t;
int creatHash(Hash_t *c,int size);
int HashTable(Hash_t *c,HashElement x);
int main()
{
  Hash_t h1;
  creatHash(&h1,5);
  HashTable(&h1,'a');
   HashTable(&h1,'2');
    HashTable(&h1,'5');
     HashTable(&h1,'7');
      HashTable(&h1,'8');
      for(int i=0;i<5;i++)
   cout<<h1.H[i]<<endl;

   cout<<int(x);
    return 0;

}
int creatHash(Hash_t *c,int size){
c->H=(HashElement*)malloc(size*sizeof(HashElement));
if(c->H==NULL){
    return 0;
}
for(int i=0;i<size;i++)
c->H[i]=NULL;
c->index=0;
c->size=size;
return 1;

}
int HashTable(Hash_t *c,HashElement x){
    c->index=int(x)%c->size;

while(c->H[c->index]!=NULL)
     c->index=(c->index+1)%c->size;

 c->H[c->index]=x;
    return 1;
}
