@class NSOperationQueue, NSMapTable;

@interface CachalotLinkedTaskScheduler : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMapTable *operationTable;

- (BOOL)addTask:(id /* block */)a0 withIdentifier:(id)a1 willExecuteBlock:(id /* block */)a2 didExecuteBlock:(id /* block */)a3;
- (BOOL)addTask:(id /* block */)a0 withIdentifier:(id)a1 willExecuteBlock:(id /* block */)a2 didExecuteBlock:(id /* block */)a3 priority:(long long)a4;
- (BOOL)taskExistsWithIdentifier:(id)a0;
- (BOOL)addTask:(id /* block */)a0 withIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)resume;
- (void)dealloc;
- (BOOL)cancelTaskWithIdentifier:(id)a0;
- (void)cancelAllTasks;

@end
