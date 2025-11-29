@class NSString, NSDate;

@interface TIMXOThirdPartyMessage : TIMXOModel

@property (copy) NSString *belongingConversationIdentifier;
@property long long serverMessageID;
@property int bizId;
@property long long indexInConversation;
@property (retain) NSDate *createdAt;
@property (retain) NSString *content;
@property (retain) NSString *ext;

+ (id)cachedInstanceWithRootObject:(id)a0 identifier:(id)a1;
+ (id)instanceWithRootObject:(id)a0 serverID:(long long)a1 inConversation:(id)a2 context:(id)a3;
+ (id)cachedInstanceWithServerID:(long long)a0 conversationIdentifier:(id)a1 bizId:(int)a2;
+ (id)cachedInstanceWithServerID:(long long)a0 conversationIdentifier:(id)a1;

- (void)onThirdPartyConversationsDeleted:(id)a0 context:(id)a1;
- (void)onThirdPartyMessagesDeleted:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (void)onThirdPartyMessagesUpdated:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (void)onThirdPartyMessagesCreated:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (id)initWithRootObject:(id)a0 model:(id)a1;
- (void)setUpWithModel:(id)a0;
- (void).cxx_destruct;

@end
