@class NSDate, NSString, TIMXOConversation, BDECIMClientConfig, NSDictionary, NSOrderedSet, NSNumber;
@protocol BDECIMCloudSubConversationInterface;

@interface BDECIMCloudConversation : NSObject <BDECIMCloudConversationInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXOConversation *timxConversation;
@property (readonly) int belongingInbox;
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *sharedSyncedExt;
@property (readonly) NSDictionary *localExt;
@property (readonly) NSOrderedSet *someParticipants;
@property (readonly) NSString *lastMessageIdentifier;
@property (readonly) NSNumber *shortID;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, copy, nonatomic) NSDictionary *unreadCountDataNew;
@property (readonly, copy, nonatomic) NSDictionary *unreadCountDataDict;
@property (readonly) NSDate *draftAt;
@property (readonly) NSString *draftText;
@property (readonly) long long createTime;
@property (readonly) BOOL mute;
@property (readonly) BOOL stickOnTop;
@property (readonly) NSDate *updatedAt;
@property (readonly) id<BDECIMCloudSubConversationInterface> subConversation;
@property (readonly) unsigned long long type;
@property (readonly) NSString *name;
@property (readonly) NSString *desc;
@property (readonly) NSString *icon;
@property (readonly) NSString *notice;
@property (readonly) long long ownerID;
@property (readonly) BOOL isCurrentUserAParticipant;
@property (readonly) unsigned long long participantsCount;
@property (readonly) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createConversationWithOtherParticipants:(id)a0 type:(unsigned long long)a1 inInbox:(int)a2 participantsBizRoleObjects:(id)a3 options:(id)a4 name:(id)a5 config:(id)a6 completion:(id /* block */)a7;
+ (void)createConversationWithOtherParticipants:(id)a0 type:(unsigned long long)a1 inInbox:(int)a2 options:(id)a3 config:(id)a4 completion:(id /* block */)a5;
+ (void)createSubConversationWithParentConvShortID:(long long)a0 parentConvID:(id)a1 inInbox:(int)a2 participantsObjects:(id)a3 options:(id)a4 config:(id)a5 completion:(id /* block */)a6;
+ (void)createConversationWithOtherParticipants:(id)a0 type:(unsigned long long)a1 inInbox:(int)a2 config:(id)a3 completion:(id /* block */)a4;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (void)deleteWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)resendMessage:(id)a0;
- (void)markAllMessagesBeforeMessage:(id)a0 asReadWithMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)setStickOnTop:(BOOL)a0 completion:(id /* block */)a1;
- (void)setMute:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 config:(id)a1;
- (void)updateCurrentIfNeeded:(id /* block */)a0;
- (long long)otherUserIDFor1to1Chat;
- (void)startMessageReadPollingTimerWithInterval:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)cancelMessageReadPollingTimer;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (id)sendMessage:(id)a0 error:(id *)a1;
- (void)setDraft:(id)a0;

@end
