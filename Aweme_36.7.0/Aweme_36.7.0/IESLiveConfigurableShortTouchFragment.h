@class IESLiveConfigurableShortTouchStore, IESLiveShortTouchActionMonitor, NSMutableDictionary, NSString, IESLiveStableModeStrategy;

@interface IESLiveConfigurableShortTouchFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveConfigurableShortTouchViewDelegate, IESLiveConfigurableShortTouchReaction, IESLiveActivityModuleConfigurableShortTouchInterface>

@property (retain, nonatomic) IESLiveConfigurableShortTouchStore *store;
@property (retain, nonatomic) NSMutableDictionary *views;
@property (retain, nonatomic) NSMutableDictionary *lazyViews;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) IESLiveShortTouchActionMonitor *shortTouchMonitor;
@property (nonatomic) double lastClickTimeStamp;
@property (nonatomic) double fetchTime;
@property (nonatomic) BOOL hideEntranceAnimation;
@property (retain, nonatomic) IESLiveStableModeStrategy *stableModelStrategy;
@property (nonatomic) BOOL isStableModeEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)handleAppActiveStateChange:(BOOL)a0;
- (void)setupNotificationObserve;
- (void)adjustToTempStateWidthWithItem:(id)a0;
- (void)startAnchorStableModeStrategy;
- (void)stopAnchorStableModeStrategy;
- (void)configStableModeStrategy;
- (void)requestToShowNormalStateWithItem:(id)a0;
- (BOOL)showShortTouchArea:(id)a0 roomId:(id)a1;
- (BOOL)destoryShortTouchArea:(id)a0 roomId:(id)a1;
- (void)handleLynxTempShortTouch:(id)a0;
- (void)handleFrontEndShortTouchArea:(id)a0 source:(long long)a1;
- (void)trackShortTouchArea:(id)a0 source:(long long)a1 stubName:(id)a2;
- (id)viewWithArea:(id)a0;
- (void)reallyInsertItem:(id)a0 area:(id)a1 source:(long long)a2;
- (void)showBubbleViewWithShortTouchArea:(id)a0;
- (id)webEntranceModelWithArea:(id)a0;
- (id)businessInitialDataWithArea:(id)a0;
- (id)shortTouchActivityParam;
- (void)handleShortTouchArea:(id)a0 source:(long long)a1;
- (void)destroyShortTouchArea:(id)a0 source:(long long)a1;
- (void)triggerTempStatusWithShortTouchItem:(id)a0 param:(id)a1;
- (void)bringViewToFront:(id)a0;
- (void)destroyView:(id)a0;
- (void)clickView:(id)a0 useLynx:(BOOL)a1;
- (void)didFallbackToHybirdContainer:(id)a0 area:(id)a1;
- (void)hybirdDidLoadError:(id)a0 area:(id)a1;
- (void)hybirdDidFinishLoad:(id)a0 isLynx:(BOOL)a1 area:(id)a2;
- (void)reportWithCode:(long long)a0;
- (void).cxx_destruct;
- (void)removeAllViews;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
