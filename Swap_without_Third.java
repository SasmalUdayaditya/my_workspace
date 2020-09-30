package Basis_Program;
import java.util.*;
public class Swap_without_Third {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		
		//System.out.println("Enter the 2 value ");
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c;
		System.out.println("Value before swaping a="+a+" b="+b);
		c=a;
		a=b;
		b=c;
		System.out.println("Value After swaping "+a+" b="+b);
	}

}
