@class RxScheduler;
@protocol RxSchedulerCancellable;

@interface __RxRunLoopSchedulerTimerTask : NSObject

@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RxSchedulerCancellable> token;
@property (readonly, copy, nonatomic) id /* block */ block;

- (id)initWithScheduler:(id)a0 token:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)invoke;

@end
