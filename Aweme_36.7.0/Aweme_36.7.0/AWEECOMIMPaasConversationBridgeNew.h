@class NSString, BDECPigeonConversationHintModel, NSDictionary, NSDate, NSNumber;
@protocol AWEECOMIMPaasUnReadCountModelProtocol, BDECPigeonConversationInterface;

@interface AWEECOMIMPaasConversationBridgeNew : NSObject <AWEECOMIMPaasConversationBridgeProtocol>

@property (retain, nonatomic) id<BDECPigeonConversationInterface> pigeonConversation;
@property (copy, nonatomic) id<AWEECOMIMPaasUnReadCountModelProtocol> unreadCountNew;
@property (readonly, nonatomic) NSString *bizConversationID;
@property (readonly, nonatomic) int inbox;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, nonatomic) NSString *pigeonBizType;
@property (readonly, nonatomic) NSString *lastMessageIdentifier;
@property (readonly, nonatomic) unsigned long long conversationType;
@property (readonly, nonatomic) BDECPigeonConversationHintModel *lastHint;
@property (readonly, copy, nonatomic) NSDictionary *unreadCountDataDict;
@property (readonly, nonatomic) unsigned long long badgeCount;
@property (readonly, nonatomic) unsigned long long readBadgeCount;
@property (readonly, copy) NSString *pigeonShopID;
@property (readonly, nonatomic) NSNumber *shortID;
@property (readonly, nonatomic) BOOL isMute;
@property (readonly, nonatomic) BOOL stickOnTop;
@property (readonly) NSDate *draftAt;
@property (readonly) NSString *draftText;
@property (readonly, nonatomic) NSString *curTalkID;
@property (readonly, nonatomic) BOOL closed;
@property (readonly, nonatomic) long long curSubConvCreateTime;
@property (readonly, nonatomic) long long createTime;
@property (readonly, copy, nonatomic) NSString *curSubConvBizStatus;
@property (readonly, copy, nonatomic) NSString *latestServerID;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, copy, nonatomic) NSString *groupChatIdempotentId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conversationWithPigeonConversation:(id)a0;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (id)initConversationWithIdentifier:(id)a0 belongClient:(id)a1;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (void)setDraft:(id)a0;

@end
