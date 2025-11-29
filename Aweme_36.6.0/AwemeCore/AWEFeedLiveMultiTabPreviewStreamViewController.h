@class AWEFeedLiveMultiTabPageModel, NSString, NSDictionary, AWEFeedLiveTabGuideAnimationView, AWELiveTabSlidingScrollView, NSMutableArray;
@protocol AWEHPChannelControllerConfigProtocol;

@interface AWEFeedLiveMultiTabPreviewStreamViewController : UIViewController <AWEFeedLiveTabSelectionAction, AWEFeedLiveTabViewControllerLifeCycleAction, AWEFeedLiveMultiTabPreviewStreamVCService>

@property (nonatomic) long long gestureType;
@property (retain, nonatomic) AWEFeedLiveMultiTabPageModel *multiTabPageModel;
@property (retain, nonatomic) NSMutableArray *itemViewHolders;
@property (retain, nonatomic) AWELiveTabSlidingScrollView *multiTabSlidingView;
@property (retain, nonatomic) AWEFeedLiveTabGuideAnimationView *gestureGuideView;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> channelConfig;
@property (retain, nonatomic) NSDictionary *landingParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transition_didStartTransitionWithContext:(id)a0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)didSetAttachingDIContext;
- (unsigned long long)transition_destinatedType;
- (id)getHandleLeftSlideToUserTableVC;
- (void)adjustContentOffset;
- (id)cellModelAtTabID:(long long)a0;
- (BOOL)needTriggerTabItemLifeCycle;
- (void)didSelectedTabWithItem:(id)a0 preTabItem:(id)a1;
- (void)feedLiveTabDidStartFirstFrame:(long long)a0;
- (id)currentVisibleCellModel;
- (void)reloadMultiTabVCAtTabID:(long long)a0 fromClick:(BOOL)a1;
- (void)buildFeedTableVCShellIfNeeded:(long long)a0;
- (id)currentVisibleDataController;
- (void)clearForPrepareItemViews:(long long)a0;
- (id)currentVisibleFeedTabVC;
- (id)itemViewWithTabItem:(id)a0;
- (void)setupGuideAnimationWithType:(long long)a0;
- (void)trackerGuideShow;
- (void)stopGuideIfNeedWithType:(long long)a0 isTabDisappear:(BOOL)a1;
- (void)didEndDisplayItemViewAtTabItem:(id)a0 willDisplayItem:(id)a1;
- (void)willDisplayItemViewAtTabItem:(id)a0 didEndDisplay:(id)a1;
- (void)updateMultiTabPageModel:(id)a0;
- (id)feedTabVCWithTabID:(long long)a0;
- (void)reloadMultiTabVCAtTabID:(long long)a0;
- (void)clearAllWithoutCurrentTab;
- (BOOL)hasFeedTabVCViewWithTabID:(long long)a0;
- (void)playGuideIfNeedWithType:(long long)a0;
- (void)enableTriggerAutoEnter:(BOOL)a0;
- (void)trackerGuideSlide;
- (void)trackerGuideClick;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;

@end
