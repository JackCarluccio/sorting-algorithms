package test;
import bubble_sort.BubbleSort;
import miracle_sort.MiracleSort;

public class Main {

    public static void main(String[] args) {
        if (args.length != 1) {
            throw new IllegalArgumentException("Please provide the sorting algorithm to test as an argument.");
        }

        int[] arr = { 64, 34, 25, 12, 22, 11, 90 };
        String algorithm = args[0].toLowerCase();

        switch (algorithm) {
            case "bubble":
                BubbleSort.sort(arr);
                break;
            case "miracle":
                MiracleSort.sort(arr);
                break;
            default:
                throw new IllegalArgumentException("Unsupported sorting algorithm: " + algorithm);
        }

        System.out.println("Ran " + algorithm + " sort:");
        for (int n : arr) {
            System.out.print(n + ", ");
        }
        System.out.println();
    }

}
