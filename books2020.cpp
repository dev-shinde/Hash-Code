#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second > b.second);
}
bool sortbysec2(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int b, l, d;
    cin >> b >> l >> d;
    int b_store = b;
    int l_store = l;
    vector<int> score;
    vector<pair<int, int>> score_b;
    vector<pair<int,int>> sign_up_days;
    vector<int> books_per_day;


    while (b--)
    {
        int n;
        cin >> n;
        score.push_back(n);
    }

    for (int i = 0; i < b_store; i++)
    {
        score_b.push_back(make_pair(i, score[i]));
    }

    while (l--)
    {
        int b1, d1, s;
        cin >> b1 >> d1 >> s;
        vector<int> books;
        while (b1--)
        {
            int n1;
            cin >> n1;
            books.push_back(n1);
        }

        sign_up_days.push_back(make_pair(l_store-l-1,d1));
        books_per_day.push_back(s);
        // for (int i = 0; i < books.size(); i++)
        // {
        //     cout << books[i] << " ";
        // }
        // cout << endl;
    }

    sort(score_b.begin(),score_b.end(),sortbysec);
    sort(sign_up_days.begin(),sign_up_days.end(),sortbysec2);
    for (int i = 0; i < l_store; i++)
    {
        cout << sign_up_days[i].first << " " << sign_up_days[i].second << endl;
    }   

    // Scanning Days
    while(d>0){
        for(int i=0;i<sign_up_days.size();i++){
            if(sign_up_days[i].second >= d){
                break;
            }
            else{
                d -= sign_up_days[i].second;
                // for(int j=0;j<)
                // Scanning for books 
                // Var needs (bookperday,bookremainforship)
            }
        }
    }
    return 0;
}