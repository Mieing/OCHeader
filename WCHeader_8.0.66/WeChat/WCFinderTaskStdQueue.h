@class __begin_, NSString, __end_cap_, NSRecursiveLock, __end_;

@interface WCFinderTaskStdQueue : NSObject <WCFinderTaskSchedulerStrategyProtocol> {
    struct deque<WCFinderTaskFIFOTask *, std::allocator<WCFinderTaskFIFOTask *>> { struct __split_buffer<WCFinderTaskFIFOTask *__strong *, std::allocator<WCFinderTaskFIFOTask *__strong *>> { __begin_ ***__first_; __end_ ***x0; __end_cap_ ***x1; struct __compressed_pair<WCFinderTaskFIFOTask *__strong **, std::allocator<WCFinderTaskFIFOTask *__strong *>> { id **__value_; } x2; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<WCFinderTaskFIFOTask *>> { unsigned long long __value_; } __size_; } _deque;
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
- (id)createFinderTaskFIFOTaskMake:(id /* block */)a0 priority:(unsigned long long)a1 asyncEnd:(BOOL)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
