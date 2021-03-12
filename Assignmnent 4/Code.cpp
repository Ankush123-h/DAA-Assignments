#include <bits/stdc++.h>
using namespace std;

pair<int,int> ans[2];

double dist(pair<int,int> p1, pair<int,int> p2)
{
	return (double)sqrt((p1.first - p2.first)*(p1.first - p2.first) +
				(p1.second - p2.second)*(p1.second - p2.second));
}

double solveStrip(vector<pair<int,int>> strip, int n, double d)
{
	double min = d;
	sort(strip.begin(),strip.end());
	for (int i = 0; i < n; ++i)
		for (int j = i+1; j < n && (strip[j].second - strip[i].second) < min; ++j)
			if (dist(strip[i],strip[j]) < min)
            {
                min = dist(strip[i], strip[j]);
                ans[0]=strip[i];
                ans[1]=strip[j];
            }
	return min;
}

double solve(vector<pair<int,int>> points, int start, int end)
{
	if (end - start <= 3)
	{
        double min = 1e9;
    	for (int i = start; i < end; ++i)
    		for (int j = i+1; j < end; ++j)
    			if (dist(points[i], points[j]) < min)
    			{
                    min = dist(points[i], points[j]);
                    ans[0]=points[i];
                    ans[1]=points[j];
                }
    	return min;
    }
	int mid = (start+end)/2;
	pair<int,int> midPoint = points[mid];
	double d = min(solve(points, start, mid), solve(points, mid+1, end));
	vector<pair<int,int>> strip;
	for (int i = start; i < end; i++)
		if (abs(points[i].first - midPoint.first) < d)
			strip.push_back(points[i]);
	return min(d, solveStrip(strip, strip.size(), d));
}

int main()
{
    int n;
    cin>>n;
	vector<pair<int,int>> points(n);
    for(int i=0;i<n;i++)
    {
        cin>>points[i].first>>points[i].second;
    }
    sort(points.begin(),points.end());
	cout<<"The smallest distance is "<<solve(points, 0, n)<<endl;
    cout<<"The corresponding pair of points is {"<<ans[0].first<<" "<<ans[0].second<<"} and ";
    cout<<"{"<<ans[1].first<<" "<<ans[1].second<<"}";
	return 0;
}