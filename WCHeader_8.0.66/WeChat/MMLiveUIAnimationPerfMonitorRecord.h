@class CALayer, CAAnimation;

@interface MMLiveUIAnimationPerfMonitorRecord : MMLiveAnimationPerfMonitorRecord

@property (weak, nonatomic) CALayer *animationLayer;
@property (weak, nonatomic) CAAnimation *animation;

+ (id)getMonitorUIAnimationKey:(id)a0;
+ (id)tryGetAnimationState:(id)a0;
+ (double)getAnimationAbsoluteBeginTime:(id)a0;

- (id)initWithAnimationLayer:(id)a0 animationView:(id)a1 animation:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currPresentFrame;
- (void)parseAnimation;
- (BOOL)isAnimationValid;
- (id)getRecordDesc;
- (id)getUniqueKey;
- (void).cxx_destruct;

@end
