@class NSMutableArray;

@interface WCFinderPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableArray *heap;

- (id)init;
- (void)insert:(id)a0;
- (id)getMax;
- (id)popMax;
- (void)swim:(long long)a0 atHeap:(id)a1;
- (void)sink:(long long)a0 atHeap:(id)a1;
- (int)compare:(id)a0 with:(id)a1;
- (BOOL)contains:(id)a0;
- (id)getTaskById:(id)a0;
- (id)getTaskListByGroupId:(id)a0;
- (void)removeTaskById:(id)a0;
- (unsigned long long)taskCount;
- (void)removeTaskByGroupId:(id)a0;
- (void)removeExpiredTasksAtHeap:(id)a0;
- (void).cxx_destruct;

@end
