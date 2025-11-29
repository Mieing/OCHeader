@class NSString, NSMutableArray;
@protocol IESLiveTaskExcuted;

@interface IESLivePriorityQueue : NSObject <IESLiveSchedulerProtocol> {
    NSMutableArray *_queue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    id<IESLiveTaskExcuted> _observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeTask;
- (id)topTask;
- (void)addTask:(id /* block */)a0 name:(id)a1 identifier:(id)a2 priority:(long long)a3;
- (void)addTask:(id /* block */)a0 priority:(long long)a1;
- (BOOL)executeTaskWithName:(id)a0 identifier:(id)a1;
- (void)clearTasksWithIdentifiers:(id)a0;
- (id)initWihExcuted:(id)a0;
- (BOOL)empty;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;
- (long long)size;
- (void)clearTasks;

@end
