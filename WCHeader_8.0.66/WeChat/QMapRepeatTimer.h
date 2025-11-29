@class NSTimer;

@interface QMapRepeatTimer : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL addedInToRunloop;
@property (nonatomic) double timeInterval;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) unsigned long long repeatCount;
@property (nonatomic) unsigned long long firedCount;

- (BOOL)isOutOfMaxRetry;
- (void)handleTimerFire;
- (void)startTimerImmediately:(BOOL)a0;
- (void)invalidate;
- (void)runImmediately;
- (void)run;
- (void)setupTimer;
- (id)initWithTimeInterval:(double)a0 repeatCount:(unsigned long long)a1 block:(id /* block */)a2;
- (void).cxx_destruct;

@end
