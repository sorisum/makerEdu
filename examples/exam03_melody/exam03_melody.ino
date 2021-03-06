#include "kict_lib.h"

/**************************************************************
멜로디 함수로 음악 연주하기
***************************************************************
본 예제코드는 메이크에듀보드의 내장 피에조 부저를 이용하여
멜로디를 연주하는 예제코드입니다. 
하나의 멜로디 함수는 하나의 음표에 대응합니다.
사용함수는 melody(음계,박자); 입니다. 음계는 7음계음에 옥타브표시를
붙여 "4옥타브 도"는 "do4"로 표시합니다. 반음은 음이름 뒤에 s를 
붙여 사용합니다. "4옥타브 도#"과 "4옥타브 레b"은 같은음이라
항상 올림음으로 표시하고 "dos4"로 적습니다. 음계에 rest를 적으면 소리가
나지않으므로 박자만큼 쉬게 됩니다. 
makeInit의 인자값인 4는 멜로디 연주의 속도를 결정합니다. 4를 기준으로
숫자가 작아지면 빨라지고 커지면 느려집니다. 연주 중간에연주 속도를 
바꾸고 싶다면 tempo(4); 함수를 사용합니다. tempo함수의 
인자값은 역시 연주속도를 의미합니다. 기본값은 4입니다.
메이커에듀보드에 내장된 부저는 D4번핀에 연결되어 있습니다.
예제코드를 보드에 올려서 1도화음인 "도미솔"음을 확인해 보세요.
**************************************************************/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() 
{// put your setup code here, to run once:
  default_Servoinit(0);  //사용할 서보모터 개수 초기화
  makeInit(4);           //고정핀 셋업(버저핀4,왼쪽모터 6,9, 오른쪽모터 3,5 멜로디 템포 4)
  delay(1000);
}

void loop() 
{// put your main code here, to run repeatedly:
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

melody(do4,n4);     //4옥타브 "도"음을 4분음표길이로 연주
melody(mi4,n4);
melody(sol4,n4);
melody(rest,n4);    //4분쉼표
tempo(5);           //템포를 5로 느리게(안단테)
melody(do4,n4);
melody(mi4,n4);
melody(sol4,n4);
melody(rest,n4);    //4분쉼표
tempo(1.5);         //템포를 1.5로 빠르게(비바치시모)
melody(do4,n4);
melody(mi4,n4);
melody(sol4,n4);
melody(rest,n4);    //4분쉼표 
tempo(4);           //템포를 기본값 4인 보통 빠르기로(모데라토)
melody(do4,n4);
melody(mi4,n4);
melody(sol4,n4);
melody(rest,n4);    //4분쉼표
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  finish();                 
}
