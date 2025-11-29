@class AWEPlayletTabCardViewController, NSString, AWEFeedChannelEnterModel, AWEPlayletPageContext, AWEPlayletTabFeedViewController, AWEFeedPlayletChannelController, UIViewController;
@protocol AWEPlayletTabViewControllerProtocol, AWEPlayletCentralizationChildViewControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEPlayletTabSwitchViewController : AWEPlayletCentralizationBaseViewController <AWEHPLeftSlideToUserProtocol, AWEHPContentVCChannelConfigProtocol, AWEFeedTabItemViewControllerProtocol, AWEPlayletTabViewControllerProtocol>

@property (retain, nonatomic) AWEPlayletTabFeedViewController *feedViewController;
@property (retain, nonatomic) AWEPlayletTabCardViewController *cardViewController;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEPlayletTabViewControllerProtocol, AWEPlayletCentralizationChildViewControllerProtocol> *currentViewController;
@property (nonatomic) BOOL hasLoadView;
@property (weak, nonatomic) AWEFeedPlayletChannelController *channelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *referString;
@property (nonatomic) long long serverTopTabOrder;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (readonly, nonatomic) AWEPlayletPageContext *context;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (void)pauseWithAnimation;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)feedRefreshWithType:(long long)a0 completion:(id /* block */)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (unsigned long long)transition_destinatedType;
- (void)setChannelConfig:(id)a0;
- (void)channelEnterWithModel:(id)a0;
- (id)aAWEPadSplitScreenAdapter;
- (id)feedTableViewController;
- (id)getHandleLeftSlideToUserTableVC;
- (BOOL)canShowLeftSlideToUserGuide;
- (void)preloadAwemeData;
- (void)didEnterPlayletChannel;
- (void)didLeavePlayletChannel;
- (void)channelLandingWithParams:(id)a0;
- (void)updateContainerStyle;
- (void)switchFeedStyleAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)switchCardStyleAnimated:(BOOL)a0 useVideoScreenShot:(BOOL)a1;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (id)init;
- (void)stop;
- (void)viewDidLoad;

@end
