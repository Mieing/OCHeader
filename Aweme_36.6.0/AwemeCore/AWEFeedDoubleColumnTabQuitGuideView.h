@class UIColor, NSString, LOTAnimationView, UILabel, UILongPressGestureRecognizer;

@interface AWEFeedDoubleColumnTabQuitGuideView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (nonatomic) double bigCircleRadius;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *guideTextLabel;
@property (nonatomic) BOOL isBlockInvoked;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) UIColor *topColor;
@property (retain, nonatomic) UIColor *bottomColor;
@property (nonatomic) double maskStartY;
@property (retain, nonatomic) UIColor *topBackgroundColor;
@property (retain, nonatomic) UILongPressGestureRecognizer *gesture;
@property (nonatomic) long long animationLoops;
@property (retain, nonatomic) NSString *guideText;
@property (copy, nonatomic) id /* block */ bgClickBlock;
@property (copy, nonatomic) id /* block */ circleClickBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showOnView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 TargetPoint:(struct CGPoint { double x0; double x1; })a1 topColor:(id)a2 bottomColor:(id)a3 maskStartY:(double)a4 topBackgroundColor:(id)a5;
- (void)setupLottieAndText;
- (void)showOnView:(id)a0 withAnimated:(BOOL)a1;
- (void)showOnView:(id)a0 withAnimated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleGesture:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
