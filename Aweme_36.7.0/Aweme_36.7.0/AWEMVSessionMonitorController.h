@class NSTimer, NSString, NSMutableDictionary;

@interface AWEMVSessionMonitorController : AWEDCFeedBaseController <AWEMVEventDispatchProtocol, AWEMVSessionMonitorControllerProtocol>

@property (nonatomic) double totalPlayTime;
@property (nonatomic) long long videoPlayFinishCount;
@property (nonatomic) long long likeCount;
@property (nonatomic) long long collectionCount;
@property (retain, nonatomic) NSTimer *videoPlayTimer;
@property (retain, nonatomic) NSString *currentPlayItemID;
@property (retain, nonatomic) NSTimer *stayTimeTimer;
@property (retain, nonatomic) NSMutableDictionary *stayTimeDic;
@property (nonatomic) long long stayTimeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackStateWithAction:(long long)a2;
- (void)detailTableViewControllerVideoPlayerWillStartNextLoop:(id)a0;
- (void)setupNotification;
- (void)onAwemeDiggNotification:(id)a0;
- (void)onVideoFavoriteNotification:(id)a0;
- (id)showTitle:(id)a0;
- (void)landscapeFeedViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackToAction:(long long)a2;
- (void)landscapeFeedViewControllerWillStartNextLoop:(id)a0;
- (id)mvPageContext;
- (void)didEnterMVChannel;
- (void)didLeaveMVChannel;
- (void)channelVideoViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackToAction:(long long)a2;
- (void)channelVideoWillStartNextLoop:(id)a0;
- (void)relatedVideoViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackToAction:(long long)a2;
- (void)relatedVideoViewControllerWillStartNextLoop:(id)a0;
- (void)triggerStayTimeTimer;
- (void)getStayTimeDicFromStorage;
- (void)saveStayTimeDicToStorage;
- (void)stopVideoPlayTimeTimer;
- (void)fireStayTimeTimer;
- (void)startVideoPlayTimeTimer;
- (id)playerStateString:(long long)a0;
- (void)handlePlayActionChange:(long long)a0 awemeModel:(id)a1;
- (void)increaseStayTimeData;
- (id)getCurrentDateString;
- (BOOL)isDateInSevenDays:(id)a0 secondDateString:(id)a1;
- (BOOL)stayTimeOverLast7Days;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;

@end
