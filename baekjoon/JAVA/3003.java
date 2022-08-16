import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int[] chess_arr = new int[6];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 6; i++) {
            chess_arr[i] = sc.nextInt();
        }

        get_chess_count(chess_arr);

        for (int i = 0; i < 6; i++) {
            System.out.print(chess_arr[i]);
            System.out.print(' ');
        }
    }

    public static void get_chess_count(int[] arr) {
        int count_arr[] = { 1, 1, 2, 2, 2, 8 };

        for (int i = 0; i < 6; i++) {
            arr[i] = count_arr[i] - arr[i];
        }
    }
}