@class NSDictionary;

@interface BDECIMCloudService : NSObject

@property (class, copy) NSDictionary *imcloudClientMap;

+ (id)imcloudConversationWithIdentifier:(id)a0 config:(id)a1;
+ (id)messageWithIdentifier:(id)a0 inConversation:(id)a1 config:(id)a2;
+ (id)clientWithConfig:(id)a0;
+ (id)imclientWithConfig:(id)a0;
+ (id)messageReadManagerWithConfig:(id)a0;
+ (id)coreBridgeManagerWithConfig:(id)a0;
+ (void)registerClass:(Class)a0 forProtocol:(id)a1;
+ (id)classForProtocol:(id)a0;
+ (id)cachedClientWithConfig:(id)a0;
+ (id)messageInConversationDataSourceWithLocationLatestMessageForConversationID:(id)a0 options:(id)a1 config:(id)a2;
+ (id)participantsInConversationDataSourceWithConversationID:(id)a0 config:(id)a1;
+ (id)subConversationWithIdentifier:(id)a0 config:(id)a1;
+ (id)cachedClientWithCustomBizID:(id)a0;
+ (id)conversationsDataSourceWithIncludeEmpty:(BOOL)a0 config:(id)a1;
+ (void)initialize;
+ (id)protocolMap;

@end
