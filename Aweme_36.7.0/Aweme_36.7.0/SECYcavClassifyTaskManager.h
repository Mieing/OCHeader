@class NSMutableDictionary;

@interface SECYcavClassifyTaskManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *tasks;

- (void)executeTasks;
- (id)mergeTasks:(id)a0;
- (void)dispatchToTasks:(id)a0 withResult:(id)a1;
- (unsigned long long)numOfTasks;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addTasks:(id)a0;

@end
