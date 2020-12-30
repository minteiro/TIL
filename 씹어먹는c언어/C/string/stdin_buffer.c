//그렇다면 컴퓨터의 양동이에 해당하는 부분은 무엇일까요? 바로, 버퍼(buffer) 라고 부르는 것입니다. 또한, 수 많은 버퍼 중에서도 키보드의 입력을 처리하는 버퍼는 바로 입력 버퍼, 혹은 stdin (흔히 입력 스트림) 이라 부르는 것입니다.
//
//
//키보드로 쳐다는 모든 정보는 일시적으로 stdin 에 저장되었다가 나중에 입력이 종료되면 한꺼번에 처리를 하는 것입니다. 
//
//컴퓨터가 어떻게 우리가 입력을 종료했는지 알 수 있죠? 바로 엔터를 치면 됩니다.
//
//다시말해 컴퓨터는 개행 문자, 즉 \n 을 '입력을 종료하였으니 버퍼에 들어 있는 내용을 가지고 놀아라' 라는 뜻으로 받아 들입니다.
//
//scanf 함수는 언제까지 stdin 으로 부터 데이터를 얻어올까요? 바로 
//' ', '\n', '\t' 를 만날 때 까지 입니다.
//
//'\t' 는 TAB키를 누르면 입력됨

#include <stdio.h>
int main()
{
	char str1[10], str2[10];

	printf("문자열을 입력하세요: ");
	scanf("%s", str1);
	printf("입력한 문자열 : %s \n", str1);

	printf("문자열을 입력하세요: ");
	scanf("%s", str2);
	printf("입력한 문자열 : %s \n", str2);

	return 0;
}
	
