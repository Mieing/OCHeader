@class NSString, UIImageView, AWEPlayletPageContext, AWEPlayletTracker, AWEFeedChannelEnterModel, AWETripleColumnPlayletContainerViewController;

@interface AWEPlayletTabCardViewController : UIViewController <AWEUserMessage, AWEFeedTabItemViewControllerProtocol, AWEPlayletTabViewControllerProtocol, AWEPlayletTabChildViewControllerProtocol, AWEPlayletCentralizationCardViewControllerProtocol>

@property (retain, nonatomic) AWETripleColumnPlayletContainerViewController *containerView;
@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (retain, nonatomic) AWEPlayletTracker *tracker;
@property (nonatomic) long long topTabOrder;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (nonatomic) double createTimeInterval;
@property (nonatomic) double stayTimeInterval;
@property (nonatomic) double leaveDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *referString;
@property (nonatomic) long long serverTopTabOrder;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (copy, nonatomic) id /* block */ changeFeedAction;
@property (copy, nonatomic) id /* block */ skylightLoadCompletion;
@property (copy, nonatomic) id /* block */ skylightTabDidTap;
@property (nonatomic) BOOL isVisibleToUser;

+ (Class)aAWEFlameHTSAdapterClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didUpdateUserOnLaunch;
- (void)pauseWithAnimation;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)feedRefreshWithType:(long long)a0 completion:(id /* block */)a1;
- (void)channelEnterWithModel:(id)a0;
- (id)currentPageName;
- (id)aAWEFlameHTSAdapter;
- (void)backToTop;
- (void)preloadAwemeData;
- (void)didEnterPlayletChannel;
- (void)didLeavePlayletChannel;
- (void)channelLandingWithParams:(id)a0;
- (double)containerViewTopOffset;
- (id)switchEntryCoverView;
- (void)updateCoverViewWithImage:(id)a0;
- (void)updateCoverViewWithModel:(id)a0;
- (void)enterForSwitch;
- (void)leaveForSwitch;
- (void)hiddenBackgroundView;
- (void)updateScrollEnabled:(BOOL)a0;
- (void)requestSkylightAwemeModelListIfNeed;
- (void)refreshSkylight;
- (BOOL)shouldTriggerChannelAnimationRefresh;
- (void)didEnterPlayletChannelIsAppear:(BOOL)a0;
- (void)p_trackTCStayTime;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)stop;
- (void)applicationWillResignActive;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
