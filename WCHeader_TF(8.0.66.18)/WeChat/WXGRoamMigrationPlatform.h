@class NSObject, NSString, MigrationPlatformCallback;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WXGRoamMigrationPlatform : NSObject <MigrationPlatformBase, IChatLogDataMgrExt, CNetworkStatusExt, PBMessageObserverDelegate, FlutterMigrateUICallback>

@property (retain, nonatomic) MigrationPlatformCallback *migrationPlatformCb;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *chatLogSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bridgeQueue;
@property (nonatomic) unsigned long long offlineQrcodeTaskId;
@property (retain, nonatomic) NSString *lastQrCode;
@property (nonatomic) BOOL isFlutterDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setCallback:(id)a0;
- (void)doOfflineCgiAsync:(unsigned long long)a0 funcId:(int)a1 uri:(id)a2 reqBuf:(id)a3 extra:(id)a4;
- (void)getAllConversationForUserNameAsync:(unsigned long long)a0 startTime:(long long)a1 endTime:(long long)a2 excludeMedia:(BOOL)a3 userName:(id)a4;
- (void)getAllConversationAsync:(unsigned long long)a0 startTime:(long long)a1 endTime:(long long)a2 excludeMedia:(BOOL)a3;
- (void)getAllConversationAsyncOld:(unsigned long long)a0 startTime:(long long)a1 endTime:(long long)a2 excludeMedia:(BOOL)a3;
- (void)getPcMinVersionAsync:(unsigned long long)a0;
- (id)getDeviceId;
- (BOOL)isPomEnable;
- (BOOL)isLogout;
- (void)notifyToPc:(int)a0 args:(id)a1;
- (id)getLastQrCode;
- (id)commonCallPlatform:(id)a0 rpcReq:(id)a1;
- (void)commonCallPlatform2Async:(unsigned long long)a0 rpcName:(id)a1 rpcReq:(id)a2;
- (void)toggleFlutterPage:(BOOL)a0;
- (void)checkPermissionAsync:(unsigned long long)a0;
- (void)getWifiNameAsync:(unsigned long long)a0;
- (void)triggerLocalNetworkAlertSyncTimeout;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataReloadItem;
- (id)getBridgeQueue;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleResp:(id)a0;
- (void)onFlutterMigrateUIDidAppear;
- (void)onFlutterMigrateUIDidDisappear;
- (void)onFlutterMigrateUIDidDealloc;
- (void).cxx_destruct;

@end
