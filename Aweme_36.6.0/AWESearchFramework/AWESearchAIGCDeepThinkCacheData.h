@interface AWESearchAIGCDeepThinkCacheData : NSObject

+ (BOOL)deepThinkIsOpen;
+ (id)deepThinkModelName;
+ (id)userActionCacheConfig;
+ (void)updateUserActionCache:(id)a0;
+ (id)defaultConfigV2;
+ (id)defaultConfigV2DefaultModel;
+ (id)defaultConfigV2ModelInfo:(id)a0;
+ (id)userActionCacheConfigV2;
+ (void)checkUserActionCacheConfigV2Length:(id)a0;
+ (id)getUserActionCacheConfigV2ConversationArray;
+ (id)getUserActionCacheConfigV2ConversationDict;
+ (void)updateUserActionCacheV2:(id)a0;
+ (id)checkModelName:(id)a0;
+ (id)getUserActionCacheConfigV2ConversationEmpty;
+ (void)saveModelSelection:(id)a0 forConversationID:(id)a1;
+ (void)handleOldThinkModeForNewMode:(id)a0 deepThinkSelected:(id)a1 conversationID:(id)a2;
+ (id)currentNetMode;
+ (id)netModeList;
+ (void)switchDeepThinkOpenMode:(BOOL)a0 source:(id)a1;
+ (void)switchDeepThinkNetMode:(long long)a0 source:(id)a1;
+ (void)clearDeepThinkOpenModeSource:(id)a0;
+ (void)clearDeepThinkNetModeSource:(id)a0;
+ (id)modelSelectionForConversationID:(id)a0;
+ (void)saveModelSelectionForNewConversationID:(id)a0;
+ (void)clearModelSelectionForConversationID:(id)a0;
+ (void)clearAllModelSelections;
+ (void)handleOldThinkModeForNewMode:(id)a0 deepThinkSelected:(id)a1;
+ (id)defaultConfig;

@end
