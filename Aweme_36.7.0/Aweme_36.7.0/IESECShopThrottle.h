@class NSObject;
@protocol OS_dispatch_queue;

@interface IESECShopThrottle : NSObject {
    BOOL _inThrottle;
    double _lastThrottleTime;
    id /* block */ _taskInQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double intervalSeconds;
@property (nonatomic) unsigned long long options;

+ (id)throttleWithQueue:(id)a0 intervalSeconds:(double)a1 options:(unsigned long long)a2;

- (void)throttle:(id /* block */)a0;
- (void).cxx_destruct;

@end
