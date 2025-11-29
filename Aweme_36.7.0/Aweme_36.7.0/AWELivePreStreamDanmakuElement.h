@class AWELivePreDanmakuDataFactoryComponent, AWELivePreDanmakuHistoryMsgStrategyComponent, AWELivePreDanmakuSettingComponent, NSString, IESLiveIMMessageDecoder, AWELivePreDanmakuSettingView, HTSLiveGuideView, IESEZDanmakuEngine, HTSLiveRoom;
@protocol HTSKVStore;

@interface AWELivePreStreamDanmakuElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber, IESEZDanmakuEngineDelegate, IESEZDanmakuNotificationSubscriber, AWELivePreStreamAlertPriorityProtocol, AWELivePreStreamBusinessCoreDataProtocol, AWELivePreStreamEnterRoomDataProvider>

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) IESEZDanmakuEngine *danmakuEngine;
@property (retain, nonatomic) AWELivePreDanmakuDataFactoryComponent *dataFactory;
@property (retain, nonatomic) AWELivePreDanmakuSettingComponent *settingComponent;
@property (retain, nonatomic) HTSLiveGuideView *guideView;
@property (retain, nonatomic) AWELivePreDanmakuSettingView *settingView;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (nonatomic) BOOL elementDidStartPlay;
@property (nonatomic) BOOL danmakuDisplayEnable;
@property (nonatomic) BOOL danmakuDisplayEnableSetByDefault;
@property (nonatomic) BOOL danmakuShown;
@property (nonatomic) BOOL danmakuShowTracked;
@property (nonatomic) BOOL abSettngEnable;
@property (nonatomic) BOOL defaultOpenSettingEnable;
@property (nonatomic) BOOL tabAllowed;
@property (retain, nonatomic) IESLiveIMMessageDecoder *messageDecoder;
@property (nonatomic) BOOL historyDanmakuEnable;
@property (retain, nonatomic) AWELivePreDanmakuHistoryMsgStrategyComponent *historyMsgStrategy;
@property (nonatomic) BOOL historyMsgChecked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisAppear;
- (id)commonTrackParams;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)application_DidEnterBackground;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)removeLiveAlertElementWithCompletion:(id /* block */)a0;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (id)provideCoreDataForEvent:(long long)a0;
- (void)viewController_viewWillDisAppear;
- (void)preStreamVC_viewDidAppear;
- (void)preStreamVC_viewWillDisappear;
- (void)preStreamVC_viewDidDisappear;
- (void)application_DidBecomeActive;
- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (BOOL)roomAuthEnable;
- (BOOL)danmakuEnable;
- (void)showGuideIfNeeded;
- (BOOL)currentTabAllowedWithReferString:(id)a0;
- (void)showDanmakuSettingPanel;
- (void)trackDanmakuSettingPanelShow;
- (void)fetchHistoryChatMessage;
- (void)setDanmakuDisplayDefaultValueIfNeeded;
- (void)reloadDanmakuSettingConfigIfNeeded;
- (void)hideDanmakuSettingPanel;
- (void)destroyDanmakuEngine;
- (void)handleHistoryMessage:(id)a0;
- (void)trackDanmakuShown;
- (void)createGuideView;
- (void)setupDanmakuEngine;
- (void)danmakuEngine:(id)a0 businessComponentDidLoad:(id)a1;
- (id)elementView;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;

@end
