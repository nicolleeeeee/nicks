#include <iostream>
using namespace std;

int main() {
    int n, bt[10], pr[10], rt[10], wt[10]={0};

        cout << "Enter number of processes: ";
            cin >> n;

                cout << "Enter burst time and priority:\n";
                    for(int i=0;i<n;i++) {
                            cin >> bt[i] >> pr[i];
                                    rt[i] = bt[i];
                                        }

                                            int time=0, done=0, min, highest;

                                                while(done != n) {
                                                        min = 999;
                                                                for(int i=0;i<n;i++)
                                                                            if(rt[i]>0 && pr[i]<min) {
                                                                                            min = pr[i];
                                                                                                            highest = i;
                                                                                                                        }

                                                                                                                                rt[highest]--;
                                                                                                                                        time++;

                                                                                                                                                if(rt[highest]==0) {
                                                                                                                                                            done++;
                                                                                                                                                                        wt[highest] = time - bt[highest];
                                                                                                                                                                                }
                                                                                                                                                                                    }

                                                                                                                                                                                        cout << "\nP\tBT\tPR\tWT\tTAT\n";
                                                                                                                                                                                            for(int i=0;i<n;i++)
                                                                                                                                                                                                    cout << "P" << i+1 << "\t" << bt[i] << "\t" << pr[i] << "\t" << wt[i] << "\t" << bt[i]+wt[i] << endl;
                                                                                                                                                                                                    }