@class CADisplayLink;

@interface LynxGestureFlingTrigger : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) CADisplayLink *displayLink;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) double decelerationRate;
@property (readonly, nonatomic) double dCoefficient;
@property (readonly, nonatomic) double threshold;
@property (readonly, nonatomic) double durationX;
@property (readonly, nonatomic) double durationY;
@property (readonly, nonatomic) BOOL flingX;
@property (readonly, nonatomic) BOOL flingY;
@property (readonly, nonatomic) BOOL proMotion;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) long long tickCount;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } velocity;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } distance;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } lastDistance;

- (BOOL)startWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)dealloc;
- (BOOL)isFinished;
- (void)tick:(id)a0;

@end
