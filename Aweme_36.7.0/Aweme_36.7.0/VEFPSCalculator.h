@interface VEFPSCalculator : NSObject

@property (nonatomic) unsigned long long counterType;
@property (nonatomic) double timeInterval;
@property (nonatomic) double firstFrameTime;
@property (nonatomic) unsigned long long arrivedFrames;
@property (nonatomic) unsigned long long *incomingFrameTimes;
@property (nonatomic) unsigned long long frameHistoryWindowMs;
@property (nonatomic) double incomingFrameRate;
@property (copy, nonatomic) id /* block */ FPSCallback;

- (id)initWithCounterType:(unsigned long long)a0 timeInterval:(double)a1;
- (void)frameArrived;
- (void)processIncomingFrameRate:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
