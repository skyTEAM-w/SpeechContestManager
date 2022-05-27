//
// Created by HW on 2022/5/25.
//
#include "vector"
#include "map"
#include "Competitor.h"

#ifndef SPEACHCONTESTMANAGER_SPEECHMANAGER_H
#define SPEACHCONTESTMANAGER_SPEECHMANAGER_H

using namespace std;

class SpeechManager {
public:
    SpeechManager();
    ~SpeechManager();

    //������
    //��ʼ��
    void initContest();
    //չʾ�˵�
    static void show_Menu();
    //�˳�ϵͳ
    static void exitSystem();
    //����ѡ��
    void createCompetitor();
    [[maybe_unused]] void createCompetitor(ifstream &ifstream1);

    //������������
    void start();
    //��ǩ
    void speechDraw();
    //��������
    void speechContest();

    //������
    vector<int> round_one;  //��һ��ѡ�ֱ任����
    vector<int> round_two;  //�ڶ���ѡ�ֱ任����
    vector<int> winner;     //ǰ����ѡ�ֱ任����
    map<int, Competitor> m_Speaker; //�����ѡ�ֶ�Ӧ��ϵ
    int m_Index{};            //����

private:
};


#endif //SPEACHCONTESTMANAGER_SPEECHMANAGER_H
