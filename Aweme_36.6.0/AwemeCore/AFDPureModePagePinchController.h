@class UIView, NSString, CADisplayLink, UIPinchGestureRecognizer, UIImageView, UIButton, UIControl, UIPanGestureRecognizer, AFDPureModePageScaleModeInteractionContainer, UILabel;

@interface AFDPureModePagePinchController : AWEBaseController <UIGestureRecognizerDelegate, AFDPureModePageControllerProtocol>

@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gestureStartFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } standardTransform;
@property (nonatomic) struct CGPoint { double x; double y; } lastGesturePosition;
@property (nonatomic) long long lastNumberTouches;
@property (retain, nonatomic) AFDPureModePageScaleModeInteractionContainer *interactionContainer;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIControl *resetContainer;
@property (retain, nonatomic) UIImageView *arrowCircleIcon;
@property (retain, nonatomic) UILabel *resetLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (nonatomic) BOOL enterScaleModeFromScaleMode;
@property (nonatomic) BOOL hasEnteredLargeScale;
@property (nonatomic) double playbackRateInScaleMode;
@property (nonatomic) double enterScaleModeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)didChangeAlbumIndex:(long long)a0 animated:(BOOL)a1;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)showInScaleMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realMediaFrame;
- (void)startDisplayLink;
- (void)changeToAnchorPoint:(struct CGPoint { double x0; double x1; })a0 withoutMovingForView:(id)a1;
- (void)transformTargetViewToOriginScale;
- (id)pageContainerView;
- (void)exitScaleModeWithAnimated:(BOOL)a0 method:(long long)a1;
- (void)exitScaleModeWithAnimated:(BOOL)a0 method:(long long)a1 completion:(id /* block */)a2;
- (void)trackExitScaleModeWithMethod:(long long)a0 scale:(double)a1;
- (struct CGPoint { double x0; double x1; })pointOutOfScreenBoundaryWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 realMediaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (double)maxPinchScale;
- (void)updateDeceleration;
- (void)enterScaleMode;
- (void)transformTargetViewToPosition:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1 numberOfTouches:(unsigned long long)a2;
- (void)trackEnterScaleModeWithMethod:(id)a0 scale:(double)a1;
- (void)transformTargetViewToMaxScale;
- (void)transformTargetViewToScreenBoundary;
- (void)transformTargetViewWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)handleClickPlayButton;
- (void)becomeActive;
- (void)willResignActive;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)stopDisplayLink;
- (void)handlePanGestureRecognizer:(id)a0;
- (void)handlePinchGestureRecognizer:(id)a0;

@end
