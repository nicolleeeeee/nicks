#include <iostream>
using namespace std;

int main() {
    int n;
        int bt[10], pr[10], wt[10], tat[10];

            cout << "Enter number of processes: ";
                cin >> n;

                    cout << "Enter burst time and priority:\n";
                        for(int i=0;i<n;i++)
                                cin >> bt[i] >> pr[i];

                                    for(int i=0;i<n-1;i++)
                                            for(int j=i+1;j<n;j++)
                                                        if(pr[i] > pr[j]) {
                                                                        swap(pr[i], pr[j]);
                                                                                        swap(bt[i], bt[j]);
                                                                                                    }

                                                                                                        wt[0] = 0;
                                                                                                            for(int i=1;i<n;i++)
                                                                                                                    wt[i] = wt[i-1] + bt[i-1];

                                                                                                                        cout << "\nP\tBT\tPR\tWT\tTAT\n";
                                                                                                                            for(int i=0;i<n;i++) {
                                                                                                                                    tat[i] = bt[i] + wt[i];
                                                                                                                                            cout << "P" << i+1 << "\t" << bt[i] << "\t" << pr[i] << "\t" << wt[i] << "\t" << tat[i] << endl;
                                                                                                                                                }
                                                                                                                                                }