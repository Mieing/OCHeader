@class NSTimer;

@interface BUConditionTracker : NSObject

@property (copy, nonatomic) id /* block */ condition;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSTimer *timer;

- (void)_invokeTrack;
- (id)initWithConditon:(id /* block */)a0 action:(id /* block */)a1 retryCount:(long long)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
