#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function that checks whether the brackets in
 * an input string are balanced. That is to say that for
 * every opening bracket there is a matching closing 
 * bracket. 
 *
 * There are 3 types of brackets 
 *  - ()
 *  - {}
 *  - []
 *
 * Brackets must be closed in reverse order, but there
 * is no requirement on the order in which they are opened.
 * Non bracket characters are to be ignored. 
 *
 * Use the function prototype below and fill in your own code.
 * Parse the input string in whichever way you see fit, return
 * a value of true if the input brackets are balanced, or
 * false if the input brackets are not balanced. Include
 * additional headers if you required and use any helper
 * functions from the standard library.
 */
static bool is_balanced(const char *input)
{
  // Your code here
}

/************************************************************/
/* Do no modify below this line                             */
/************************************************************/

const struct testcase
{
  const char *input;
  bool expect;
}
testcases[] =
{
  { "()", true },
  { "{}", true },
  { "[]", true },
  { "(", false },
  { "[)", false },
  { "((", false },
  { "]]", false },
  { "([{", false },
  { "([])", true },
  { "([{}])", true },
  { "([{)]}", false },
  { "(())", true },
  { "", true },
  { NULL, true },
  { "()()()()", true },
  { "()(())", true },
  { "foobar", true },
  { "(string)", true },
  { "(another string", false },
  { "{}[](){}[]()", true },
  { ")(}{][", false },
  { "asdf(fdsa){qwer}[rewq]", true },
  { "asdf(fdsa{qwer})[rewq]", true },
  { "(\0)", false },
  { "\03", true },
  { "    ", true },
  { "({[{[{(({}))}]}]})", true },
  { "({[{[{(({}))}]]}})", false },
  { "(((((((((())))))))))", true },
  { "(((((((((()))))))))))", false },
};

int main(void)
{
  size_t i;
  for (i = 0; i < sizeof(testcases) / sizeof(testcases[0]); i++)
  {
    const struct testcase *tc = testcases + i;
    printf("%s: ", tc->input ?: "(null)");
    if (is_balanced(tc->input) != tc->expect)
    {
      printf("fail\n");
      return 1;
    }
    printf("pass\n");
  }
  return 0;
}

