#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second > b.second);
}
bool sortbysec2(const pair<int, int> &a, const pair<int, int> &b)
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
    vector<pair<int, int>> sign_up_days;
    vector<int> books_per_day;
    vector<pair<int, vector<int>>> books_number;

    // For store the score
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
        int b1_store = b1;
        vector<int> books;
        while (b1--)
        {
            int n1;
            cin >> n1;
            books.push_back(n1);
        }
        for (int i = 0; i < books.size(); i++)
        {
            books[i] = score[books[i]];
        }
        books_number.push_back(make_pair(b1_store, books));
        sign_up_days.push_back(make_pair(l_store - l - 1, d1));
        books_per_day.push_back(s);
        // for (int i = 0; i < books.size(); i++)
        // {
        //     cout << books[i] << " ";
        // }
        cout << endl;
    }

    sort(score_b.begin(), score_b.end(), sortbysec);
    sort(sign_up_days.begin(), sign_up_days.end(), sortbysec2);
    // for (int i = 0; i < books_number.size(); i++)
    // {
    //     for (int j = 0; j < books_number[i].first; j++)
    //     {
    //         cout << books_number[i].first << books_number[j].second << endl;
    //     }
    // }

    // Scanning Days
    int ans = 0;
    while (d > 0)
    {
        for (int i = 0; i < sign_up_days.size(); i++)
        {
            if (sign_up_days[i].second >= d)
            {
                break;
            }
            else
            {
                d -= sign_up_days[i].second;
                // for(int j=0;j<)
                // Scanning for books
                // Var needs (bookperday,bookremainforship)
                for (int j = 0; j < books_number[i].first; j = j + books_per_day[i])
                {
                    ans += ;
                    // Plus the score of books
                }
            }
        }
    }
    return 0;
}

// vector<int>::iterator ptr;

//         // Displaying vector elements using begin() and end()
//         for (ptr = books_number[1].second.begin(); ptr < books_number[1].second.end(); ptr++)
//             cout << *ptr << " ";