import java.util.Arrays;
import java.util.List;

public class HelloWorldReverse {

	public static void main(String args[]) {
		// A reversed sentence of Hello World!
		String reversedSentence = "! World Hello";

		System.out.println(unReverseSentence(reversedSentence));
	}

	public static String unReverseSentence(String reversed) {
		//A method that takes the reversed sentence returns and un-reverses it
		List<String> wordsInSentence = Arrays.asList(reversed.split("\\s"));
		StringBuilder sb = new StringBuilder(reversed.length());

		for (int i = wordsInSentence.size() - 1; i >= 0; i--) {
			sb.append(wordsInSentence.get(i));
			sb.append(' ');
		}
		return sb.toString().trim();
	}
}
