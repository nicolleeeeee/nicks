#include <iostream>
using namespace std;

int main() {
    int n;
        int bt[10], wt[10], tat[10];

            cout << "Enter number of processes: ";
                cin >> n;

                    cout << "Enter burst time:\n";
                        for(int i=0;i<n;i++)
                                cin >> bt[i];

                                    wt[0] = 0;
                                        for(int i=1;i<n;i++)
                                                wt[i] = wt[i-1] + bt[i-1];

                                                    cout << "\nP\tBT\tWT\tTAT\n";
                                                        for(int i=0;i<n;i++) {
                                                                tat[i] = bt[i] + wt[i];
                                                                        cout << "P" << i+1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << endl;
                                                                            }
                                                                            }