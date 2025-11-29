@class NSString, AWELivePreStreamInnerRoomDisplayManager, UIView;

@interface AWELivePreStreamInnerRoomDisplayElement : AWELiveLeftElement <AWELivePreStreamEnterRoomDataProvider, AWELivePreStreamMessageSubscriber>

@property (nonatomic) double distance;
@property (nonatomic) long long messageType;
@property (nonatomic) double contentViewHeight;
@property (retain, nonatomic) AWELivePreStreamInnerRoomDisplayManager *displayManager;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ displayBlock;
@property (nonatomic) BOOL hasShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)application_willEnterForeground;
- (void)application_WillResignActive;
- (void)viewController_viewDidDisAppear;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)application_DidBecomeActive;
- (void)onRightAreaChange:(double)a0;
- (double)contentViewHeightWithType:(unsigned long long)a0;
- (id)p_parsePreviewData:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;
- (void)clean;

@end
