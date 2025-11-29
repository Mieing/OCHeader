@class CADisplayLink;

@interface NunkiIdleExecutor : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastTargetTimestamp;
@property (nonatomic) BOOL ifSkip;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) long long normalFrameCount;

+ (void)executeBlock:(id /* block */)a0;

- (void)startDisplayLink;
- (void)checkIfIdleWithDisplayLink:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopDisplayLink;

@end
