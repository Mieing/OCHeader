@class AWELivePreStreamContext, NSMutableArray, AWEAwemeModel;
@protocol AWELivePreStreamInnerRoomDisplayConfigProtocol;

@interface AWELivePreStreamInnerRoomDisplayManager : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) id<AWELivePreStreamInnerRoomDisplayConfigProtocol> commentConfig;
@property (retain, nonatomic) id<AWELivePreStreamInnerRoomDisplayConfigProtocol> fansLuckyMoneyConfig;
@property (retain, nonatomic) id<AWELivePreStreamInnerRoomDisplayConfigProtocol> slapConfig;
@property (retain, nonatomic) id<AWELivePreStreamInnerRoomDisplayConfigProtocol> pKConfig;
@property (retain, nonatomic) id<AWELivePreStreamInnerRoomDisplayConfigProtocol> giftWallConfig;
@property (retain, nonatomic) id<AWELivePreStreamInnerRoomDisplayConfigProtocol> micLinkConfig;
@property (retain, nonatomic) NSMutableArray *innerRoomDisplayElementConfigs;
@property (nonatomic) long long maxPriority;

- (void)viewController_viewWillAppear;
- (void)onUserEnterLiveRoom;
- (void)handleMessage:(id)a0 actionBlock:(id /* block */)a1;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)application_willEnterForeground;
- (void)application_WillResignActive;
- (void)viewController_viewDidDisAppear;
- (id)liveActivityPriorityConfig;
- (void)checkActivityElementPriority:(id)a0;
- (id)getActivityElementClickCountConfig:(long long)a0;
- (id)getActivityElementCacheDaysConfig:(long long)a0;
- (double)getStartIntervalConfig:(long long)a0;
- (void)trackPreviewGuideEventWithParams:(id)a0 event:(id)a1;
- (BOOL)getActivityElementEnableConfig:(long long)a0;
- (BOOL)elementSupportHomepage:(long long)a0;
- (id)getShowingDurationConfig:(long long)a0;
- (id)getUrlConfig:(long long)a0;
- (id)getEnterRoomParams;
- (BOOL)getActivityElementShowAgainConfig:(long long)a0;
- (id)getExpiredTimeConfig:(long long)a0;
- (void)prepareForDisPlay:(id /* block */)a0;
- (id)getEnterRoomBuriedParams;
- (id)getBussinessParams;
- (id)getFirstRoomParams;
- (id)getClickRoomParams;
- (void)p_registerActivityElementServices:(id)a0;
- (id)getConfigWithMessageType:(long long)a0;
- (id)getShowPagesConfig:(long long)a0;
- (id)getBufferDurationConfig:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
