@class CADisplayLink;

@interface DUXScrollViewDecelerationCalculator : NSObject

@property (nonatomic) double duration;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double firstFrameTimestamp;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL running;
@property (copy, nonatomic) id /* block */ animations;
@property (nonatomic) double factor;

- (void)handleFrame;
- (void)updateWithInitialVelocity:(double)a0;
- (double)destinationAtTime:(double)a0;
- (void)invalidateLink;
- (double)threshold;
- (void).cxx_destruct;
- (id)init;
- (void)setupDisplayLink;
- (void)resetData;
- (void)dealloc;
- (double)decelerationRate;
- (void)animateWithDuration:(double)a0 animations:(id /* block */)a1;

@end
