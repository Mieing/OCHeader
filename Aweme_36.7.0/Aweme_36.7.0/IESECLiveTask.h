@class IESECLiveTaskQueue, IESECLiveTaskGroup, NSString;

@interface IESECLiveTask : NSObject <IESECLivePriorityComparable, IESECLiveAbstractConsumer> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (copy, nonatomic) id /* block */ accessCompletion;
@property long long state;
@property (weak) IESECLiveTaskGroup *taskGroup;
@property (weak) IESECLiveTaskQueue *taskQueue;
@property (readonly, nonatomic) NSString *taskId;
@property (getter=isRetryable) BOOL retryable;
@property long long priority;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPreemptive;
- (BOOL)isOpposite:(id)a0;
- (long long)comparePriortyWith:(id)a0;
- (void)complete;
- (void).cxx_destruct;
- (void)clear;
- (void)execute;
- (void)access;
- (id)init;
- (void)start;
- (BOOL)isDuplicate:(id)a0;
- (void)cancel;
- (void)fulfill;
- (void)resign;

@end
