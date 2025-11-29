@class NSArray, NSDictionary, NSMutableDictionary, NSLock;

@interface AWEIMPushConditionConfig : NSObject

@property (retain, nonatomic) NSArray *enabledChatTypeConfig;
@property (retain, nonatomic) NSDictionary *forbiddenMessageTypeConfig;
@property (retain, nonatomic) NSDictionary *forbiddenMessageTypeInChatConfig;
@property (retain, nonatomic) NSDictionary *messageFrequencyControlConfig;
@property (retain, nonatomic) NSMutableDictionary *innerLimitSceneIDs;
@property (retain, nonatomic) NSLock *innerLock;
@property (retain, nonatomic) NSArray *forbiddenPageClassConfig;
@property (retain, nonatomic) NSArray *forbiddenHybridPageIDConfig;
@property (retain, nonatomic) NSArray *forbiddenPageProtocolConfig;
@property (retain, nonatomic) NSArray *forbiddenRequestTypeConfig;
@property (retain, nonatomic) NSArray *forbiddenSceneTypeConfig;
@property (retain, nonatomic) NSArray *pendingByPageClassConfig;
@property (retain, nonatomic) NSArray *pendingByHybridPageIDConfig;
@property (retain, nonatomic) NSArray *pendingByPageProtocolConfig;
@property (retain, nonatomic) NSArray *pendingByRequestTypeConfig;
@property (retain, nonatomic) NSArray *pendingBySceneTypeConfig;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)enterPushLimitSceneWithID:(id)a0 forLimitType:(long long)a1;
- (void)exitPushLimitSceneWithID:(id)a0 forLimitType:(long long)a1;
- (id)currentLimitSceneIDsWithType:(long long)a0;
- (id)pageClassConfigWithType:(long long)a0;
- (id)hybridPageIDConfigWithType:(long long)a0;
- (id)pageProtocolConfigWithType:(long long)a0;
- (id)requestTypeConfigWithType:(long long)a0;
- (id)sceneTypeConfigWithType:(long long)a0;
- (id)p_enabledChatTypeConfig;
- (id)p_forbiddenMessageTypeConfig;
- (id)p_forbiddenMessageTypeInChatConfig;
- (id)p_messageFrequencyControlConfig;
- (id)p_forbiddenPageClassConfig;
- (id)p_forbiddenHybridPageIDConfig;
- (id)p_forbiddenPageProtocolConfig;
- (id)p_forbiddenRequestTypeConfig;
- (id)p_forbiddenSceneTypeConfig;
- (id)p_pendingByPageClassConfig;
- (id)p_pendingByHybridPageIDConfig;
- (id)p_pendingByPageProtocolConfig;
- (id)p_pendingByRequestTypeConfig;
- (id)p_pendingBySceneTypeConfig;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
