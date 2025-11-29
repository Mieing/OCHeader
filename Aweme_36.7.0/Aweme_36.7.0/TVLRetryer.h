@class NSTimer, NSDate;

@interface TVLRetryer : NSObject {
    id /* block */ _tickBlock;
    double _timeInterval;
    long long _tickCount;
    NSDate *_startDate;
    NSTimer *_timer;
}

@property (readonly, getter=isValid) BOOL valid;

+ (id)retryerWithTimeInterval:(double)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)fireImmediately;
- (void)dealloc;
- (id)initWithTimeInterval:(double)a0 block:(id /* block */)a1;
- (long long)currentRetryCount;
- (void)tick;

@end
