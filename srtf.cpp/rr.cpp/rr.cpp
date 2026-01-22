#include <iostream>
using namespace std;

int main() {
    int n, tq, bt[10], rt[10], wt[10]={0};

        cout << "Enter number of processes: ";
            cin >> n;

                cout << "Enter burst time:\n";
                    for(int i=0;i<n;i++) {
                            cin >> bt[i];
                                    rt[i] = bt[i];
                                        }

                                            cout << "Enter time quantum: ";
                                                cin >> tq;

                                                    int time=0, done;
                                                        do {
                                                                done = 1;
                                                                        for(int i=0;i<n;i++) {
                                                                                    if(rt[i]>0) {
                                                                                                    done = 0;
                                                                                                                    if(rt[i]>tq) {
                                                                                                                                        time += tq;
                                                                                                                                                            rt[i] -= tq;
                                                                                                                                                                            } else {
                                                                                                                                                                                                time += rt[i];
                                                                                                                                                                                                                    wt[i] = time - bt[i];
                                                                                                                                                                                                                                        rt[i] = 0;
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                } while(!done);

                                                                                                                                                                                                                                                                                    cout << "\nP\tBT\tWT\tTAT\n";
                                                                                                                                                                                                                                                                                        for(int i=0;i<n;i++)
                                                                                                                                                                                                                                                                                                cout << "P" << i+1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << bt[i]+wt[i] << endl;
                                                                                                                                                                                                                                                                                                }