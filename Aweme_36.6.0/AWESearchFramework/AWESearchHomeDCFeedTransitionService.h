@class AWEDCFeedPageContext, UIView, NSIndexPath, UIViewController;

@interface AWESearchHomeDCFeedTransitionService : NSObject <AWEZoomTransitionOuterContextProvider>

@property (weak, nonatomic) UIViewController *container;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) UIView *transitionStartView;
@property (retain, nonatomic) NSIndexPath *transitionStartIndex;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (BOOL)zoomTransitionWantsTabBarBeStatic;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionShouldScreenSliced;
- (BOOL)zoomTransitionWantsTabBarAlphaAnimation;
- (BOOL)zoomTransitionWantsStaticTabBarAtTopLayer;
- (unsigned long long)zoomTransitionWantsAnimationOptions;
- (BOOL)zoomTransitionWantsOptAnimation;
- (void)updateAnimationWithPercentage:(double)a0;
- (void).cxx_destruct;
- (void)finishAnimation;
- (void)cancelAnimation;

@end
