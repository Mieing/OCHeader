@class NSString;
@protocol AWEHPNetCombineSubscriberAbility;

@interface AWEHPChannelNetworkSubscriber : NSObject <AWEHPNetCombineSubscriberProtocol>

@property (nonatomic) long long sessionId;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberAbility> ability;
@property (nonatomic) long long isRequestingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEHPChannelNetWorkManagerAdapterClass;
+ (id)sharedInstance;

- (void)setupAbility:(id)a0;
- (BOOL)getIsRequesting;
- (void)sendRequestForEditTab;
- (void)p_trackNetworkFinishWithMonitor:(id)a0 SLOModel:(id)a1 topTabModel:(id)a2 bottomTabModel:(id)a3 preTabList:(id)a4;
- (BOOL)p_saveResponse:(id)a0 userID:(id)a1 error:(id *)a2;
- (id)aAWEHPChannelNetWorkManagerAdapter;
- (void)p_saveResponse:(id)a0 withRequest:(id)a1 sessionId:(long long)a2 deserializeBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)handleResponse:(id)a0 withRequest:(id)a1;
- (BOOL)checkCanRequest:(id)a0;
- (void)getRequestBody:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handleRequest:(id)a0;

@end
