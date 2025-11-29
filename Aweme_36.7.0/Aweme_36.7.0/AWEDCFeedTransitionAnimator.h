@class AWEDCFeedTransitionCommonAnimatorProvider, AWEFeedTableViewController, AWEDCFeedTransitionAnimatorContext, AWEDCFeedTransitionPinchAnimatorProvider;

@interface AWEDCFeedTransitionAnimator : NSObject

@property (retain, nonatomic) AWEDCFeedTransitionAnimatorContext *enterContext;
@property (retain, nonatomic) AWEDCFeedTransitionAnimatorContext *exitContext;
@property (weak, nonatomic) AWEFeedTableViewController *feedTableVC;
@property (retain, nonatomic) AWEDCFeedTransitionPinchAnimatorProvider *pinchAnimatorProvider;
@property (retain, nonatomic) AWEDCFeedTransitionCommonAnimatorProvider *commonAnimatorProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pinchExitFrame;
@property (copy, nonatomic) id /* block */ enterAnimationWillBeginBlock;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultTransitionAnimationFrame;
+ (BOOL)currentAwemeDisablePinchOpt:(id)a0;

- (id)currentRecommendFeedTableController;
- (id)getCommonBackgroundView;
- (BOOL)shouldEnableEnterAnimation:(id)a0;
- (void)resetEnterContext;
- (void)updateSmallWindowShowTypeWithAweme;
- (void)preparePinchExitContext;
- (void)trackC2EnterEvent;
- (id)pinchAnimationView:(id)a0;
- (BOOL)shouldEnableExitAnimation:(id)a0;
- (void)clearInfoContext;
- (void)updateOutContainerWithSmallWindowVC;
- (void)manualContinueEnterAnimation;
- (void)cancelEnterAnimation;
- (void)resetExitContext;
- (id)enterContextWithDCController:(id)a0 entrance:(long long)a1;
- (id)exitContextWithDCController:(id)a0 entrance:(long long)a1;
- (BOOL)triggerEnterAnimationIfNeeded:(id)a0;
- (BOOL)triggerExitAnimationIfNeeded:(id)a0;
- (id)getFeedVideoController;
- (void).cxx_destruct;

@end
