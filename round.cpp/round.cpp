#include <iostream>
using namespace std;

int main() {
    int n, tq;
        int burst[10], remaining[10], wait[10] = {0}, tat[10];

            cout << "Enter number of processes: ";
                cin >> n;

                    cout << "Enter burst time:\n";
                        for (int i = 0; i < n; i++) {
                                cout << "P" << i + 1 << ": ";
                                        cin >> burst[i];
                                                remaining[i] = burst[i];
                                                    }

                                                        cout << "Enter time quantum: ";
                                                            cin >> tq;

                                                                int time = 0;
                                                                    bool done;

                                                                        do {
                                                                                done = true;
                                                                                        for (int i = 0; i < n; i++) {
                                                                                                    if (remaining[i] > 0) {
                                                                                                                    done = false;
                                                                                                                                    if (remaining[i] > tq) {
                                                                                                                                                        time += tq;
                                                                                                                                                                            remaining[i] -= tq;
                                                                                                                                                                                            } else {
                                                                                                                                                                                                                time += remaining[i];
                                                                                                                                                                                                                                    wait[i] = time - burst[i];
                                                                                                                                                                                                                                                        remaining[i] = 0;
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                } while (!done);

                                                                                                                                                                                                                                                                                                    cout << "\nProcess\tBurst\tWaiting\tTurnaround\n";
                                                                                                                                                                                                                                                                                                        for (int i = 0; i < n; i++) {
                                                                                                                                                                                                                                                                                                                tat[i] = burst[i] + wait[i];
                                                                                                                                                                                                                                                                                                                        cout << "P" << i + 1 << "\t" << burst[i]
                                                                                                                                                                                                                                                                                                                                     << "\t" << wait[i]
                                                                                                                                                                                                                                                                                                                                                  << "\t" << tat[i] << endl;
                                                                                                                                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                                                                                                                                          return 0;
                                                                                                                                                                                                                                                                                                                                                          }