@class NSString, NSArray, BDECIMClientConfig, TIMXOConversationsDataSource;
@protocol BDECIMCloudConversationsDataSourceDelegate;

@interface BDECIMCloudConversationsDataSource : NSObject <TIMXOConversationsDataSourceDelegate, BDECIMCloudConversationsDataSourceInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXOConversationsDataSource *timxDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForUnmutedConversations;
@property (readonly, nonatomic) unsigned long long totalUnreadNumberForMutedConversations;
@property (readonly, copy, nonatomic) NSArray *currentConversationIdentifiers;
@property (weak, nonatomic) id<BDECIMCloudConversationsDataSourceDelegate> delegate;

+ (void)fetchConversationInfo:(long long)a0 conversationID:(id)a1 type:(unsigned long long)a2 inInbox:(int)a3 config:(id)a4 completion:(id /* block */)a5;

- (id)awe_bindObserverKeyPath:(id)a0 receiver:(id)a1 receiverKeyPath:(id)a2;
- (id)awe_observerKeyPath:(id)a0;
- (void)setNeedPullMessageInInboxType:(int)a0;
- (void)loadSessions;
- (void)conversationDataSource:(id)a0 didUpdateWithUpdate:(id)a1 updateReason:(long long)a2;
- (void)deleteConversationsBeforeTime:(id)a0 minRemain:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithIncludeEmpty:(BOOL)a0 config:(id)a1;
- (void).cxx_destruct;

@end
