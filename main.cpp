#include <iostream>
using namespace std;
int main() {
    string name;
    int currentStation;
    int destinationStation;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Welcome to New York City, " << name << "!\n" << "This is the M train running through Manhattan." << endl;
    cout << "M Train Manhattan Stops (Inbound via 6th Ave) \n";
    cout << "1. 5 Av/53 St\n";
    cout << "2. 47-50 Sts-Rockefeller Ctr\n";
    cout << "3. 42 St-Bryant Pk\n";
    cout << "4. 34 St-Herald Sq\n";
    cout << "5. 23 St\n";
    cout << "6. 14 St\n";
    cout << "7. W 4 St-Washington Sq\n";
    cout << "8. Broadway-Lafayette St\n";
    cout << "9. Essex St\n";

    cout << "Enter your CURRENT station number (1-9): ";
    cin >> currentStation;
  while (currentStation < 1 || currentStation > 9) {
    cout << "Invalid station! Please enter a number between 1 and 9: ";
    cin >> currentStation;
}

    cout << "Enter your DESTINATION station number (1-9): ";
    cin >> destinationStation;
  while (destinationStation < 1){
    cout << "Invalid station! Please enter a number between 1 and 9: ";
    cin >> destinationStation;
}
    while (destinationStation > 9){
        cout << "You are leaving Manhattan. I only work in Manhattan. Please enter a number between 1 and 9: ";
        cin >> destinationStation;
    }

    cout << "* Your Current Station: ";
  if (currentStation == 1) {
    cout << "5 Av/53 St (Midtown) -> Right next to MoMA and iconic luxury shopping spots.";
} else if (currentStation == 2) {
    cout << "47-50 Sts-Rockefeller Ctr -> Home to Radio City Music Hall, NBC Studios, and the famous Rockefeller Christmas tree.";
} else if (currentStation == 3) {
    cout << "42 St-Bryant Pk -> Features a beautiful public park next to the historic NY Public Library Main Branch.";
} else if (currentStation == 4) {
    cout << "34 St-Herald Sq -> Steps away from the massive flagship Macy's department store and the Empire State Building.";  
} else if (currentStation == 5) {
    cout << "23 St (Chelsea) -> A historic neighborhood known for its vibrant art galleries and the High Line elevated park.";
} else if (currentStation == 6) {
    cout << "14 St (Union Square Area) -> Close to the historic building architecture of the Ladies' Mile District.";
} else if (currentStation == 7) {
    cout << "W 4 St-Washington Sq (Greenwich Village) -> The historic heart of NYC's jazz clubs, street performers, and the iconic Washington Square Arch.";
} else if (currentStation == 8) {
    cout << "Broadway-Lafayette St (SoHo) -> Famous for high-end fashion boutiques, cobblestone streets, and trendy art spaces.";
} else if (currentStation == 9) {
    cout << "Essex St (Lower East Side) -> Just west of the Williamsburg Bridge where you can walk or bike across to Brooklyn.";
}
    cout << "\n";
  if (currentStation != destinationStation) {
    cout << "* Your Destination: ";
  if (destinationStation == 1) {
    cout << "5 Av/53 St (Midtown) -> Right next to MoMA and iconic luxury shopping spots.";
} else if (destinationStation == 2) {
    cout << "47-50 Sts-Rockefeller Ctr -> Home to Radio City Music Hall, NBC Studios, and the famous Rockefeller Christmas tree.";
} else if (destinationStation == 3) {
    cout << "42 St-Bryant Pk -> Features a beautiful public park next to the historic NY Public Library Main Branch.";
} else if (destinationStation == 4) {
    cout << "34 St-Herald Sq -> Steps away from the massive flagship Macy's department store and the Empire State Building.";  
} else if (destinationStation == 5) {
    cout << "23 St (Chelsea) -> A historic neighborhood known for its vibrant art galleries and the High Line elevated park.";
} else if (destinationStation == 6) {
    cout << "14 St (Union Square Area) -> Close to the historic building architecture of the Ladies' Mile District.";
} else if (destinationStation == 7) {
    cout << "W 4 St-Washington Sq (Greenwich Village) -> The historic heart of NYC's jazz clubs, street performers, and the iconic Washington Square Arch.";
} else if (destinationStation == 8) {
    cout << "Broadway-Lafayette St (SoHo) -> Famous for high-end fashion boutiques, cobblestone streets, and trendy art spaces.";
} else if (destinationStation == 9) {
    cout << "Essex St (Lower East Side) -> Just west of the Williamsburg Bridge where you can walk or bike across to Brooklyn.";
}
cout << "\n";
}

if (destinationStation > currentStation) {
int stopsNeeded = destinationStation - currentStation;
cout << "\nYou need to ride " << stopsNeeded << " stop(s) to reach your destination.\n";
}
else if (destinationStation < currentStation) {
cout << "\nThat destination is behind you! This app currently calculates southbound/eastbound trips toward Essex St.\n";
}
else {
cout << "\nYou are already at your destination!\n";
}
return 0;
}
