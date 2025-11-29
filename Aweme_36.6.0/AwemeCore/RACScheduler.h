@class NSString;

@interface RACScheduler : NSObject

@property (readonly, copy, nonatomic) NSString *name;

+ (id)schedulerWithPriority:(long long)a0;
+ (id)subscriptionScheduler;
+ (id)schedulerWithPriority:(long long)a0 name:(id)a1;
+ (BOOL)isOnMainThread;
+ (id)currentScheduler;
+ (id)mainThreadScheduler;
+ (id)immediateScheduler;
+ (id)scheduler;

- (id)afterDelay:(double)a0 schedule:(id /* block */)a1;
- (void)performAsCurrentScheduler:(id /* block */)a0;
- (void)scheduleRecursiveBlock:(id /* block */)a0 addingToDisposable:(id)a1;
- (id)scheduleRecursiveBlock:(id /* block */)a0;
- (id)after:(id)a0 schedule:(id /* block */)a1;
- (id)after:(id)a0 repeatingEvery:(double)a1 withLeeway:(double)a2 schedule:(id /* block */)a3;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (id)schedule:(id /* block */)a0;

@end
