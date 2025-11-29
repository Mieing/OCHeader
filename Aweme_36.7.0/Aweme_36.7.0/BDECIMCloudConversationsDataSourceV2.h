@class NSString, NSArray, TIMXOConversationsDataSource, BDECPigeonClientConfigV2;
@protocol BDECIMCloudConversationsDataSourceV2Delegate;

@interface BDECIMCloudConversationsDataSourceV2 : NSObject <TIMXOConversationsDataSourceDelegate, BDECIMCloudConversationsDataSourceV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (retain, nonatomic) TIMXOConversationsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForMutedConversations;
@property (readonly, copy, nonatomic) NSArray *currentConversationIdentifiers;
@property (weak, nonatomic) id<BDECIMCloudConversationsDataSourceV2Delegate> delegate;

+ (void)fetchConversationInfo:(long long)a0 conversationID:(id)a1 type:(unsigned long long)a2 inInbox:(int)a3 config:(id)a4 completion:(id /* block */)a5;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (void)setNeedPullMessageInInboxType:(int)a0;
- (void)loadSessions;
- (void)conversationDataSource:(id)a0 didUpdateWithUpdate:(id)a1 updateReason:(long long)a2;
- (void)conversationDataSource:(id)a0 didLoadAllConversations:(id)a1;
- (void)conversationDataSource:(id)a0 conversationUpdate:(id)a1;
- (void)onConversationDataSourceMessagesDeleted:(id)a0 belongingConversationMap:(id)a1;
- (void)loadRemainingSessions;
- (void)conversationDataSource:(id)a0 totalUnreadCountFirstCaculatedWithMonitorArray:(id)a1 boxType:(long long)a2;
- (id)initWithIncludeEmpty:(BOOL)a0 inboxes:(id)a1 config:(id)a2;
- (void)deleteConversationsBeforeTime:(id)a0 minRemain:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)loadRemainSessions;
- (void).cxx_destruct;

@end
