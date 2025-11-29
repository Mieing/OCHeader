@class NSTimer, UIViewController, NSString;
@protocol AWEIMMessageTabCampaignTitleViewInterface, AWEUGCampaignNoticeHeaderProtocol, AWEUGCampaignNoticeLoadingProtocol, AWEIMMessageTabNaviBarInterface, AWEIMTabSkeletonInterface;

@interface AWEIMMessageTabCampaignComponent : AWEIMComponentBase <AWEIMMessageTabCampaignInterface, AWEIMMessageTabViewControllerAction, AWEIMMessageTabNaviBarAction>

@property (retain, nonatomic) UIViewController<AWEUGCampaignNoticeHeaderProtocol> *campaignHeaderViewController;
@property (retain, nonatomic) UIViewController<AWEUGCampaignNoticeLoadingProtocol> *campaignLoadingViewController;
@property (nonatomic) BOOL enablePresentCampaignLoadingView;
@property (nonatomic) BOOL campaignLoadingShouldUpdate;
@property (nonatomic) double campaignLoadingOffset;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBarInterface> naviBarService;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (weak, nonatomic) id<AWEIMMessageTabCampaignTitleViewInterface> campaignTitleService;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) double time;
@property (nonatomic) double offset;
@property (nonatomic) BOOL isPlayingGuideAnimation;
@property (nonatomic) BOOL shouldUpdateHeaderView;
@property (nonatomic) BOOL shouleUpdateFakeNavkBar;
@property (nonatomic) BOOL isPresenntingActivityVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)themeDidReload;
- (void)addTokenToSlardarIfNeeded;
- (void)hostViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollDidUpdateOffset:(double)a0;
- (void)updateCampaignLoadingViewControllerWhileEndDraggingWithOffset:(double)a0;
- (void)updateFakeNaviBarWhenScrollBegin;
- (void)navigationBarDidUpdateTitleView;
- (void)resetCampaignHeader;
- (void)setupCampaignHeaderViewControllerIfNeeded;
- (id)currentListComponent;
- (void)removeTokenFromSlardarIfNeeded;
- (void)fakePresentCampaignGuide;
- (void)presentCampaignGuide;
- (void)p_updateFakeNavigationBar;
- (void)updateCampaignHeaderViewControllerWithOffset:(double)a0;
- (BOOL)showingCampaign;
- (void)updateCampaignLoadingViewController;
- (void)updateFakeNaviBar;
- (void)pullAnimation:(id)a0;
- (void)recoverTabbar;
- (void).cxx_destruct;

@end
