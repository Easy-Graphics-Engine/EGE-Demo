/**
 *  Easy Graphics Engine (https://xege.org)
 *  ������������
 *
 *  ����˵��:
 *      EGE ������������ EGE Logo �ĵ��붯����ӵ������������ initgraph(),
 *    ������������ init_mode(��ʼ��ģʽ����ģʽ�Զ�����λ�������)�����
 *    ������ EGE ���������棬ֻ����� INIT_WITHLOGO ģʽ����:
 *      initgraph(witdh, height, INIT_WITHLOGO)
 *
 *  ��غ���:
 *      initgraph(width, height, init_mode): ��ʼ��ͼ�λ���������ָ����С����
 */

#include <stdio.h>
#include <graphics.h>


int main()
{
    // ��ʼ������������Ϊ 640x480 ��С��������������
    initgraph(640, 480, INIT_WITHLOGO);

    // ���ñ���ɫΪ��ɫ
    setbkcolor(WHITE);

    // ��ʱ 2 ���ر�ͼ�ν���
    delay_ms(2000);
    closegraph();

    return 0;
}
