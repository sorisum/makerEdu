#include "kict_lib.h"

/**************************************************************
서보모터제어하기
*****************************************************************************************************
본 예제코드는 메이크에듀보드를 이용하여 서보모터를 사용하는 기본 예제입니다.
아두이노에서는 확장 라이브러리를 통해 기본적인 서보모터라이브러리를 제공합니다. 
메이크에듀보드에서는 아두이노에서 제공하는 서보모터라이브러리를 활용하여 
아두이노의 문법체계를 지키면서 보다 쉽게 서보모터를 제어할 수 있는 자체 함수를 제공합니다. 

메이크에듀보드에서 제공하는 서보모터관련 함수는 다음과 같습니다. 
default_Servoinit(사용할서보개수); - 사용하고자 하는 서보모터의 갯수를 초기화합니다.
                                     10번핀부터 시작하여 사용개수만큼 디지털핀을 사용합니다.(1개-10번핀,2개-10,11번핀...)
                                     모두 4개의 서보모터를 사용할 수 있습니다. 
servoX.write(각도);                - 해당X핀에 연결된 서보모터의 각도를 제어합니다.
servo(서보핀번호,ON/OFF);          - 원하는 서보모터를 사용하기 위해 켜거나 사용을 중지할 수 있습니다.
                                     OFF된 서보모터는 토크가 해제됩니다.(철자는 대문자로 써야합니다) 

메이크에듀보드에서 제공하는 서보모터관련 함수는 D10 ~ D13번핀에서 순차적으로 사용할 수 있습니다. 
그러나 아두이노에서 제공하는 확장라이브러리의 문법을 모두 사용할 줄 알면 메이크에듀보드의 모든 디지털핀에 
서보모터를 사용할 수 있습니다. 
예제코드를 보드에 올려서 모터의 회전을 확인해 보세요.
********************************************************************************************************/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() 
{// put your setup code here, to run once:
  default_Servoinit(4);  //사용할 서보모터 개수 초기화
  makeInit(4);           //고정핀 셋업(버저핀4,왼쪽모터 6,9, 오른쪽모터 3,5 멜로디 템포 4)
  delay(1000);
}

void loop() 
{// put your main code here, to run repeatedly:
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
while(1)                  // 무한반복 시작하겠음
{                         // 중괄호 시작
  servo10.write(45);      // 10번핀에 연결한 서보모터 각도를 45도로 설정
  servo11.write(45);      // 11번핀에 연결한 서보모터 각도를 45도로 설정
  servo12.write(45);      // 12번핀에 연결한 서보모터 각도를 45도로 설정
  servo13.write(45);      // 13번핀에 연결한 서보모터 각도를 45도로 설정
  delay(1000);            // 1초간 각도 유지
  servo10.write(135);     // 10번핀에 연결한 서보모터 각도를 135도로 설정
  servo11.write(135);     // 11번핀에 연결한 서보모터 각도를 135도로 설정
  servo12.write(135);     // 12번핀에 연결한 서보모터 각도를 135도로 설정
  servo13.write(135);     // 13번핀에 연결한 서보모터 각도를 135도로 설정
  delay(1000);            // 1초간 각도 유지
}                         // 중괄호 끝. 중괄호 시작으로 다시 돌아감.


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  finish();                 
}