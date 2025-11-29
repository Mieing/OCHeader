@class NSString;

@interface AWELivePreStreamCheckAliveElement : AWELiveBusinessBaseElement <AWELivePreStreamMessageSubscriber>

@property (nonatomic) BOOL didReceiveRoomData;
@property (nonatomic) BOOL roomHasEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endedRoomIDs;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisAppear;
- (void)prepareForDisPlay;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)onSyncLiveUserNotification:(id)a0;
- (void)viewController_viewWillDisAppear;
- (void)streamPlayer_finishPlay;
- (void)prepareEndDisplay:(id)a0;
- (BOOL)p_didEndedLive;
- (void)p_removeCurrentRoomFromEndedList;
- (void)enterLiveEnded;
- (void)checkRoomEndStatusWithCompletion:(id /* block */)a0;
- (void)deletRoomForEndLiveIfNeeded;
- (void)enableAutoLock;
- (BOOL)checkFinishOpt;
- (void)disableAutoLock;
- (void)checkCurrentRoomEndStatus;
- (void)fetchRoomInfo;
- (void)refreshExtendInfo;
- (void)fetchCurrentRoomEndStatus;
- (void)p_addCurrentRoomToEndedList;
- (void)setData:(id)a0;
- (void)reset;
- (void)dealloc;

@end
