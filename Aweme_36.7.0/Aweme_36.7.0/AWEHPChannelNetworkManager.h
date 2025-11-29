@class NSMutableDictionary;

@interface AWEHPChannelNetworkManager : NSObject

@property (nonatomic) long long currentSessionID;
@property (nonatomic) BOOL isLastRenderRequestTimeout;
@property (nonatomic) double lastRenderRequestTime;
@property (retain, nonatomic) NSMutableDictionary *renderUserDict;

+ (Class)aAWEHPChannelNetWorkManagerAdapterClass;
+ (id)sharedInstance;

- (void)addNotifications;
- (id)p_getNotLoginUserID;
- (id)p_getCurrentUserID;
- (BOOL)isRenderRequesting;
- (void)requestWithType:(unsigned long long)a0 canHotReload:(BOOL)a1 editTab:(id)a2 completion:(id /* block */)a3;
- (void)onAccountPrivacyPolicyAgreeNotification;
- (void)onNetworkCommonParamsDeviceIDDidChangeNotification;
- (void)p_retryResumeRequestsWithRetryType:(long long)a0;
- (id)p_getNetworkDeviceID;
- (void)p_retryRequestWithServerInfo:(id)a0 retryType:(long long)a1;
- (void)p_clearCompletionWithServiceInfo:(id)a0;
- (void)p_tryRequestStep1WithType:(unsigned long long)a0 retryType:(long long)a1 canHotReload:(BOOL)a2 editTab:(id)a3 completion:(id /* block */)a4;
- (void)p_tryRequestStep2WithType:(unsigned long long)a0 triggerMonitor:(id)a1 retryType:(long long)a2 canHotReload:(BOOL)a3 userID:(id)a4 serviceInfo:(id)a5 editTab:(id)a6 completion:(id /* block */)a7;
- (void)p_requestStep3WithSessionID:(long long)a0 requestReason:(id)a1 requestType:(unsigned long long)a2 retryType:(long long)a3 retryCount:(long long)a4 params:(id)a5 lastResponseModel:(id)a6 showingTabList:(id)a7 completion:(id /* block */)a8;
- (void)p_trackNetworkFinishWithMonitor:(id)a0 SLOModel:(id)a1 topTabModel:(id)a2 bottomTabModel:(id)a3 preTabList:(id)a4;
- (BOOL)p_saveResponse:(id)a0 userID:(id)a1 error:(id *)a2;
- (void)p_requestStep4WithURL:(id)a0 params:(id)a1 requestType:(unsigned long long)a2 sessionID:(long long)a3 retryCount:(long long)a4 completion:(id /* block */)a5;
- (id)aAWEHPChannelNetWorkManagerAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)removeNotifications;

@end
