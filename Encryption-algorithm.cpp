#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    char t[100];
    int A[100];
    int B[100];
    int C[100];
    int k=0;
    int i;

	ifstream file("input_file.txt");
	string temp, text;
	if(file.is_open()){
		while(getline(file, temp)){
			text += temp + "\n";
		}
		cout << text;
	}
	else{
		cout << "i cant open file!";
	}
	i = text.length();
	i--;
	cout << i << endl;
	
	for(k=0 ; k<=i ; k++) {
		t[k] = text[k];
	}

//	cout << i << endl;
//	cout << "[";
	k=0;
	int r=0;
	int p = i;
	for(int j=0 ; j<=i ; j++){
//		cout << t[j] << endl;
		if(int(t[j] > 64) && int(t[j] < 91)){
			A[k] = int(t[j]) - 65;
//			cout << "k = " << k << endl;
//			cout << "A[k] = " << A[k]<< " ";
			B[k] = A[k] - k;
//			cout << "B[k] = " << B[k] << endl;
			if(B[k] < 0){
				C[r] = B[k];
//				cout << "C[r] = " << C[r] << endl;
				r++;
			}	
			k++;
//			else{
//				C[p] = B[k];
//				p--;
//				cout << "C[p] = " << C[p] << endl;
//			}				
			
		}
		if(int(t[j] > 96) && int(t[j] < 123)){
			A[k] = int(t[j]) - 71;
//			cout << "k = " << k << endl;
//			cout << "A[k] = " << A[k] << " ";
			B[k] = A[k] - k;
//			cout << "B[k] = " << B[k] << endl;
			if(B[k] < 0){
				C[r] = B[k];
//				cout << "C[r] = " << C[r] << endl;
				r++;
			}	
			k++;			
		}
		if(int(t[j] == 32)){
			A[k] = int(t[j]) + 20;  
//			cout << "k = " << k << endl;
//			cout << "A[k] = " << A[k] << " ";
			B[k] = A[k] - k;
//			cout << "B[k] = " << B[k] << endl;
			if(B[k] < 0){
				C[r] = B[k];
//				cout << "C[r] = " << C[r] << endl;
				r++;
			}	
			k++;			
		}
		if(int(t[j] == 44)){
			A[k] = int(t[j]) + 9;  
//			cout << "k = " << k << endl;
//			cout <<"A[k] = " <<  A[k] << " ";
			B[k] = A[k] - k;
//			cout << "B[k] = " << B[k] << endl;
			if(B[k] < 0){
				C[r] = B[k];
//				cout << "C[r] = " << C[r] << endl;
				r++;
			}	
			k++;			
		}
		if(int(t[j] == 46)){
			A[k] = int(t[j]) + 8;  
//			cout << "k = " << k << endl;
//			cout << "A[k] = " << A[k] << " ";
			B[k] = A[k] - k;
//			cout << "B[k] = " << B[k] << endl;
			if(B[k] < 0){
				C[r] = B[k];
//				cout << "C[r] = " << C[r] << endl;
				r++;
			}	
			k++;			
		}
		if(int(t[j] == 63)){
			A[k] = int(t[j]) - 8;  
//			cout << "k = " << k << endl;
//			cout << "A[k] = " << A[k] << " ";
			B[k] = A[k] - k;
//			cout << "B[k] = " << B[k] << endl;
			if(B[k] < 0){
				C[r] = B[k];
//				cout << "C[r] = " << C[r] << endl;
				r++;
			}	
			k++;
		}
		if(int(t[j] == 33)){
			A[k] = int(t[j]) + 23;  
//			cout << "k = " << k << endl;
//			cout << "A[k] = " << A[k] << " ";
			B[k] = A[k] - k;
//			cout << "B[k] = " << B[k] << endl;
			if(B[k] < 0){
				C[r] = B[k];
//				cout << "C[r] = " << C[r] << endl;
				r++;
			}	
			k++;			
		}
						
	}
//	cout << "]" << endl;
	r=0;
//	cout << "r = " << r;
		for(int p=0 ; p<i ; p++){
			if(B[p] < 0){
				C[r] = B[p];
//				cout << "C" << "=" << C[r] << endl;
				r++;
			}
		}
//		cout << "pedram";
		for(int p=0 ; p<i ; p++){
			if(B[p] >= 0){
				C[r] = B[p];
//				cout << "C" << "=" << C[r] << endl;
				r++;
			}
		}		


		cout << "A = " << "[";
		for(int r=0 ; r<i ; r++){	
			cout << A[r];
//			cout << "(r=" << r << ")";
			if(r != i-1){
				cout << ",";
			}
		}
		cout << "]" << endl;		


		cout << "B = " << "[";
		for(int r=0 ; r<i ; r++){	
			cout << B[r];
//			cout << "(r=" << r << ")";
			if(r != i-1){
				cout << ",";
			}
		}
		cout << "]" << endl;		
		
		cout << "C = " << "[";
		for(int r=0 ; r<i ; r++){	
			cout << C[r];
//			cout << "(r=" << r << ")";
			if(r != i-1){
				cout << ",";
			}
		}
		cout << "]" << endl;
	int D[100];
	int swap;
//	D[0] = min;
	int j;
	int min;
	
	for(j=0 ; j<i ; j++){
		min = C[j];
		int minid = j;
		for(r=j+1 ; r<i ; r++){
			if(C[r] < min){	
				min = C[r];
				minid = r;
			}
		}
				swap = C[j];
				C[j] = min;
				C[minid] = swap;
			
		}
	
	for(r=0 ; r<i ; r++){
		D[r] = C[r];
	}


		cout << "D = " <<"[";
		for(int r=0 ; r<i ; r++){	
			cout << D[r];
//			cout << "(r=" << r << ")";
			if(r != i-1){
				cout << ",";
			}
		}
		cout << "]" << endl;

	 
	
	int E[100];
	for(k=0 ; k<i; k++){
		if(D[k] < 0){
			E[k] = ((-1) * D[k]); 	
		}
		else{
			E[k] = D[k];
		}
	}
	
		cout << "E = " <<"[";	
		for(int r=0 ; r<i ; r++){	
			cout << E[r];
//			cout << "(r=" << r << ")";
			if(r != i-1){
				cout << ",";
			}
		}
		cout << "]" << endl;
	
	
	int F[100];
	int G[100];
	int H[100];
	int q=0;
	
	for(k=i-1 ; k>=0 ; k--){
		F[q] = E[k];
		q++;
	}

		cout << "F = " <<"[";	
		for(int r=0 ; r<i ; r++){	
			cout << F[r];
//			cout << "(r=" << r << ")";
			if(r != i-1){
				cout << ",";
			}
		}
		cout << "]" << endl;
	
	int c=0;
	int l=0;
	int y=0;
	int e = 2*i;
//	cout << "e = " << e << endl;
	for(c=0 ; c<e ;){
		G[c] = E[l];
		c++;
		l++;
		G[c] = F[y];
		c++;
		y++;
		
	}
	
		cout << "G = " <<"[";	
		for(int r=0 ; r<2*i ; r++){	
			cout << G[r];
//			cout << "(r=" << r << ")";
			if(r != 2*i-1){
				cout << ",";
			}
		}
		cout << "]" << endl;
		
		for(j=0 ; j<2*i ; j++){
			if(G[j]>=0 && G[j]<=25){ //A-Z
				H[j] = G[j]+65;
//				cout << "H[k] = " << char(H[j]) << endl;
			}
			if(G[j]>=26 && G[j]<=51){ //a-z
				H[j] = G[j]+71;
//				cout << "H[k] = " << char(H[j]) << endl;
			}
			if(G[j] == 52){ //space
				H[j] = G[j]-20;
//				cout << "H[k] = " << char(H[j]) << endl;
			}
			if(G[j] == 54){
				H[j] = G[j]-10; //44
//				cout << "H[k] = " << char(H[j]) << endl;
			}
			if(G[j] == 55){
				H[j] = G[j]-9; //46
//				cout << "H[k] = " << char(H[j]) << endl;
			}
			if(G[j] == 56){ //63
				H[j] = G[j]+7;
//				cout << "H[k] = " << char(H[j]) << endl;
			}	
			if(G[j] == 57){ //33
				H[j] = G[j]-24;
//				cout << "H[k] = " << char(H[j]) << endl;
			}								
		}
		cout << "H = ";	
		for(int r=0 ; r<2*i ; r++){	
			cout << char(H[r]);
//			cout << "(r=" << r << ")";
		}

	ofstream fileobj("output.txt");
	
	for(j=0 ; j<2*i ; j++){
		fileobj << char(H[j]);	
	}

	
}

