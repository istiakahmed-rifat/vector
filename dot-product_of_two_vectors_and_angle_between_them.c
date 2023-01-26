//calculating the dot product of two vector using coordinates
//also the angle between them
# include<stdio.h>
# include<math.h>
int main() {
    int A[3], B[3];
    printf("enter Ax:\n");
    scanf("%d", &A[0]);
    printf("enter Ay:\n");
    scanf("%d", &A[1]);
    printf("enter Az:\n");
    scanf("%d", &A[2]);
    printf("enter Bx:\n");
    scanf("%d", &B[0]);
    printf("enter By:\n");
    scanf("%d", &B[1]);
    printf("enter Bz:\n");
    scanf("%d", &B[2]);
    float value_A = (A[0]+A[1]+A[2])^(1/2);
    float value_B = (B[0]+B[1]+B[2])^(1/2);
    float product = (A[0]*B[0])+(A[1]*B[1])+(A[2]*B[2]);
    float theta = acos(product/(value_A*value_B))*57.29577;
    //acos is the inverse function of cos which returns values in rad
    printf("the value are, product: %.2f& theta: %.2f\n", product, theta);
    return 0;
}
