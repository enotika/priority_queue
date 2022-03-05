#include <iostream>
#include "priority_queue.h"
using namespace std;
int main() {
	PriorityQueue<int> queue;
	PriorityQueue<int> queue2;
	int type;
	do {
		system("cls");
		cout << "enter type of request\n";
		cout << "1: push\n";
		cout << "2: getsize\n";
		cout << "3: get front element's value\n";
		cout << "4: get front element's priority\n";
		cout << "5: get count of high priority\n";
		cout << "6: get count of medium priority\n";
		cout << "7: get count of low priority\n";
		cout << "8: check if queue is empty\n";
		cout << "9: pop element\n";
		cout << "10: queue2 = queue\n";
		cout << "11: queue2 = queue with moving\n";
		cout << "12: queue3(queue)\n";
		cout << "13: queue3(queue) with moving\n";
		cout << "0:end work\n";
		cin >> type;
		switch (type) {
			int a, priority;
		case 1:
			cin >> a >> priority;
			switch (priority) {
			case 1: {
				queue.Push(a, PriorityQueue<int>::Priority::high);
				break;
			}
			case 2: {
				queue.Push(a, PriorityQueue<int>::Priority::medium);
				break;
			}
			case 3: {
				queue.Push(a, PriorityQueue<int>::Priority::low);
				break;
			}
			}
			system("pause");
			break;
		case 2:
			cout << queue.Size() << endl;
			system("pause");
			break;
		case 3:
			cout << queue.GetValueOfHead() << endl;
			system("pause");
			break;
		case 4:
			cout << static_cast<int>(queue.GetPriorityOfHead()) << endl;
			system("pause");
			break;
		case 5:
			cout << queue.GetCountOfHighPriority() << endl;
			system("pause");
			break;
		case 6:
			cout << queue.GetCountOfMediumPriority() << endl;
			system("pause");
			break;
		case 7:
			cout << queue.GetCountOfLowPriority() << endl;
			system("pause");
			break;
		case 8:
			if (queue.IsEmpty()) {
				cout << "queue is empty" << endl;
			}
			else {
				cout << "queue is not empty" << endl;
			}
			system("pause");
			break;
		case 9:
			queue.Pop();
			system("pause");
			break;
		case 10:
			queue2 = queue;
			system("pause");
			break;
		case 11:
			queue2 = std::move(queue);
			system("pause");
			break;
		case 12: {
			PriorityQueue<int> queue3(queue);
			system("pause");
			break;
		}
		case 13: {
			PriorityQueue<int> queue3(std::move(queue));
			system("pause");
			break;
		}
		default:
			if (type != 0) {
				cout << "Wrong number\n";
				system("pause");
			}
			break;
		}
	} while (type != 0);
	return 0;
}
