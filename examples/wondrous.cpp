#include "zoom.h"
int main(int argc,char *argv[]){Var v0,v1,v2,v3,v4;assign(&v3,input(Var("Enter start number: ")));assign(&v4,calc(ADD,2,v3,Var(0.0)));assign(&v0,&v4);assign(&v2,&v3);while(toBoolean(compare(true,&v0,Var(1.0)))){mconcat(&v2,Var(" -> "));if(toBoolean(compare(false,calc(REMAINDER,2,v0,Var(2.0)),Var(0.0)))){mcalc(DIVIDE,&v0,Var(2.0));}else{assign(&v0,calc(ADD,2,calc(MULTIPLY,2,v0,Var(3.0)),Var(1.0)));}mconcat(&v2,&v0);}print(v2);return 0;}