@class NSString, NSDictionary, AWEIMSharedViewControllerInstanceRouterAction, UIViewController;
@protocol AWERouterViewControllerProtocol, AWEViewControllerScrollToTopProtocol, AWEIMMessageTabPadSplitMainViewController, AWEIMSharedViewControllerInstance, AWETabBarItemViewControllerProtocol, AWEPadUIAdaptionAutorotateProtocol, AWEIMMessageTabRootViewControllerProtocol, AWEIMMessageTabSearchBarViewProtocol;

@interface AWEIMMessageTabRootViewController : UIViewController <AWETabBarItemViewControllerProtocol, AWEViewControllerScrollToTopProtocol, AWEPadUITrackerProtocol, AWEPadUIAdaptionAutorotateProtocol, AWEIMSharedViewControllerInstance, AWEScreenCastPendantDataProvider, AWEIMRightToLeftDismissInteractedOuterContextProvider, AWEIMLeftToRightDismissInteractedOuterContextProvider, AWEIMLeftToRightPushOuterContextProvider, AWEIMRightToLeftPopNonInteractedOuterContextProvider, AWEIMLeftToRightPopNonInteractedOuterContextProvider, AWEIMLeftToRightPopInteractedOuterContextProvider, AWEIMRightToLeftPopInteractedOuterContextProvider, AWERouterViewControllerProtocol, AWEIMMessageTabSearchTransitionOuterContextProvider> {
    UIViewController<AWETabBarItemViewControllerProtocol, AWERouterViewControllerProtocol, AWEViewControllerScrollToTopProtocol, AWEIMSharedViewControllerInstance, AWEPadUIAdaptionAutorotateProtocol, AWEIMMessageTabRootViewControllerProtocol, AWEIMMessageTabPadSplitMainViewController, AWEIMMessageTabSearchBarViewProtocol> *_messageController;
    NSDictionary *_params;
}

@property (weak, nonatomic) UIViewController *currentPanGestureTargetVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;
@property (retain, nonatomic) AWEIMSharedViewControllerInstanceRouterAction *lastRouterAction;

+ (Class)aAWEMainModuleServiceDOUYINLGAdapterClass;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)awe_themeReload;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (unsigned long long)transition_destinatedType;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)awe_scrollToTop;
- (void)tabBarItemViewControllerDidSelectFromPreviousIndex:(long long)a0;
- (void)tabBarItemViewControllerDidUnselect;
- (void)tabBarItemViewControllerDidDoubleTap;
- (id)castEnterFrom;
- (void)getInnerListArgsWith:(id /* block */)a0;
- (void)registerBtmPage;
- (id)btmPageID;
- (id)aAWEMainModuleServiceDOUYINLGAdapter;
- (BOOL)usingFadingAnimation;
- (id)searchTransitionStartView;
- (void)loadIMView;
- (void)p_markPushLandingTabTrackInfoWithParamDict:(id)a0;
- (BOOL)enableFixTransitionTrack;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)hidesBottomBarWhenPushed;
- (id)messageController;

@end
