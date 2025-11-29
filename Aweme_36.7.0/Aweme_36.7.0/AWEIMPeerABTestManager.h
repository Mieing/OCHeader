@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEIMPeerABTestManager : NSObject <AWEUserMessage, IESIMPeerABTestManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *abValueDict;
@property (copy, nonatomic) NSDictionary *stableAbValueDict;
@property (copy) NSDictionary *stableAbValueSafeDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)im_clearPeerABTestData;
+ (BOOL)shouldRefreshRecord;
+ (id)supportedSources;
+ (id)peerExpConfigs;
+ (long long)secUidsLimit;
+ (long long)refreshInterval;
+ (id)sharedInstance;
+ (BOOL)forceReload;
+ (BOOL)enabled;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)fetchReverseExperimentIfNeededWithSource:(id)a0 userModels:(id)a1;
- (void)fetchReverseExperimentIfNeededWithSource:(id)a0 secUids:(id)a1;
- (id)peerABValueWithPeerSecUid:(id)a0 abKey:(id)a1 stable:(BOOL)a2;
- (void)requestWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_preparePeerABTestData;
- (void)asyncGetPeerABValueWithPeerSecUids:(id)a0 abKey:(id)a1 completion:(id /* block */)a2;
- (void)p_prepareABtestDataForFriendsIfNeeded;
- (void)asyncGetPeerABValueWithPeerSecUids:(id)a0 abKeys:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
