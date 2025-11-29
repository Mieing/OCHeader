@class NSString, NSDictionary, AWEDCFeedPageContext, AWEDCFeedEventDispatcher, NSIndexPath, UIView;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEDCFeedTransitionService : NSObject <AWEDCFeedTransitionServiceProtocol>

@property (weak, nonatomic) AWEDCFeedEventDispatcher *eventDispatcher;
@property (retain, nonatomic) UIView *transitionStartView;
@property (retain, nonatomic) NSIndexPath *transitionStartIndex;
@property (weak, nonatomic) id transitionToContextProvider;
@property (weak, nonatomic) id<AWEDCFeedListViewControllerProtocol> container;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (BOOL)zoomTransitionWantsTabBarBeStatic;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionShouldScreenSliced;
- (BOOL)zoomTransitionWantsTabBarAlphaAnimation;
- (BOOL)zoomTransitionWantsStaticTabBarAtTopLayer;
- (unsigned long long)zoomTransitionWantsAnimationOptions;
- (double)zoomTransitionDragAnimationDelayDurationWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)zoomTransitionWantsOptAnimation;
- (BOOL)zoomTransitionEnterOptAnimation;
- (void)zoomTransitionMagnifyStart;
- (void)updateAnimationWithPercentage:(double)a0;
- (BOOL)zoomTransitionOuterWantsBlackMaskView;
- (id)zoomTransitionOuterMaskViewColor;
- (BOOL)enableDCInnerQuitFastPan;
- (void).cxx_destruct;
- (id)init;
- (void)finishAnimation;
- (void)cancelAnimation;

@end
