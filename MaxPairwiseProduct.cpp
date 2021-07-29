#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

cout<< "Please enter the number of elements in the vector: \n";


int n;  //this is the number of elements in the vector
cin >> n;


vector<int> randomVector;   //vector full of random numbers

//This block of code fills our previously declared vector with random numbers
srand(time(NULL));

cout<< "Here is the randomly generated vector: \n";

for(int i = 0; i < n; i++){
    randomVector.push_back(rand() % 100000);
    cout<< randomVector[i] << " ";
}
cout<< "\n";


//This block of code finds the first max of the vector
int max1Index;


for(int i = 0; i < n; i++){
    if( i == 0){
        max1Index = 0;
    }
    else if(randomVector[i] > randomVector[max1Index]){
        max1Index = i;
    }
    else{
        ; //do nothing
    }
}
cout<< "The first max is " << randomVector[max1Index] << "\n";


//This block of code finds the second max of the vector
int max2Index;

//every time max1Index is mentioned is to make sure the same maximum1 is not being reused for maximum2
for(int i = 0; i < n; i++){
    if(i == 0){
        if(max1Index == 0){
           max2Index = 1;  
        }
        else{
            max2Index = 0;
        }
    }
    else if(randomVector[i] > randomVector[max2Index] && i != max1Index){
        max2Index = i;
    }
    else{
        ; //do nothing
    }
}
cout<< "The second max is " << randomVector[max2Index] << "\n";
cout<< "The Maximum pairwise product is " <<(long long)(randomVector[max1Index] * randomVector[max2Index]) << "\n";
return 0;
}