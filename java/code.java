// import java.util.*;
// public class code{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int money = 2000;
//         int n = sc.nextInt();
//         int m= sc.nextInt();
//         int sum = n+m;
//         System.out.println(sum);
//         System.out.println(money);
//         System.out.println("hello wrold");
//     }
// }
// import java.util.*;
// public class code{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         int n;
//         System.out.println("Enter a new Number");
//         n=sc.nextInt();
//         int count=0;
//         for(int i=0;i<n;i++){
//             while(n>0){
//                 n/=10;
//                 count++;
//             }
//         }
//         System.out.println("Number of digist in a given number "+ count);

//     }
// }
// import java.util.*;
// public class code{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter a number");
//         int n = sc.nextInt();
//         int sum=0;
//         while(n>0){
//             sum=sum+(n%10);
//             n/=10;
//         }
//         System.out.println("Sum of digits "+sum);
//     }
// }
// import java.util.*;
// public class code{
//     public static void main(String[] args) {
//         Scanner sc =new Scanner(System.in);
//         System.out.println("Enter a new number");
//         int n=sc.nextInt();
//         int ans=0;
//         while(n>0){
//             ans=ans*10 + (n%10);
//             n/=10;
//         }
//         System.out.println("Reversed Number is " + ans);
//     }
// }
// import java.util.*;
// public class code{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int sum=0;
//         while(n>0){
//             if(n%2==0){
//                 sum=sum - n;
//             }
//             else{
//                 sum = sum+n;
//             }
//             n--;
//         }
//         System.out.println("Sum of a series " + sum);
//     }
// }
// import java.util.*;
// public class code{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n=sc.nextInt();
//         int sum=1;
//         for(int i=n;i>0;i--){
//             sum = sum*i;
//         }
//         System.out.println("Factorial of given number "+ sum);
//     }
// }
// import java.util.*;
// public class code{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int row = sc.nextInt();
//         int col = sc.nextInt();
//         for(int i=1;i<=row;i++){
//             for(int j=1;j<=col;j++){
//                 System.out.print("*");
//             }
//             System.out.println();
//         }
//     }
// }
// import java.util.*;
// public class code{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int row = sc.nextInt();
//         int col = sc.nextInt();
//         for(int i=1;i<=row;i++){
//             for(int j=1;j<=col;j++){
//                 if(i==1 || i==row || j==1 || j==col){
//                     System.out.print("*");
//                 }
//                 else{
//                     System.out.print(" ");
//                 }
            
                
//             }
//             System.out.println();
//         }
        
//     }
// }
// import java.util.*;
// class Student{
//     int age;
//     String name;
// }
// public class code{
//     public static void main(String[] args) {
//         Student obj1 = new Student();
//         obj1.age=21;
//         obj1.name="Mukul";
//         System.out.println(obj1.age);
//         System.out.println(obj1.name);

//         Student obj2 = new Student();
//         obj2.age=18;
//         obj2.name="Prasoon";
//         System.out.println(obj2.age);
//         System.out.println(obj2.name);
//     }
// }
import java.util.*;
class sum{
    int Sum(int a,int b){
        int ans=a+b;
        return ans;
    }

}
public class code{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sum obj1 = new sum();
        int x=sc.nextInt();
        int y = sc.nextInt();
        int ans = obj1.Sum(x,y);
        System.out.println(ans);

        
    }
}