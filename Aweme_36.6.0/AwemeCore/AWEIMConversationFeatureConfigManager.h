@class NSDictionary;

@interface AWEIMConversationFeatureConfigManager : NSObject

@property (copy) NSDictionary *configs;

+ (id)makeCreatorFansGroupConversationFeatureConfig;
+ (id)sharedManager;

- (id)configWithConversation:(id)a0;
- (id)configWithCon:(id)a0 peerUser:(id)a1;
- (id)configWithBaseConversationModel:(id)a0 peerUser:(id)a1;
- (void)__setupConversationFeatureConfigs;
- (void)updateRemoteConfig;
- (id)__configWithIsGroup:(BOOL)a0 conSharedSyncedExt:(id)a1 peerUser:(id)a2 isStranger:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
