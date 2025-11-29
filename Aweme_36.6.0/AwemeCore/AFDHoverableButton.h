@class CABasicAnimation, CAAnimationGroup, NSString;

@interface AFDHoverableButton : UIButton <CAAnimationDelegate>

@property (retain, nonatomic) CABasicAnimation *basicAnimation1;
@property (retain, nonatomic) CABasicAnimation *basicAnimation2;
@property (retain, nonatomic) CABasicAnimation *alphaAnimation1;
@property (retain, nonatomic) CAAnimationGroup *aniGroup1;
@property (retain, nonatomic) CABasicAnimation *basicAnimation3;
@property (retain, nonatomic) CABasicAnimation *basicAnimation4;
@property (retain, nonatomic) CABasicAnimation *basicAnimation5;
@property (retain, nonatomic) CABasicAnimation *alphaAnimation2;
@property (retain, nonatomic) CAAnimationGroup *aniGroup2;
@property (copy, nonatomic) id /* block */ animationFinishblock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginFirstTouchAnimation;
- (void)beginSecondTouchAnimation;
- (void)beginImageViewAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
