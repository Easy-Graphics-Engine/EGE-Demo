/**
 *  Easy Graphics Engine (https://xege.org)
 *  �ı䱳��ɫ
 *
 *  ����˵��:
 *      1. ��ʼ���󣬴��ڱ���ɫĬ��Ϊ��ɫ(#000000)
 *      2. �ڴ��ڻ������ݵĴ����е��� setbkcolor(), ���˻����ñ���ɫ������ԭ����ɫ�����滻
 *      3. ���� setbkcolor_f() ֻ���ñ���ɫ���ԣ���ʵ�ʻ�ͼ�������ڵ��� cleardevice() ����
 *         ��ȫ��������ɫ��Ϊ�±�����ɫ
 *
 *  ��غ���:
 *      setbkcolor():   �����±���ɫ���滻�ɱ���ɫ
 *      setbkcolor_f(): �����±���ɫ
 *      cleardevice():  ����, �Ա���ɫ����������ڻ�ͼ��
 */

#include <graphics.h>

int main()
{
    // ��ʼ������������Ϊ 640x480 ��С
    initgraph(640, 480, 0);

    // ����һ������
    setfillcolor(CYAN);
    bar(320 - 100, 240 - 50, 320 + 100, 240 + 50);

    // ��ʱ 1.5 ��
    delay_ms(1500);

    // ��ϸ�������Ч����ͨ�� setbkcolor() ���ô��ڱ���ɫΪ��ɫ����ԭ����ɫ�Ĳ����滻
    setbkcolor(WHITE);

    // ��ʱ 1.5 ��
    delay_ms(1500);

    // ʹ�� setbkcolor_f() ���ô��ڱ���ɫΪ��ɫ, ��ʹ�� cleardevice() ��������������
    // �Ա���ɫ���
    setbkcolor_f(LIGHTBLUE);
    cleardevice();

    // ��ʱ 1.5 ��
    delay_ms(1500);

    // �ر�ͼ�ν���
    closegraph();

    return 0;
}
