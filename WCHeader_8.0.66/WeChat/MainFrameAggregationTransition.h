@class NSString, UIScreenEdgePanGestureRecognizer, UIView, UIPanGestureRecognizer;
@protocol MainFrameAggregationTransitionDelegate;

@interface MainFrameAggregationTransition : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isInteractivePop;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *interactivePopGesture;
@property (nonatomic) struct CGPoint { double x; double y; } panBeginPoint;
@property (nonatomic) long long panDriect;
@property (retain, nonatomic) UIView *fromSnapshtoView;
@property (retain, nonatomic) UIView *tabbarSnapshotView;
@property (nonatomic) BOOL isPush;
@property (nonatomic) BOOL isInTransition;
@property (retain, nonatomic) UIView *animateBackgroundView;
@property (retain, nonatomic) UIView *animateContentView;
@property (retain, nonatomic) UIView *animateBottomView;
@property (weak, nonatomic) id<MainFrameAggregationTransitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)installPanGestureToView:(id)a0;
- (id)animatedTransitionRespondViewController;
- (void)initTabBarSnapshot:(id)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onInteractivePopGesture:(id)a0;
- (BOOL)wantsInteractiveStart;
- (void).cxx_destruct;

@end
