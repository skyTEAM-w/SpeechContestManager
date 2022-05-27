//
// Created by HW on 2022/5/25.
//

#include "SpeechManager.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <random>
#include <map>

using namespace std;

SpeechManager::SpeechManager() {
    //��ʼ������
    this->initContest();

    //����ѡ��
    this->createCompetitor();
}

SpeechManager::~SpeechManager() {

}

void SpeechManager::initContest() {
    //�����ÿ�
    this->round_one.clear();
    this->round_two.clear();
    this->winner.clear();
    this->m_Speaker.clear();
    this->m_Index = 1;
}

void SpeechManager::show_Menu() {
    cout << "**************************" << endl;
    cout << "*******��ӭ�μӱ�����*******" << endl;
    cout << "********1.��ʼ����*********" << endl;
    cout << "********2.�����¼*********" << endl;
    cout << "********3����ռ�¼*********" << endl;
    cout << "********0.�˳�����*********" << endl;
    cout << "**************************" << endl;
    cout << endl;
}

void SpeechManager::exitSystem() {
    cout << "��ӭ�´�ʹ�ã�" << endl;
    system("pause");
    exit(0);
}

void SpeechManager::createCompetitor() {
    const char *nameSeed = "ABCDEFGHIJKL";
    for (int i = 0; i < strlen(nameSeed); ++i) {
        string name = "Competitor";
        name += nameSeed[i];
        Competitor competitor;
        competitor.m_Name = name;
        for (int j = 0; j < 2; ++j) {
            competitor.m_Score[i] = 0;
        }

        this->round_one.push_back(i + 10001);
        this->m_Speaker.insert(make_pair(i + 10001, competitor));
    }
}

[[maybe_unused]] void SpeechManager::createCompetitor(ifstream &ifstream1) {

}

void SpeechManager::start() {
    //��һ��
    //1.��ǩ
    this->speechDraw();
    //2.����
    //3.��ʾ�������

    //�ڶ���
    //1.��ǩ
    //2.����
    //3.��ʾ���ս��

    //����������ļ�
}

void SpeechManager::speechDraw() {
    cout << "��<<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
    cout << "--------------------" << endl;
    cout << "��ǩ��˳�����£�" << endl;

    if (this->m_Index == 1) {
        shuffle(round_one.begin(), round_one.end(), std::mt19937(std::random_device()()));
        for (auto &item : round_one) {
            cout << item << " ";
        }
        cout << endl;
    } else {
        shuffle(round_two.begin(), round_two.end(), std::mt19937(std::random_device()()));
        for (auto &item : round_two) {
            cout << item << " ";
        }
        cout << endl;
    }

    cout << "--------------------" << endl;
    system("pause");
    cout << endl;
}

void SpeechManager::speechContest() {
    cout << "---------- ��" << this->m_Index << "�ֱ�����ʽ��ʼ ----------" << endl;
    multimap<double, int, greater<>> scoreOfOne;
    int num = 0;
}
