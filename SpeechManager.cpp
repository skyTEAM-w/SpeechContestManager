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
    //初始化属性
    this->initContest();

    //创建选手
    this->createCompetitor();
}

SpeechManager::~SpeechManager() {

}

void SpeechManager::initContest() {
    //容器置空
    this->round_one.clear();
    this->round_two.clear();
    this->winner.clear();
    this->m_Speaker.clear();
    this->m_Index = 1;
}

void SpeechManager::show_Menu() {
    cout << "**************************" << endl;
    cout << "*******欢迎参加比赛！*******" << endl;
    cout << "********1.开始比赛*********" << endl;
    cout << "********2.往届记录*********" << endl;
    cout << "********3，清空记录*********" << endl;
    cout << "********0.退出程序*********" << endl;
    cout << "**************************" << endl;
    cout << endl;
}

void SpeechManager::exitSystem() {
    cout << "欢迎下次使用！" << endl;
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
    //第一轮
    //1.抽签
    this->speechDraw();
    //2.比赛
    //3.显示晋级结果

    //第二轮
    //1.抽签
    //2.比赛
    //3.显示最终结果

    //保存分数到文件
}

void SpeechManager::speechDraw() {
    cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
    cout << "--------------------" << endl;
    cout << "抽签后顺序如下：" << endl;

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
    cout << "---------- 第" << this->m_Index << "轮比赛正式开始 ----------" << endl;
    multimap<double, int, greater<>> scoreOfOne;
    int num = 0;
}
