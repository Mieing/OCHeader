@class NSMutableArray, MMLiveMorphDismissTargetExtraConfig, NSString, UIView, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol MMLiveMorphDismissSource, MMLiveMorphInteractiveDismissTransitionAnimatorDelegate, UIViewControllerContextTransitioning;

@interface MMLiveMorphInteractiveDismissTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIView *videoView;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (retain, nonatomic) MMLiveMorphDismissTargetExtraConfig *extraConfig;
@property (retain, nonatomic) UIView *videoMaskView;
@property (retain, nonatomic) UIView *customSnapView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) id<MMLiveMorphDismissSource> sourceContext;
@property (nonatomic) unsigned long long lockDirection;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive;
@property (retain, nonatomic) UIView *fromView;
@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) UIView *toView;
@property (weak, nonatomic) UIView *fromBarView;
@property (weak, nonatomic) UIView *toBarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromViewInitialFrame;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) BOOL finishBeforeAnimation;
@property (nonatomic) BOOL animationRunning;
@property (nonatomic) long long animCnt;
@property (retain, nonatomic) NSMutableArray *completions;
@property (weak, nonatomic) id<MMLiveMorphInteractiveDismissTransitionAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGesture:(id)a0 transitionParameters:(id)a1 direction:(unsigned long long)a2;
- (void)dealloc;
- (BOOL)isHorizontalTransition;
- (void)handleGesture:(id)a0;
- (double)interpolationValue:(double)a0 end:(double)a1 progress:(double)a2;
- (void)dragWithProgress:(double)a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)_endCardDragging:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 isFast:(BOOL)a2 progress:(double)a3;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)onAnimationEnd:(BOOL)a0;
- (void)_endDragAnimation:(BOOL)a0 progress:(double)a1;
- (void)_cancelAnimation:(double)a0;
- (void)_finishAnimation:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCurrentSourceVideoFrame;
- (void).cxx_destruct;

@end
