#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

const ll INF = 1e18;

vector<vector<pair<int, int>>> adj(10000 + 1);

map<int, int> mp;

vector<ll> dis(10000 + 1);

void dijkstra(int source)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, source});
    dis[source] = 0;

    while (!pq.empty())
    {

        int parent = pq.top().second;
        pq.pop();
        vector<pair<int, int>> childrens = adj[parent];

        for (auto child : childrens)
        {

            int child_vertex = child.first;
            int weight = child.second;

            if (dis[parent] + weight < dis[child_vertex])
            {

                dis[child_vertex] = dis[parent] + weight;
                pq.push({dis[child_vertex], child_vertex});
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

          adj.clear();
           for (int i = 0; i <= 1001; i++)
        {
             adj[i].clear();
        }

        for (int i = 0; i <= 1001; i++)
        {
            dis[i] = INF;
        }

        int n, edge;
        cin >> n >> edge;

        for (int i = 0; i < edge; i++)
        {
            int u, v, wt;
            cin >> u >> v >> wt;
            adj[u].pb({v, wt});
            adj[v].pb({u, wt});
        }

        dijkstra(3);

        int q;
        cin >> q;
        while (q--)
        {
            int node, time;
            cin >> node >> time;
            ll travel_time = 2*dis[node];
            //cout << travel_time << " " << time << endl;
            if (travel_time >= time)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << time - travel_time << endl;
            }
        }
    }
}
