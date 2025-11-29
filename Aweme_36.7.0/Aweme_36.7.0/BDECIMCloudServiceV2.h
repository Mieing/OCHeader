@class NSDictionary;

@interface BDECIMCloudServiceV2 : NSObject

@property (class, copy) NSDictionary *imcloudClientMap;

+ (id)classForProtocol:(id)a0 config:(id)a1;
+ (id)imcloudConversationWithIdentifier:(id)a0 config:(id)a1;
+ (id)messageWithIdentifier:(id)a0 inConversation:(id)a1 config:(id)a2;
+ (id)webSocketBridgeWithConfig:(id)a0;
+ (id)clientWithConfig:(id)a0;
+ (id)imclientWithConfig:(id)a0;
+ (id)messageReadManagerWithConfig:(id)a0;
+ (id)conversationsDataSourceWithIncludeEmpty:(BOOL)a0 inboxes:(id)a1 config:(id)a2;
+ (id)coreBridgeManagerWithConfig:(id)a0;
+ (id)remedialMessageInConversationDataSourceWithLocationLatestMessageForConversationID:(id)a0 options:(id)a1 config:(id)a2;
+ (void)registerClass:(Class)a0 forProtocol:(id)a1 impType:(long long)a2;
+ (id)cachedClientWithConfig:(id)a0;
+ (id)sdkMap;
+ (id)classForProtocol:(id)a0 impType:(long long)a1;
+ (id)messageWithMessageServerId:(id)a0 inConversation:(id)a1 config:(id)a2;
+ (id)messageInConversationDataSourceWithLocationLatestMessageForConversationID:(id)a0 options:(id)a1 config:(id)a2;
+ (id)participantsInConversationDataSourceWithConversationID:(id)a0 config:(id)a1;
+ (id)subConversationWithIdentifier:(id)a0 config:(id)a1;
+ (void)initialize;

@end
