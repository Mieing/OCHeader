@class NSArray, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol UIViewAnimating, AWEIMSwipeable, AWEIMSwipeControllerDelegate;

@interface AWEIMSwipeController : NSObject <AWEIMSwipeActionsViewDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView<AWEIMSwipeable> *swipeable;
@property (weak, nonatomic) UIView *swipeActionsContainerView;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) id<UIViewAnimating> animator;
@property (nonatomic) double originalCenter;
@property (nonatomic) double scrollRatio;
@property (readonly, nonatomic) double elasticScrollRatio;
@property (weak, nonatomic) id<AWEIMSwipeControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__handleTapGesture:(id)a0;
- (void)__handlePanGesture:(id)a0;
- (void)swipeActionsView:(id)a0 didSelectAction:(id)a1;
- (void)hideSwipeWithAnimated:(BOOL)a0 complation:(id /* block */)a1;
- (void)showSwipeWithOrientation:(long long)a0 animated:(BOOL)a1 complation:(id /* block */)a2;
- (void)setOffset:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithSwipeable:(id)a0 actionsContainerView:(id)a1;
- (void)traitCollectionDidChangeFrom:(id)a0 to:(id)a1;
- (double)__targetCenterWithActive:(BOOL)a0;
- (void)__stopAnimatorIfNeeded;
- (BOOL)__showActionsViewForOrientation:(long long)a0;
- (void)__animateToOffset:(double)a0 withInitialVelocity:(double)a1 completion:(id /* block */)a2;
- (long long)__targetStateForVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)performWithAction:(id)a0;
- (void)__configureActionsViewWithActions:(id)a0 forOrientation:(long long)a1;
- (void)__animateWithDuration:(double)a0 toOffset:(double)a1 withInitialVelocity:(double)a2 completion:(id /* block */)a3;
- (void)__performWithAction:(id)a0 hide:(BOOL)a1;
- (void)__performFillActionWithAction:(id)a0 fillOption:(id)a1;
- (double)__activeTargetCenterKey;
- (void).cxx_destruct;
- (void)resetSwipe;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reset;

@end
