@class AWELiveTabGuideInsertModel, AWELivePreviewExitGuide, AWEHPTabJumpFrequencyControlModel, AWELivePreStreamLiveCommonGuideView, IESLiveAudienceWatchActionManager, IESLiveGCDTimer, NSString;
@protocol HTSKVStore, AWEPzComponentProtocol;

@interface AWELivePreStreamLiveChannelGuideElement : AWELiveBaseElement <AWELivePreStreamEnterRoomDataProvider, AWELivePreStreamAlertPriorityProtocol, AWEUserMessage, AWELiveCommonSceneMessage>

@property (retain, nonatomic) AWELivePreStreamLiveCommonGuideView *guideView;
@property (retain, nonatomic) IESLiveAudienceWatchActionManager *actionManager;
@property (retain, nonatomic) AWELivePreviewExitGuide *exitGuide;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL cellShowing;
@property (nonatomic) BOOL vcShowing;
@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL showOpt;
@property (nonatomic) BOOL showStyleOpt;
@property (nonatomic) BOOL hasScrollInnerFeed;
@property (nonatomic) double stayTimeInterval;
@property (retain, nonatomic) AWEHPTabJumpFrequencyControlModel *controlModel;
@property (copy, nonatomic) NSString *guideScene;
@property (retain, nonatomic) AWELiveTabGuideInsertModel *insertModel;
@property (retain, nonatomic) IESLiveGCDTimer *showTimer;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisAppear;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)application_DidEnterBackground;
- (void)preloadElement;
- (void)showComponentWithPitayaMessage:(id)a0;
- (void)removeLiveAlertElementWithCompletion:(id /* block */)a0;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (BOOL)isFollow;
- (BOOL)enableShowGuide;
- (void)viewController_willBeginDragging:(id)a0;
- (void)audienceViewController_WillEnterLiveRoom:(id)a0 anchorID:(id)a1;
- (void)audienceViewController_DidLeaveLiveRoom:(id)a0 anchorID:(id)a1;
- (void)p_hideElement:(id)a0;
- (void)clearInRoomStatus;
- (void)p_parseExitGuideData:(id)a0;
- (BOOL)p_isQuitRoomScene;
- (BOOL)checkExitGuideData;
- (void)p_showElement;
- (void)trackChannelGuideDidShow;
- (BOOL)p_isPreviewStreamScene;
- (void)jumpToLiveTabChannel;
- (void)checkPizzaVerify;
- (void)checkCanShowLiveTabGuideView;
- (void)p_fetchLiveTabGuideData;
- (BOOL)canOpenSchemaURL;
- (id)p_generateLandingParams;
- (void)trackChannelGuideClicked;
- (void)p_createChannelGuideView;
- (void)p_channelGuideDidShow;
- (void)p_channelGuideDidHide;
- (id)elementView;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)invalidateTimer;
- (void)reset;
- (void)dealloc;

@end
