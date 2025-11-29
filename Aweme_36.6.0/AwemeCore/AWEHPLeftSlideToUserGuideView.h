@class CAGradientLayer, AWEHPLeftSlideToUserGuideViewConfig, UIImageView, NSString, YYLabel;

@interface AWEHPLeftSlideToUserGuideView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) AWEHPLeftSlideToUserGuideViewConfig *config;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIImageView *guideImage;
@property (copy, nonatomic) id /* block */ dismissCallBack;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) struct CGPoint { double x; double y; } startPoints;
@property (nonatomic) double controlThreshold;
@property (nonatomic) long long animationLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)maskPath:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; double x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; double x9; })a0;
- (void)stopAutoDismissAnimation;
- (void)resetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAppear:(BOOL)a1;
- (void)showWaveAnimationAndAutoDismiss;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; double x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; double x9; })createControlPointsContext:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0 isGuideAnimation:(BOOL)a1;
- (void)startAnimationPhaseOne;
- (void)startAnimationPhaseTwo;
- (id)guideText:(BOOL)a0;
- (void)showWithDismissCallBack:(id /* block */)a0 needAnimationAndAutoDismiss:(BOOL)a1;
- (void)updateFrameWithContext:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
