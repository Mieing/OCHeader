@class NSString, AWEPlayletPageContext, AWEPlayletSkyLightCapsuleView, AWEPlayletTabCardViewController, UIImageView, AWEPlayletTabFeedViewController, AWEFeedChannelEnterModel, UIViewController, AWEFeedPlayletChannelController;
@protocol AWEFeedTabItemViewControllerProtocol, AWEPlayletTabViewControllerProtocol;

@interface AWEPlayletTabSwitchV2ViewController : UIViewController <AWEPlayletSkyLightCapsuleViewDelegate, AWEHPLeftSlideToUserProtocol, AWEHPContentVCChannelConfigProtocol, AWEFeedTabItemViewControllerProtocol, AWEPlayletTabViewControllerProtocol>

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) AWEPlayletSkyLightCapsuleView *capsuleView;
@property (retain, nonatomic) AWEPlayletTabFeedViewController *feedViewController;
@property (retain, nonatomic) AWEPlayletTabCardViewController *cardViewController;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEPlayletTabViewControllerProtocol> *currentViewController;
@property (nonatomic) double skylightViewHeight;
@property (retain, nonatomic) UIImageView *fullImageView;
@property (nonatomic) BOOL initStyleIsCard;
@property (nonatomic) BOOL hasLoadView;
@property (nonatomic) BOOL showSkylight;
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
- (void)onCapsuleViewTouched;
- (id)getHandleLeftSlideToUserTableVC;
- (BOOL)canShowLeftSlideToUserGuide;
- (void)preloadAwemeData;
- (void)didEnterPlayletChannel;
- (void)didLeavePlayletChannel;
- (void)channelLandingWithParams:(id)a0;
- (void)switchFeedStyleAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showCapsuleView:(BOOL)a0 animated:(BOOL)a1;
- (void)switchCardStyleAnimated:(BOOL)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (id)init;
- (void)stop;
- (void)viewDidLoad;
- (id)fullImage;

@end
