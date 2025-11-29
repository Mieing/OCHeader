@class NSTimer;

@interface AWEIMActiveUserAccuracyTrackTimer : NSObject

@property (nonatomic) double interval;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long rankIndex;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double firstAutoTriggerDelay;

+ (id)trackTimerWithInterval:(double)a0 block:(id /* block */)a1;

- (void)p_fireOnce;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithInterval:(double)a0 block:(id /* block */)a1;

@end
