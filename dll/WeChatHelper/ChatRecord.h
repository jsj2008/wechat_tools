#pragma once
#include <string>

void HookChatRecord();		//HOOK�����¼
void RecieveWxMesage();		//����΢����Ϣ
void SendWxMessage();		//����΢����Ϣ���ͻ���
std::wstring GetMsgByAddress(DWORD memAddress);	//�ӵ�ַ�л�ȡ��Ϣ����