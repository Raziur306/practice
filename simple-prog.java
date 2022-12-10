import java.util.*;
 
class MyClass{
 
    //print number which contain zero
    void NumberWithZero(int listNum[]){
        for(int i=0; i<listNum.length; i++){
            boolean isZero = false;
            int temp = listNum[i];
            while(temp!=0){
                if(temp%10==0){
                    isZero=true;
                    break;
                }
                temp/=10;
            }
         if(isZero){
            System.out.print(listNum[i]+" ");
        }
    }
    }
 
  //print number wihout zero
    void NumberWithoutZero(int listNum[]){
        for(int i=0; i<listNum.length; i++){
            boolean isZero = false;
            int temp = listNum[i];
            while(temp!=0){
                if(temp%10==0){
                    isZero=true;
                    break;
                }
                temp/=10;
            }
         if(!isZero){
            System.out.print(listNum[i]+" ");
        }
    }
    }
 
 
    void CombineZeroAndNonZero(int listNum[]){
        NumberWithZero(listNum);
        NumberWithoutZero(listNum);
    }
 
}
 
 class main{
    public static void main(String[] args){
       Scanner scanner = new Scanner(System.in);
        int num,Option;
 
        System.out.print("Number of elements: ");
        num = scanner.nextInt();
 
        //arry to take user random number 
        System.out.print("Enter "+num+" number of elements: ");
        int listNum[] = new int[num];
        for(int i=0; i<num; i++){
            listNum[i] = scanner.nextInt();
        }
 
        System.out.print("\nSelect Option:\n1) Number with Zero\n2) Number with NoneZero.\n3) Number with CombineZeroAndNonZero\nEnter: ");
        Option = scanner.nextInt();
 
        //creating object
        MyClass myObj = new MyClass();
 
        if(Option==1)
              myObj.NumberWithZero(listNum);
        else if(Option==2)
              myObj.NumberWithoutZero(listNum);
        else if(Option==3)
              myObj.CombineZeroAndNonZero(listNum);
        else
            System.out.println("Inavid Option");
        }
}
