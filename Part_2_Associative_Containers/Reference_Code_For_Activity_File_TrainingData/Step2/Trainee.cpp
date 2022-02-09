#include "Trainee.h"

Trainee::Trainee(int id, std::string name): m_id(id), m_name(name) { }

void Trainee::display() const
{
    std::cout << m_id << "," << m_name <<  "\n";
    displayScores();
}

std::ostream& operator<<(std::ostream& rout, const Trainee& ref)
{
    rout << ref.m_id << "," << ref.m_name << "\n";
}
//std::map<std::string, double> m_scores;
void Trainee::addScore(std::string mname, double mscore)
{
    m_scores.insert(std::make_pair(mname,mscore));
    //m_scores[mname]=mscore, m_scores.at(mname)=mscores
}
double Trainee::displayScores() const
{
    std::map<std::string,double>::iterator iter;
    for(iter=m_scores.begin();iter!=m_scores.end();++iter)
        std::cout << iter->first << ":" << iter->second << "\n";        
}
double Trainee::computeTotalScore() const
{
    double total=0;
    std::map<std::string,double>::iterator iter;
    for(iter=m_scores.begin();iter!=m_scores.end();++iter)
        total += iter->second;
    return total;
}
double Trainee::computeAverageScore() const
{
    return computeTotalScore() / m_scores.size();
}
double Trainee::getScoreByModule(std::string mname) const
{
    double ret=m_scores.at(mname);
    //ex handlig
    return ret;
}

