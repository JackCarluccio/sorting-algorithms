package test;
import bubble_sort.BubbleSort;

public class Main {

    public static void main(String[] args) {
        int[] arr = { 64, 34, 25, 12, 22, 11, 90 };
        BubbleSort.sort(arr);

        for (int n : arr) {
            System.out.print(n + ", ");
        }
        System.out.println();
    }
    
}
