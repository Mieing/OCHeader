@class NSObject, AWEClientAILLMDelayTaskScheduler, AWEClientAILLMTask, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEClientAILLMTaskManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) AWEClientAILLMTask *processingTask;
@property (retain, nonatomic) AWEClientAILLMDelayTaskScheduler *delayTaskScheduler;
@property (readonly, nonatomic) long long taskCount;

- (void)cancelTaskWithGroupName:(id)a0;
- (void)processNextTask;
- (void)p_cancelTask:(id)a0 withReason:(unsigned long long)a1 shouldRemoveTask:(BOOL)a2;
- (BOOL)shouldCancelTask:(id)a0 withGroupName:(id)a1;
- (void)removeCurrentAndProcessNextTask:(id)a0;
- (void)addTask:(id)a0;
- (void)cancelTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelAllTasks;

@end
