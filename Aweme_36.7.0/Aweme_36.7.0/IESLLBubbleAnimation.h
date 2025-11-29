@class CAMediaTimingFunction, UIView;

@interface IESLLBubbleAnimation : NSObject

@property (copy, nonatomic) id /* block */ animationBlock;
@property (retain, nonatomic) IESLLBubbleAnimation *nextAnimation;
@property (weak, nonatomic) IESLLBubbleAnimation *previousAnimation;
@property (nonatomic) long long loopRepeat;
@property (nonatomic) BOOL loopStartFlag;
@property (nonatomic) BOOL loopModeFlag;
@property (nonatomic) long long parallelsCount;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) BOOL shouldStop;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) struct CAFrameRateRange { float minimum; float maximum; float preferred; } preferredFrameRateRange;
@property (retain, nonatomic) UIView *bubble;

- (id)initWithBubble:(id)a0;
- (id)nextAnimationWithCurrentConfig;
- (id /* block */)run:(id /* block */)a0 inLoopMode:(BOOL)a1 noForward:(BOOL)a2;
- (void)_runParallel:(id)a0 afterwards:(id /* block */)a1;
- (id /* block */)rotateTo;
- (id /* block */)dismiss;
- (void).cxx_destruct;
- (id /* block */)scale;
- (id /* block */)timing;
- (id /* block */)stop;
- (void)_run:(id /* block */)a0;
- (id /* block */)framerate;
- (id /* block */)run;
- (void)dealloc;
- (id /* block */)run:(id /* block */)a0;
- (id /* block */)loop;
- (id /* block */)reveal;
- (id /* block */)loopStart;
- (id /* block */)sleep;
- (id /* block */)move;
- (id /* block */)parallel;

@end
