package lecture5;

import java.util.Scanner;

public class ArrayDiff {
	public static Scanner s = new Scanner(System.in);

	public static int[] takeInput() {
		int n= s.nextInt();
		int[] arr = new int[n];
		for(int i=0;i<n;i++)  {
			arr[i]=s.nextInt();
		}
		return arr;
	}

	public static int findDifference(int[] arr) {
		int se=0, so=0;
		for(int i=0;i<arr.length;i++)  {
			if(i%2==0)  {
				se+=arr[i];
			}
			else
				so+=arr[i];
		}
		return se-so;
	}

	public static void main(String[] args) {
		int[] arr = takeInput();
		System.out.println(findDifference(arr));
	}

}
