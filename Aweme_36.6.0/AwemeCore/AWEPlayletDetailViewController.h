@class AWEDiscoverDPlayletTableViewController, NSArray, AWESlidingViewController, AWEPlayletSegmentControl, NSString, AWEPlayletCenterViewController;

@interface AWEPlayletDetailViewController : UIViewController <AWESlidingViewControllerDelegate, AWEPlayletDetailViewControllerProtocol, AWEShowShrinkTransitionSyncPlayletProtocol, AWEModernFullscreenTransitionInnerContextProvider, AWEZoomTransitionOuterContextProvider, AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSArray *segmentItemArray;
@property (retain, nonatomic) NSArray *orderedViewControllers;
@property (retain, nonatomic) AWEPlayletSegmentControl *segmentControl;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWEDiscoverDPlayletTableViewController *tableViewController;
@property (retain, nonatomic) AWEPlayletCenterViewController *centerViewController;
@property (nonatomic) long long scrollToIndex;
@property (nonatomic) BOOL hasFetchedSegVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addInteract;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)liveTransitionContext;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)needShowliveSnapView;
- (id)targetHolderView;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)a0;
- (long long)modernTransitionItemOffset;
- (BOOL)modernTransitionItemHasScrolled;
- (id)modernTransitionContext;
- (double)modernAnimationDuration;
- (BOOL)disableSyncReferString;
- (long long)modernCurrentShowIndex;
- (long long)modernInitialIndex;
- (id)modernCurrentDisplayingItem;
- (long long)modernUseOrigin;
- (BOOL)modernTransitionItemHasScrolledUpdated:(long long)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (BOOL)isPlayletPanelShowed;
- (void)slidingViewController:(id)a0 willScrollToIndex:(long long)a1 preIndex:(long long)a2;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (id)currentDetailViewController;
- (BOOL)isSameInititalPlayletVideo;
- (BOOL)isShareAlertShowed;
- (BOOL)shouldSyncPlayletVideo;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3 fastEnter:(BOOL)a4;
- (id)initWithLogExtraDict:(id)a0;
- (void)configureNavigationStack;
- (id)currentContainerViewController;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
