@class IESLLTempoRunLoopDispatchConfig, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLLTempoRunLoopDispatch : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *taskSemaphore;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (retain, nonatomic) IESLLTempoRunLoopDispatchConfig *config;

- (void)executeTask;
- (void)addRunLoopObserver;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id /* block */)a0;
- (void)dealloc;

@end
