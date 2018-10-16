package PatternPrinting;

import java.util.Scanner;

public class PatternPrinting {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String sentence = "Hello World";
        String sent = scanner.nextLine();
        decliningSteps(sent);
        //decliningStepsFull(sentence);
        //decliningStepsMirrored(sentence);
        //incliningSteps(sentence);
        //incliningStepsMirrored(sentence);
        //incliningStepsFull(sentence);
        //reverseString(sentence);

    }

    static void decliningSteps(String sentence) {
        for (int i = 0; i < sentence.length() + 1; i++) {
            String tempF = sentence.substring(0, i);
            System.out.println(tempF);
        }
    }

    static void decliningStepsMirrored(String sentence) {
        for (int i = sentence.length(); i >= 0; i--) {
            String tempB = sentence.substring(0, i);
            System.out.println(tempB);
        }
    }

    static void decliningStepsFull(String sentence) {
        for (int i = 0; i < sentence.length() + 1; i++) {
            String tempF = sentence.substring(0, i);
            System.out.println(tempF);
        }
        for (int i = sentence.length() - 1; i >= 0; i--) {
            String tempB = sentence.substring(0, i);
            System.out.println(tempB);
        }
    }

    static void incliningSteps(String sentence) {
        String sent = sentence.replaceAll("[a-z, A-Z]", " ");
        char[] charArray = sent.toCharArray();
        for (int i = sentence.length() - 1; i >= 0; i--) {
            char c = sentence.charAt(i);
            charArray[i] = c;
            System.out.println(charArray);
        }
    }

    static void incliningStepsMirrored(String sentence) {
        char[] charArray = sentence.toCharArray();
        for (int i = 0; i <= sentence.length() - 1; i++) {
            char c = sentence.charAt(i);
            charArray[i] = ' ';
            System.out.println(charArray);
        }
    }

    static void incliningStepsFull(String sentence) {
        String sent = sentence.replaceAll("[a-z, A-Z]", " ");
        char[] charArray = sent.toCharArray();
        for (int i = sentence.length() - 1; i >= 0; i--) {
            char c = sentence.charAt(i);
            charArray[i] = c;
            System.out.println(charArray);
        }
        
        char[] charArrayMirror = sentence.toCharArray();
        for (int i = 0; i <= sentence.length() - 1; i++) {
            char c = sentence.charAt(i);
            charArrayMirror[i] = ' ';
            System.out.println(charArrayMirror);
        }
    }

    static void reverseString(String sentence) {
        String printSentence = "";
        for (int i = sentence.length() - 1; i >= 0; i--) {
            char tempC = sentence.charAt(i);
            printSentence += tempC;
            System.out.println(printSentence);
        }
    }
}
