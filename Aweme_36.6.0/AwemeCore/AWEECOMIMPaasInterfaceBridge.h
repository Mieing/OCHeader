@interface AWEECOMIMPaasInterfaceBridge : NSObject

+ (id)createConversationBridgeWithIdentifier:(id)a0 belongClient:(id)a1;
+ (id)createMessagesDataSourceOptions;
+ (id)createMessagesInConversationDataSourceBridgeWithInitialLocationLatestMessageForBizConversationID:(id)a0 options:(id)a1 belongClient:(id)a2;
+ (id)createUpdateMessage;
+ (id)createMessageBridgeWithIdentifier:(id)a0 inConversation:(id)a1 belongClient:(id)a2;
+ (long long)networkReachabilityStatusWithPigeonNetwork;
+ (id)createPigeonKVStoreWithName:(id)a0;
+ (id)createClientConfig;
+ (id)createSendMessage;
+ (void)getPigeonMonitorToTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 immediately:(BOOL)a4;
+ (id)getDefaultPigeonKVStore;
+ (id)createShopInfoFetchOptions;
+ (id)getSharedPigeonLog;
+ (id)createSendUserEnterMessageRequestModel;
+ (id)pigeonClientUtilCreateParentChatConversationIDWithPigeonUID:(id)a0 pigeonShopID:(id)a1 pigeonBizType:(id)a2;
+ (id)createEvaluateRequestModel;
+ (id)createMessageBridgeWithMessageServerID:(id)a0 inConversation:(id)a1 belongClient:(id)a2;
+ (id)createClient;

@end
