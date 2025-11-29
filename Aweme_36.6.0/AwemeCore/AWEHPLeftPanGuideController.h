@class NSString, UIViewController;
@protocol AWEAwemeConcernLeftPanGuideProtocol;

@interface AWEHPLeftPanGuideController : AWEBaseController <AWEAwemeConcernFeedLeftPanGuideViewControllerDelegate, AWEHPHomeContainerViewControllerLifeCycle>

@property (retain, nonatomic) UIViewController<AWEAwemeConcernLeftPanGuideProtocol> *concernFeedLeftPanGuideController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)hpSlidingViewControllerWillTransition:(id)a0;
- (void)hpDidStartTransitionWithContext:(id)a0;
- (void)hpDidChangePercentDrivenTransitionWithContext:(id)a0;
- (void)hpDidCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)hpDidPopDoneTransitionWithContext:(id)a0;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (void)__initConcernLeftPanVC;
- (void)__responseToPercentDrivenLeftPan:(long long)a0 context:(id)a1;
- (BOOL)isLocatedInConcernFeed;
- (BOOL)isDisplayingSkyLightViewInConcernFeed;
- (BOOL)canLeftPanGuideShow;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)isSplitScreen;
- (void)viewWillDisappear;

@end
