@interface TIMXThrottle_Old : NSObject

@property (nonatomic) double timeInterval;
@property (nonatomic) double lastThrottleTime;
@property (nonatomic) BOOL hasThrottlePlan;

- (void)execBlock:(id /* block */)a0;
- (id)initWithTimeInterval:(double)a0;

@end
