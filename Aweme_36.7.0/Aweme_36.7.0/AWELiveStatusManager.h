@class NSMutableDictionary, NSString, NSMutableSet, IESLiveGCDTimer, NSMutableArray;
@protocol AWELiveCheckDataManagerService;

@interface AWELiveStatusManager : NSObject <AWELiveVideoFeedUpdateMessage, AWELiveCheckDataManagerSubscriber, AWEUserMessage, AWELiveStatusManagerProtocol>

@property (readonly, nonatomic) long long singleCheckLiveMaxCount;
@property (readonly, nonatomic) long long heartbeatDuration;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSMutableDictionary *monitorDict;
@property (retain, nonatomic) NSMutableSet *requestingUserIDSet;
@property (retain, nonatomic) NSMutableSet *willRequestUserIDSet;
@property (nonatomic) long long timerStatus;
@property (nonatomic) BOOL enablePushCheck;
@property (nonatomic) long long pushCheckUIDMaxCount;
@property (copy, nonatomic) id /* block */ pushCheckLiveComplete;
@property (retain, nonatomic) NSMutableDictionary *pushCheckResponse;
@property (retain, nonatomic) NSMutableSet *subscribePushUIDSet;
@property (retain, nonatomic) NSMutableArray *pushCheckModels;
@property (retain, nonatomic) id<AWELiveCheckDataManagerService> liveCheckService;
@property (nonatomic) BOOL enableLiveCheck;
@property (nonatomic) BOOL multithreadingOptimize;
@property (nonatomic) BOOL fixCorrectScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)removeMonitorWithUserID:(id)a0 sessionID:(id)a1;
- (BOOL)monitorDidClickWithUserID:(id)a0 sessionID:(id)a1 chatType:(long long)a2 isFansGroup:(BOOL)a3;
- (void)fetchRemoteData;
- (void)subscribedLiveStatusChange:(id)a0;
- (void)onLiveUpdateReceive:(id)a0 PageType:(long long)a1;
- (void)updateMonitorIndexWithUserID:(id)a0 sessionID:(id)a1 index:(long long)a2;
- (id)monitorWithUserID:(id)a0 sessionID:(id)a1;
- (void)monitorLiveStatusWithMonitor:(id)a0;
- (id)getRoomIdWithUserID:(id)a0 sessionID:(id)a1;
- (void)p_cleanTimer;
- (void)setupLivePushCheckConfig;
- (id)p_uniqueKeyWithUserID:(id)a0 sessionID:(id)a1;
- (void)p_fetchRemoteData;
- (BOOL)enableImChatLiveStatusFetchDataOp;
- (id)p_fetchDataTaskGroupsWithUserIDs:(id)a0;
- (void)p_fetchRemoteDataWithSubUserIDs:(id)a0 filterMonitorDict:(id)a1;
- (void)reportLiveStatusLog:(id)a0;
- (id)checkResponseCacheWith:(id)a0;
- (id)p_handleCheckLiveResultWithUserIDs:(id)a0 response:(id)a1 filterMonitor:(id)a2;
- (void)startSubscribePushLiveCheck;
- (id)p_fetchDataExtraPatamasWithUserIDs:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)start;
- (void)resume;
- (void)dealloc;

@end
