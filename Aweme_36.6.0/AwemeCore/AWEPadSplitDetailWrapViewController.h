@class NSString, UIViewController;

@interface AWEPadSplitDetailWrapViewController : UIViewController <AWEPadSplitViewPrimaryViewLayoutController, AWEAwemeDetailTableViewControllerOuterContainerProtocol>

@property (nonatomic) double offsetX;
@property (weak, nonatomic) UIViewController *tableViewController;
@property (nonatomic) BOOL canAutorotate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadDetailTableAdapterClass;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)a0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (id)transition_directlyPresentingViewController;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (id)trendingKeyWord;
- (BOOL)isFromLocalHotSpot;
- (void)hideHotInteractionView:(BOOL)a0;
- (void)appendTrackParamsIfNeeded:(id)a0;
- (id)aAWEPadDetailTableAdapter;
- (void)padSplitUpdateViewOffsetX:(double)a0;
- (void)refreshTableViewFrameIfNeeded;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
