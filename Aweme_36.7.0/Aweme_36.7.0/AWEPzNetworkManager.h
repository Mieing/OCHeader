@class NSString;

@interface AWEPzNetworkManager : NSObject

@property (copy, nonatomic) NSString *currentUID;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) double lastRetryTime;
@property (nonatomic) BOOL lastRequestAllDomainSuccess;
@property (nonatomic) long long isRequestingCount;
@property (nonatomic) BOOL lastRequestSuccess;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)addNotifications;
- (void)onAccountPrivacyPolicyAgreeNotification;
- (void)requestComponentDataWithRequestType:(unsigned long long)a0;
- (BOOL)p_isDomainRegister:(id)a0;
- (void)p_requestComponentDataWithRequests:(id)a0 requestType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)p_requestComponentDataWithRequests:(id)a0 requestType:(unsigned long long)a1 sessionID:(long long)a2 completion:(id /* block */)a3;
- (id)p_checkConfigModel:(id)a0;
- (void)p_requestComponentDataWithURl:(id)a0 requestType:(unsigned long long)a1 hashMap:(id)a2 uid:(id)a3 sessionID:(long long)a4 retryCount:(long long)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;
- (void)appWillEnterForeground:(id)a0;

@end
