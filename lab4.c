 /*
  *Michael Ressler
  *csci112
  *lab4
  *Feb-22-2019
 */

// *TO RUN PROGRAM: './lab4 < /public/csci112*/lab4/x_y_polygon.txt'

 #include <stdio.h>
 #include <math.h>

 void printArrays(double a[], double b[], int);

 int get_corners(double a[], double b[]){

   int i = 0;
   double item = 0;

   do {
	 item = scanf("%lf %lf", &a[i], &b[i]); //reads in values from txt and populates the arrays
	 i++;
      } while (item > 0);
         i--;

	 return(i);
 }

 void polygon_area(double a[], double b[], int n) {

   double sum = 0;
   int i = 0;
   for (i = 0; i < n; i++) {
	 sum += (a[i+1] + a[i])*(b[i+1] - b[i]); //expr is formula for area from book
   }

   sum = fabs(sum);
   sum = sum / 2;
   printf("The area of the polygon is: %g\n", sum);

   return;

 }


 int main(void) {

 double arr1[20]; //x values
 double arr2[20]; //y values

 int n = get_corners(arr1, arr2); //n is the number of points

 printArrays(arr1, arr2, n); //calls function to print arrays

 polygon_area(arr1, arr2, n); //calls funtion to find area, sending along the # of vertices

 return(0);
 }

 void printArrays(double a[], double b[], int n) {

 int i;

 printf("x     y\n");
 printf("---------\n");

	for (i = 0; i < n; i++) {
		printf("%g     %g\n",a[i], b[i]);
	}

 printf("---------\n");

 return;
 }

// ./lab4</public/csci112*/lab4/x_y_polygon.txt
