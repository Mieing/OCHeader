@class NSObject;
@protocol OS_dispatch_queue;

@interface AFDRangeDBQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)dispatchAsyncWhenReadWrite:(id /* block */)a0;
+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)init;

@end
