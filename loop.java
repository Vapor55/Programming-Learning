import java.util.Scanner;

public class loop {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Type a text: ");
    String text = scanner.nextLine();

    for (int i = 0; i < 100; i++) {
      System.out.println(text);
    }
  }
}
