@class NSDate, NSString, NSArray, BDECPigeonClientV2, NSOrderedSet, BDECPigeonUnReadCountModelV2, NSDictionary, BDECPigeonMultiDelegate, BDECPigeonClientConfigV2, NSNumber, BDECPigeonConversationHintModel;
@protocol BDECPigeonGroupConversationDelegate, BDECIMCloudParticipantsInConversationDataSourceV2Interface, BDECPigeonMessageInterface;

@interface BDECPigeonGroupConversation : BDECPigeonConversationV2 <BDECIMCloudParticipantsInConversationDataSourceV2Delegate, BDECPigeonGroupConversationInterface>

@property (readonly, nonatomic) id<BDECIMCloudParticipantsInConversationDataSourceV2Interface> participantDataSource;
@property (readonly, nonatomic) BDECPigeonMultiDelegate<BDECPigeonGroupConversationDelegate> *multiDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *desc;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) NSString *notice;
@property (readonly, nonatomic) long long ownerID;
@property (readonly, nonatomic) BOOL isDissolved;
@property (readonly, nonatomic) BOOL isCurrentUserAParticipant;
@property (readonly) unsigned long long participantsCount;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *admParticipants;
@property (readonly, weak, nonatomic) BDECPigeonClientV2 *client;
@property (readonly, copy, nonatomic) NSString *bizConversationID;
@property (readonly, copy) NSString *pigeonConGroupID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *curTalkID;
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
@property (readonly, copy, nonatomic) NSString *customerUID;
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

+ (Class)messageClass;

- (void)participantsDataSourceDidUpdate:(id)a0;
- (void)fetchParticipantsAlias:(id)a0 secParticipants:(id)a1 completion:(id /* block */)a2;
- (BOOL)messageReadWithIndex:(long long)a0;
- (id)initWithInner:(id)a0 channel:(id)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
