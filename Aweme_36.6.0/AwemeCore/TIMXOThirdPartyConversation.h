@class NSString, TIMXOThirdPartyMessage, NSDate;

@interface TIMXOThirdPartyConversation : TIMXOModel

@property (copy) NSString *identifier;
@property long long shortID;
@property int type;
@property int inbox;
@property int bizId;
@property int status;
@property int badgeCount;
@property int readBadgeCount;
@property int unreadCount;
@property int importantBadgeCount;
@property int readImportantBadgeCount;
@property int importantUnreadCount;
@property (nonatomic) int hintReadBadgeCount;
@property (nonatomic) int hintUnreadCount;
@property (nonatomic) int hintReadImportantBadgeCount;
@property (nonatomic) int hintImportantUnreadCount;
@property long long minIndex;
@property (retain) NSDate *updatedAt;
@property long long sortOrder;
@property int countStatus;
@property (copy) NSString *ext;
@property (retain) TIMXOThirdPartyMessage *lastMessage;

+ (id)noCacheWithRootObject:(id)a0 model:(id)a1;
+ (id)cachedInstanceWithRootObject:(id)a0 identifier:(id)a1;
+ (id)instanceWithRootObject:(id)a0 bizId:(int)a1 conversationIdentifier:(id)a2 model:(id)a3;
+ (id)cachedInstanceIdentifierWithBizId:(int)a0 conversationIdentifier:(id)a1;
+ (id)instanceWithRootObject:(id)a0 bizId:(int)a1 conversationIdentifier:(id)a2;

- (void)onThirdPartyConversationsCreated:(id)a0 context:(id)a1;
- (void)onThirdPartyConversationsUpdated:(id)a0 context:(id)a1;
- (void)onThirdPartyConversationsDeleted:(id)a0 context:(id)a1;
- (void)onThirdPartyMessagesDeleted:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (void)onThirdPartyMessagesUpdated:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (void)onThirdPartyMessagesCreated:(id)a0 belongingConversationMap:(id)a1 context:(id)a2;
- (id)initWithRootObject:(id)a0 model:(id)a1;
- (void)setUpWithModel:(id)a0;
- (void).cxx_destruct;

@end
