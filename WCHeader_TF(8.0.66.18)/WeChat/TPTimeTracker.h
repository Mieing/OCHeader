@class NSDate;

@interface TPTimeTracker : NSObject

@property (retain, nonatomic) NSDate *beginDate;
@property (nonatomic) long long intervalMs;
@property (nonatomic) unsigned long long lastState;

- (id)init;
- (long long)totalIntervalMs;
- (void)run;
- (void)pause;
- (void)stop;
- (void)invalidate;
- (void).cxx_destruct;

@end
