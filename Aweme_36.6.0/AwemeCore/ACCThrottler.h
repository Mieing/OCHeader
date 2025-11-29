@class ACCRecursiveLock, NSObject;
@protocol OS_dispatch_queue;

@interface ACCThrottler : NSObject

@property (retain, nonatomic) ACCRecursiveLock *lockedWorkItem;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double intervalSeconds;

- (void)throttle:(id /* block */)a0;
- (id)initWith:(id)a0 intervalSeconds:(double)a1;
- (void).cxx_destruct;

@end
