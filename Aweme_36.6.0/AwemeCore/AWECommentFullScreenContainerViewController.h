@interface AWECommentFullScreenContainerViewController : UIViewController <AWECommentPartialScreenLeaveTransitionInnerContextProvider, AWECommentZoomTransitionInnerContextProvider, AWECommentAutoZoomTransitionInnerContextProvider, AWECommentTransitionInnerProviderLifeCycleProtocol, AWECommentAutoFullScreenTransitionOuterContextProvider, AWECommentPinchFullScreenTransitionOuterContextProvider, AWECommentTransitionOuterProviderLifeCycleProtocol, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ contentVC;
    void /* unknown type, empty encoding */ closeBar;
    void /* unknown type, empty encoding */ bgColor;
    void /* unknown type, empty encoding */ viewBGColor;
    void /* unknown type, empty encoding */ navView;
    void /* unknown type, empty encoding */ isScrollableBefore;
    void /* unknown type, empty encoding */ commentOffsetBeforeFullScreen;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ triggleDown;
    void /* unknown type, empty encoding */ transitionFromCommentPage;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ bgColorOptimize;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)commentPartialScreenLeaveTransition_playInteractionPanelInteractiveZoomInTransitionCompletionHandler;
- (void)commentPartialScreenLeaveTransition_playInteractionPanelInteractiveZoomInTransitionHandlerWithProgress:(double)a0;
- (void)commentPartialScreenLeaveTransition_playInteractionPanelAutoZoomOutTransitionHandler;
- (id)commentPartialScreenLeaveTransition_innerContextProviderContentVC;
- (id)commentPartialScreenLeaveTransition_tabbarSnapshot;
- (void)commentPartialScreenLeaveTransition_commentPanelResetTabbar;
- (void)commentPartialScreenLeaveTransition_playInteractionPanelZoomInTransitionCompletionHandler;
- (BOOL)commentPartialScreenLeaveTransition_shouldShowCommentInputViewSnapshot;
- (id)commentPartialScreenLeaveTransition_commentInputViewSnapShot;
- (void)commentPartialScreenLeaveTransition_playInteractionPanelAutoZoomInTransitionHandler;
- (BOOL)commentPartialScreenLeaveTransition_innerContextProvider_tabbarHiddenByComment;
- (id)commentPartialScreenLeaveTransition_innerContextProviderVC;
- (void)commentPartialScreenLeaveTransition_partialFullPanelZoomOutHandlerWithProgress:(double)a0 state:(unsigned long long)a1;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)a0;
- (BOOL)commentZoomTransition_innerContextProvider_tabbarHiddenByComment;
- (BOOL)commentAutoZoomTransition_innerContextProvider_tabbarHiddenByComment;
- (void)commentInnerProvider_transitionWillBegin:(long long)a0 fromVC:(id)a1 toVC:(id)a2;
- (void)commentInnerProvider_transitionWillCancel:(long long)a0 fromVC:(id)a1 toVC:(id)a2;
- (void)commentInnerProvider_transitionWillFinish:(long long)a0 fromVC:(id)a1 toVC:(id)a2;
- (id)autoPinchFullScreen_outerNavBarSnapShot;
- (id)pinchFullScreen_outerNavBarSnapShot;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)windowDidBecomeKeyNotification;
- (void)backAction;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
