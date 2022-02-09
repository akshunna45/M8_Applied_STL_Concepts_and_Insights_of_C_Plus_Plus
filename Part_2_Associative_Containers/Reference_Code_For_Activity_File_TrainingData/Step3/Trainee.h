#ifndef __TRAINEE_H
#define __TRAINEE_H
#include<string>
#include<map>
#include<set>

class Trainee
{
    int m_id;
    std::string m_name;
    std::map<std::string, double> m_scores;     //std::vector<double> m_scores;
    std::set<std::string> m_skills;
public:
    Trainee(int id, std::string name);
    //TODO:Another ctor, which will initialize scores also
    int getId() const { return m_id; }
    std::string getName() const { return m_name; }
    void display() const;
    
    void displayScores() const;
    void addScore(std::string, double);
    double getScoreByModule(std::string) const;
    double computeTotalScore() const;
    double computeAverageScore() const;
    //TODO: add/update scores of all modules, nullify score of specific module
    //update score of specific module
    
    void addSkill(std::string);
    void removeSkill(std::string);
    bool isSkillAvailable(std::string) const;
    int countSkills() const;
    //void addSkills(std::set<std::string>);
        
    friend std::ostream& operator<<(std::ostream&, const Trainee&);
};

#endif
