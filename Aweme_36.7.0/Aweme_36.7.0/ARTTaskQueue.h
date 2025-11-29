@class NSOperationQueue, NSHashTable;

@interface ARTTaskQueue : NSObject {
    struct LockObj { struct RWLock { struct shared_timed_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x0; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x1; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x2; unsigned int x3; } x0; } x0; } x0; } *_taskRWLock;
}

@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSHashTable *tasks;
@property (nonatomic) long long maxNumOfTasks;

+ (id)defaultQueue;

- (void)runTask:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
