import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        //int N = scanner.nextInt();
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        if(n%2!=0)
        System.out.println("Weird");
        else if(n%2==0 && n>=2 && n<=5)
        System.out.println("Not Weird");
        else if(n%2==0 && n>=6 && n<=20)
        System.out.println("Weird");
        else if(n%2==0 && n>20)
        System.out.println("Not Weird");
        else
        System.out.println(" ");
        scanner.close();
    }
}
