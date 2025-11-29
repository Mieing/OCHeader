@class NSObject;
@protocol OS_dispatch_queue;

@interface RxQueueScheduler : RxScheduler

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (unsigned long long)wallTimeWithDate:(id)a0;

- (id)after:(id)a0 schedule:(id /* block */)a1;
- (id)after:(id)a0 repeatingEvery:(double)a1 withLeeway:(double)a2 schedule:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)dealloc;
- (id)schedule:(id /* block */)a0;

@end
