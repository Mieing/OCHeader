@class NSCache, NSString, NSObject;
@protocol OS_dispatch_queue, RTVVoipConfigureManagerInterface, RxInjector, RTVVoipStorageAreaInterface, RTVXRMonitor, RTVSettingsManager;

@interface RTVXRDegradeService : NSObject <RTVXRRoomServiceObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipStorageAreaInterface> voipStorageArea;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVXRMonitor> monitor;
@property (retain, nonatomic) NSCache *degradeCache;
@property (retain, nonatomic) NSCache *pullCache;
@property BOOL isVideoSessionDisable;
@property BOOL isDegrade;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)isRTVAudioEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isRTVVideoEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isDegradeByServerWithUid:(id)a0 isVideo:(BOOL)a1;
- (void)handlePullResult:(id)a0 key:(id)a1 pullReason:(long long)a2;
- (void)__trackDegradeCountIfNeeded;
- (id)__isEnableWithUid:(id)a0 isVideo:(BOOL)a1 scene:(unsigned long long)a2 shortConversationID:(id)a3;
- (id)__cacheKeyForUid:(id)a0;
- (id)__errorWithCode:(long long)a0 description:(id)a1 userInfo:(id)a2;
- (void)__updateLocalCacheIfNeededWithUid:(id)a0 degradeModel:(id)a1 shortConversationID:(id)a2;
- (long long)__durationForRefreshCacheSettings;
- (BOOL)__needRefreshWithLastUpdateTimeInterval:(double)a0;
- (id)__errorWithCode:(long long)a0 description:(id)a1;
- (void).cxx_destruct;

@end
