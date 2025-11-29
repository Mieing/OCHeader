@class AWETeenAgeGuideManager, NSString, AWETeenExtraParamModel, AWEListDataController;
@protocol AWETeenHomepageRootViewControllerProtocol, AWETeenFeedChannelControllerProxyProtocol;

@interface AWETeenHotFeedViewController : AWETeenFeedBaseViewController <AWEUserMessage, AWEDigitalWellbeingMessage, AWEPadUITrackerProtocol, AWETeenCustomDisplayViewControllerDelegate, AWETeenHomepageContentViewControllerProtocol>

@property (retain, nonatomic) AWETeenAgeGuideManager *ageGuideManager;
@property (copy, nonatomic) NSString *willLoopAwemeID;
@property (weak, nonatomic) id<AWETeenHomepageRootViewControllerProtocol> rootVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;
@property (readonly, nonatomic) long long vcType;
@property (readonly, nonatomic) AWEListDataController *dataController;
@property (readonly, nonatomic) AWETeenExtraParamModel *extraParam;
@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) id<AWETeenFeedChannelControllerProxyProtocol> controllerProxy;

- (void)didFinishLoginWithUid:(id)a0;
- (id)currentVideoModel;
- (void)refreshWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)bottomBarFillBackground;
- (unsigned long long)bottomTabThemeType;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 vcType:(long long)a2 extra:(id)a3;
- (void)playerWillLoopPlayingWithAwemeID:(id)a0 videoID:(id)a1 currentTime:(double)a2;
- (BOOL)isShowingAgeAlert;
- (void)p_setupAgeGuideManager;
- (void)trackHomepageTabChangeWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (unsigned long long)currentTopTabBarTheme;
- (BOOL)supportInterestChannel:(id)a0;
- (BOOL)channelShouldGreyWhenRecommendModeOn;
- (void)setupDoubleColumnGuide;
- (void).cxx_destruct;
- (BOOL)play;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
