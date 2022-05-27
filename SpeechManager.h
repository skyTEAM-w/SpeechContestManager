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

    //功能区
    //初始化
    void initContest();
    //展示菜单
    static void show_Menu();
    //退出系统
    static void exitSystem();
    //创建选手
    void createCompetitor();
    [[maybe_unused]] void createCompetitor(ifstream &ifstream1);

    //比赛启动函数
    void start();
    //抽签
    void speechDraw();
    //比赛流程
    void speechContest();

    //参数区
    vector<int> round_one;  //第一轮选手变换容器
    vector<int> round_two;  //第二轮选手变换容器
    vector<int> winner;     //前三名选手变换容器
    map<int, Competitor> m_Speaker; //编号与选手对应关系
    int m_Index{};            //轮数

private:
};


#endif //SPEACHCONTESTMANAGER_SPEECHMANAGER_H
