using namespace std;
class Game
{
private:
    int userWeapon, compWeapon;
    int userCount, compCount;

public:
    string name;
    int totalRounds;
    Game(string N)
    {
        name = N;
        userCount = 0;
        compCount = 0;
        totalRounds = 0;
    }
    void turn(int, int);
    string compChoose();
    void result();
};

void Game::turn(int x, int y)
{
    userWeapon = x;
    totalRounds = y;
    srand(time(0));
    compWeapon = (rand() % 3) - 1;
    if ((userWeapon < compWeapon) && (userWeapon == compWeapon - 1))
    {
        cout << "Computer choose: " << compChoose() << endl;
        cout << "Computer won this round" << endl
             << endl;
        compCount++;
    }
    else if ((compWeapon < userWeapon) && (compWeapon == userWeapon - 1))
    {
        cout << "Computer choose: " << compChoose() << endl;
        cout << name << " won this round" << endl
             << endl;
        userCount++;
    }
    else if ((compWeapon == -1) && (userWeapon == 1))
    {
        cout << "Computer choose: " << compChoose() << endl;
        cout << "Computer won this round" << endl
             << endl;
        compCount++;
    }
    else if ((compWeapon == 1) && (userWeapon == -1))
    {
        cout << "Computer choose: " << compChoose() << endl;
        cout << name << " won this round" << endl
             << endl;
        userCount++;
    }
    else
    {
        cout << "Computer choose: " << compChoose() << endl;
        cout << "Match draw!" << endl
             << endl;
    }
}

string Game ::compChoose()
{
    if (compWeapon == -1)
        return "Rock";
    else if (compWeapon == 0)
        return "Paper";
    else
        return "Scissor";
}

void Game ::result()
{
    if (compCount < userCount)
        cout << "--> " << name << " <--"
             << " won the series of " << totalRounds << " Rounds." << endl;
    else if (compCount > userCount)
        cout << "--> Computer <-- won the series of " << totalRounds << " Rounds." << endl;
    else
        cout << "Nobody won! The series gets tied at:   " << userCount << " - " << compCount << endl
             << endl;
    cout << "Final score:-" << endl
         << name << ":   " << userCount << endl
         << "Computer:   " << compCount << endl;
}
