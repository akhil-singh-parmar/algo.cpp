package Algo;

public class Linear_Search {

	public static void main(String[] args) {
		
		int arr[] = {101, 21, 51, 121, 11, 151};
		int x = 11;
		int temp = -1;
		
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] == x)
				temp = i;
		}
		
		if(temp >= 0) 
			System.out.println("Element found at : " + temp);
		else 
			System.out.println("Element not found");
	}

}
