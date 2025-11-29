@class NSString, CAKeyframeAnimation, UIView, ACCAnimatedButton;

@interface AWEVideoGameCameraContainerView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *blurEffectView;
@property (retain, nonatomic) CAKeyframeAnimation *animation;
@property (copy, nonatomic) id /* block */ appearCompletion;
@property (copy, nonatomic) id /* block */ disappearCompletion;
@property (retain, nonatomic) ACCAnimatedButton *closeBtn;
@property (nonatomic) BOOL isShowingForEffectControlGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
