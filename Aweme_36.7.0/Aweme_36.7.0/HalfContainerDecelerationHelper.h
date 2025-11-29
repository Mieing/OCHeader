@class CADisplayLink;

@interface HalfContainerDecelerationHelper : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startVelocityY;
@property (nonatomic) double currentVelocityY;
@property (nonatomic) double startTime;
@property (nonatomic) double bounceStartTime;
@property (nonatomic) double displayCurrentTime;
@property (nonatomic) double remainDecelarationOffset;
@property (nonatomic) BOOL shouldBounce;
@property (nonatomic) BOOL isBouncing;
@property (nonatomic) BOOL canStop;
@property (nonatomic) double lastBounceOffset;
@property (copy, nonatomic) id /* block */ callBack;

- (double)decelerationOffsetWithInitialVelocityY:(double)a0;
- (BOOL)willTriggerStopClinic;
- (void)startDecelerationWithDecelerationOffset:(double)a0 initialVelocityY:(double)a1 shouldBounce:(BOOL)a2 callBack:(id /* block */)a3;
- (double)clinicVelocity;
- (void)didTriggerDisplayLink;
- (BOOL)shouldCutVelocityY:(double)a0;
- (void).cxx_destruct;
- (void)reset;

@end
