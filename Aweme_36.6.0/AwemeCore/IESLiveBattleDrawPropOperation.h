@class IESLiveBattleDrawPropNode, IESLiveAnimatedImageView, NSString;

@interface IESLiveBattleDrawPropOperation : NSObject <CAAnimationDelegate>

@property (retain, nonatomic) IESLiveBattleDrawPropNode *animationNode;
@property (retain, nonatomic) IESLiveAnimatedImageView *animationPlayer;
@property (copy, nonatomic) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTask;
- (id)initWithNode:(id)a0 DIContext:(id)a1;
- (void)playTaskCompletedWithReason:(id)a0;
- (void)executeDropAnimation;
- (id)executeCoinMoveAnimationFromStart:(struct CGPoint { double x0; double x1; })a0 toTarget:(struct CGPoint { double x0; double x1; })a1;
- (id)executeGiftIconScaleAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)cancelTask;

@end
