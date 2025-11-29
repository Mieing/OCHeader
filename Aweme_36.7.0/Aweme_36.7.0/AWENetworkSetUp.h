@class NSString;

@interface AWENetworkSetUp : HTSService <AWENetworkSetupService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)current_x_tt_token;
+ (void)setupNetWork;
+ (void)syncPassportUID:(id)a0;
+ (void)resetTTNetworkThreadPriorityIfNeeded;
+ (void)preConnectUrlAfterFeedReady;
+ (id)threadPriorityChangeScene;
+ (void)changeTTNetworkThreadPriorityWithScene:(id)a0;
+ (Class)aAWENetworkSetupCommonAdapterClass;
+ (void)setupTTNetworkHttpCacheConfig;
+ (void)setupNetworkRequestFilter;
+ (void)setupNetworkResponseFilter;
+ (id)opaqueDataArray;
+ (void)setupCommonPushManager;
+ (void)setupTTNetworkDownloader;
+ (void)setupTTNetPrivacyLevel;
+ (void)setupTTNetRequestDispatcher;
+ (void)beforeNetworkStart;
+ (id)getTNCSolariaStrategy;
+ (void)setupTTNetworkPrivateProtocol;
+ (void)clearHttpCacheIfNeeded;
+ (id)requestTimeOutConfig;
+ (Class)aAWENetworkFilterDOUYINLiteAdapterClass;
+ (void)trafficConsumeWithRequest:(id)a0 response:(id)a1 body:(id)a2;

- (id)aAWENetworkFilterDOUYINLiteAdapter;
- (id)aAWENetworkSetupCommonAdapter;

@end
