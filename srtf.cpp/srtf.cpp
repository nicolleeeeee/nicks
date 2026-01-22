#include <iostream>
using namespace std;

int main() {
    int n, bt[10], rt[10], wt[10]={0};
        cout << "Enter number of processes: ";
            cin >> n;

                cout << "Enter burst time:\n";
                    for(int i=0;i<n;i++) {
                            cin >> bt[i];
                                    rt[i] = bt[i];
                                        }

                                            int time=0, done=0, min, shortest;

                                                while(done != n) {
                                                        min = 999;
                                                                for(int i=0;i<n;i++)
                                                                            if(rt[i] > 0 && rt[i] < min) {
                                                                                            min = rt[i];
                                                                                                            shortest = i;
                                                                                                                        }

                                                                                                                                rt[shortest]--;
                                                                                                                                        time++;

                                                                                                                                                if(rt[shortest] == 0) {
                                                                                                                                                            done++;
                                                                                                                                                                        wt[shortest] = time - bt[shortest];
                                                                                                                                                                                }
                                                                                                                                                                                    }

                                                                                                                                                                                        cout << "\nP\tBT\tWT\tTAT\n";
                                                                                                                                                                                            for(int i=0;i<n;i++)
                                                                                                                                                                                                    cout << "P" << i+1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << bt[i]+wt[i] << endl;
                                                                                                                                                                                                    }