@class NSString;

@interface RxScheduler : NSObject

@property (readonly, nonatomic) NSString *name;

+ (id)schedulerWithPriority:(long long)a0;
+ (id)schedulerWithQueue:(id)a0 name:(id)a1;
+ (id)schedulerWithPriority:(long long)a0 name:(id)a1;
+ (BOOL)isOnMainThread;
+ (id)currentScheduler;
+ (id)schedulerWithRunLoop:(id)a0 name:(id)a1;
+ (BOOL)supportRunLoop;
+ (id)schedulerWithRunLoop:(id)a0;
+ (id)schedulerWithQueue:(id)a0;
+ (id)immediateScheduler;
+ (id)scheduler;
+ (id)mainScheduler;

- (id)afterDelay:(double)a0 schedule:(id /* block */)a1;
- (id)pschedule:(id /* block */)a0;
- (id)afterDelay:(double)a0 pschedule:(id /* block */)a1;
- (void)performAsCurrentScheduler:(id /* block */)a0;
- (id)after:(id)a0 schedule:(id /* block */)a1;
- (id)after:(id)a0 repeatingEvery:(double)a1 withLeeway:(double)a2 schedule:(id /* block */)a3;
- (id)after:(id)a0 pschedule:(id /* block */)a1;
- (id)after:(id)a0 repeatingEvery:(double)a1 withLeeway:(double)a2 pschedule:(id /* block */)a3;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (id)schedule:(id /* block */)a0;

@end
