@class NSString, AWEPzNetworkManager, NSDictionary;

@interface AWEPzDataManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEPzNetworkManager *networkManager;
@property (copy, nonatomic) NSString *currentUID;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) double lastRetryTime;
@property (nonatomic) BOOL lastRequestAllDomainSuccess;
@property (nonatomic) long long isRequestingCount;
@property (retain, nonatomic) NSDictionary *domainDataControls;
@property (nonatomic) BOOL lastRequestSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)addNotifications;
- (void)onAccountPrivacyPolicyAgreeNotification;
- (void)requestComponentDataWithRequestType:(unsigned long long)a0;
- (void)loadConfigIfNeedWithDomain:(id)a0;
- (void)loadConfigIfNeedWithDomain:(id)a0 completion:(id /* block */)a1;
- (void)notifyDomainConfigChange:(id)a0;
- (void)loadAllDomainConfigIfNeed:(id /* block */)a0;
- (id)getDomainConfigWithDomainName:(id)a0;
- (void)p_getDomainConfigWithDomainName:(id)a0 completion:(id /* block */)a1;
- (void)registerDomainConfigObserver:(id)a0 domainName:(id)a1;
- (void)getDomainConfigWithDomainName:(id)a0 completion:(id /* block */)a1;
- (void)getDomainConfigMapCompletion:(id /* block */)a0;
- (long long)dataRequestStateWithDomain:(id)a0;
- (BOOL)configFromHotSwitchWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)removeNotifications;
- (void)appWillEnterForeground:(id)a0;

@end
