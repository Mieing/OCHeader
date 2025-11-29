@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWEClientAILLMDelayTaskScheduler : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (void)startTask:(id /* block */)a0 withDelay:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
