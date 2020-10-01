import java.util.Scanner;
class Add
{
    public static void main(String args[])
    {
        int x,y,res;

        Scanner obj = new Scanner(System.in);

        System.out.print("Enter a number: ");
        x = obj.nextInt();

        System.out.print("Enter another number: ");
        y = obj.nextInt();
        res = x;

        while(y!=0)
        {
            res += 1;
            y--;
        }
        System.out.println("Result is: "+res);
    }
}