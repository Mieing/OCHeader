@class NSRecursiveLock, NSString, __end_cap_, __end_;

@interface WCFinderTaskPriorityQueue : NSObject <WCFinderTaskSchedulerStrategyProtocol> {
    struct priority_queue<WCFinderTaskPQTask *, std::vector<WCFinderTaskPQTask *>, WCFinderTaskPQCMP> { struct vector<WCFinderTaskPQTask *, std::allocator<WCFinderTaskPQTask *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<WCFinderTaskPQTask *__strong *, std::allocator<WCFinderTaskPQTask *>> { id *__value_; } x1; } c; struct WCFinderTaskPQCMP { } comp; } _queue;
    NSRecursiveLock *_recursiveLock;
    BOOL _ignoreNonEssentialTasks;
}

@property (nonatomic) unsigned long long maxNumberOfTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)empty;
- (unsigned long long)numberOfTasks;
- (void)addTask:(id /* block */)a0 priority:(long long)a1 asyncEnd:(BOOL)a2;
- (void)executeTask;
- (void)removeTopTask;
- (void)clearTasks;
- (void)ignoreNonEssentialTasks:(BOOL)a0;
- (id)createFinderTaskPQTask:(id /* block */)a0 priority:(unsigned long long)a1 time:(double)a2 asyncEnd:(BOOL)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
