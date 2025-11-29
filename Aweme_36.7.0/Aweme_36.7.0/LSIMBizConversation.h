@class LSIMObserverHash, NSString, BDECPigeonConversation, NSDate, NSArray, BDECPigeonUnReadCountModel, NSDictionary, NSNumber, BDECPigeonMessagesInConversationDataSource;

@interface LSIMBizConversation : NSObject <BDECPigeonParticipantsInConversationDelegate>

@property (class, readonly, nonatomic) double serverTimestamp;

@property (retain, nonatomic) BDECPigeonMessagesInConversationDataSource *dataSource;
@property (retain, nonatomic) BDECPigeonConversation *conversation;
@property (retain, nonatomic) LSIMObserverHash *observerHash;
@property (nonatomic) BOOL isFetchingHistory;
@property (copy, nonatomic) NSString *groupIconURL;
@property (readonly, nonatomic) unsigned long long lsConversationType;
@property (readonly, copy, nonatomic) NSString *bizConversationID;
@property (readonly, nonatomic) NSNumber *shortID;
@property (readonly, copy, nonatomic) NSString *lastMessageIdentifier;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, nonatomic) BDECPigeonUnReadCountModel *unreadCountNew;
@property (readonly, copy, nonatomic) NSDictionary *unreadCountDataDict;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (readonly, nonatomic) BOOL isMute;
@property (readonly, nonatomic) BOOL stickOnTop;
@property (readonly, nonatomic) BOOL countdown;
@property (readonly, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) double updateTime;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;
@property (readonly, nonatomic) int inbox;
@property (readonly, copy, nonatomic) NSString *draftText;
@property (readonly, nonatomic) BOOL hasMoreHistoryMessages;
@property (readonly, copy, nonatomic) NSString *pigeonShopID;
@property (readonly, copy, nonatomic) NSString *pigeonConGroupID;
@property (readonly, copy, nonatomic) NSString *customerUID;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *groupDesc;
@property (readonly, copy, nonatomic) NSString *groupIcon;
@property (readonly, nonatomic) NSString *groupNoticeString;
@property (readonly, nonatomic) long long ownerID;
@property (readonly, copy, nonatomic) NSString *ownerIDStr;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL isGroupOneToOne;
@property (readonly, nonatomic) BOOL isOneToOne;
@property (readonly, copy, nonatomic) NSString *groupChatIndempotentId;
@property (readonly, nonatomic) BOOL isDissolved;
@property (readonly, nonatomic) BOOL closed;
@property (readonly, nonatomic) BOOL isFromSiXin;
@property (readonly, nonatomic) NSArray *oParticipants;
@property (readonly, nonatomic) BOOL isCurrentUserAParticipant;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceClientWithConversationType:(unsigned long long)a0;
+ (id)conversationWithPigeonConversation:(id)a0;
+ (id)conversationWithBizConversationID:(id)a0 conversationType:(unsigned long long)a1 inbox:(long long)a2;
+ (id)conversationsWithPigeonConversations:(id)a0;

- (void)setMute:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithPigeonConversation:(id)a0;
- (void)p_groupParticipantsBind;
- (void)notifyDataSourceObserverWithHandler:(id /* block */)a0;
- (void)notifyDataSourceConversationDidUpdate;
- (void)registerObserver:(id)a0 forProtocol:(id)a1;
- (void)unregisterObserver:(id)a0 forProtocol:(id)a1;
- (void)notifyObserversWithProtocol:(id)a0 handler:(id /* block */)a1;
- (void)p_fetchGroupIconURLWithRetryCount:(unsigned long long)a0;
- (void)participantsDidUpdate:(id)a0;
- (BOOL)checkUserIsAvailableMember:(id)a0;
- (void)loadHistoryMessageWithCompletion:(id /* block */)a0;
- (void)registerDataSourceObserver:(id)a0;
- (void)unregisterDataSourceObserver:(id)a0;
- (id)observersForProtocol:(id)a0;
- (void)fetchGroupIconURL;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (id)serviceClient;
- (void)setupDataSource;
- (BOOL)isEqualToConversation:(id)a0;
- (void)setDraft:(id)a0;

@end
