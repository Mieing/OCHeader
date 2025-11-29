@class NSDate, NSString, BDECPigeonClientV2, BDECPigeonBaseSingleConversation, NSOrderedSet, BDECPigeonUnReadCountModelV2, NSDictionary, BDECPigeonClientConfigV2, NSNumber, BDECPigeonConversationHintModel;
@protocol BDECPigeonMessageInterface;

@interface BDECPigeonSingleConversation : NSProxy <BDECPigeonSingleConversationInterface>

@property (retain) BDECPigeonBaseSingleConversation *innerTarget;
@property (readonly, copy, nonatomic) NSString *curTalkID;
@property (readonly, copy, nonatomic) NSString *customerUID;
@property (readonly, nonatomic) BOOL countdown;
@property (readonly, copy, nonatomic) NSString *countdownTime;
@property (readonly, nonatomic) BOOL visitAgain;
@property (readonly, nonatomic) BOOL isNewEnter;
@property (readonly, weak, nonatomic) BDECPigeonClientV2 *client;
@property (readonly, copy, nonatomic) NSString *bizConversationID;
@property (readonly, copy) NSString *pigeonConGroupID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long curSubConvCreateTime;
@property (readonly, copy, nonatomic) NSString *curSubConvBizStatus;
@property (readonly, copy, nonatomic) NSOrderedSet *someParticipants;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;
@property (readonly, nonatomic) long long createTime;
@property (readonly, copy, nonatomic) NSString *openTime;
@property (readonly) NSDictionary *syncedExt;
@property (readonly, copy, nonatomic) NSDictionary *sharedSyncedExt;
@property (readonly, copy, nonatomic) NSString *versionTime;
@property (readonly, copy, nonatomic) NSString *lastMessageIdentifier;
@property (readonly, copy, nonatomic) id<BDECPigeonMessageInterface> lastMessage;
@property (readonly, nonatomic) NSNumber *shortID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isMute;
@property (readonly, nonatomic) BOOL stickOnTop;
@property (readonly, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) unsigned long long badgeCount;
@property (readonly, nonatomic) unsigned long long readBadgeCount;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, copy, nonatomic) NSDictionary *unreadCountDataDict;
@property (readonly, nonatomic) BDECPigeonUnReadCountModelV2 *unreadCountNew;
@property (readonly, nonatomic) BDECPigeonConversationHintModel *lastHint;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (readonly, nonatomic) int belongingInbox;
@property (readonly, nonatomic) BOOL closed;
@property (readonly, nonatomic) long long currentUserId;
@property (readonly, nonatomic) BDECPigeonClientConfigV2 *config;
@property (readonly) NSDate *draftAt;
@property (readonly, copy, nonatomic) NSString *draftText;
@property (readonly, nonatomic) BOOL isOneToOne;
@property (readonly, copy, nonatomic) NSString *pigeonShopID;
@property (readonly, copy, nonatomic) NSString *groupChatIdempotentId;
@property (readonly, nonatomic) NSDictionary *localExt;
@property (readonly, copy, nonatomic) NSString *latestServerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conversationWithId:(id)a0 channel:(id)a1;
+ (id)conversationWithInner:(id)a0 channel:(id)a1;

- (id)messageWithId:(id)a0;
- (void)updateWithInnerTarget:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
