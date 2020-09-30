package Algo;

public class Binary_search {

	public static void main(String[] args) {
		
		int arr[] = {21, 51, 101, 121, 151};
		int elem = 121;
		int beg = 0;
		int end = arr.length - 1;
		int mid = (beg + end)/2;
		
		while(beg <= end) {
			if(arr[mid] < elem) {
				beg = mid + 1;				
			} else if(arr[mid] == elem) {
				System.out.println("Element found at : " + (mid + 1));
				break;
			} else {
				end = mid - 1;
			}
			mid = (beg + end)/2;
		}
		if(beg > end) {
			System.out.println("Element Not found");
		}

	}

}
