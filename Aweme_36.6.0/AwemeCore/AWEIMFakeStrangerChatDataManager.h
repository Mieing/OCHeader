@class AWEIMChatModel, NSString;
@protocol AWEIMFakeStrangerChatDataManagerDelegate;

@interface AWEIMFakeStrangerChatDataManager : NSObject <IESIMChatDataManagerDelegate, IESIMChatDataManagerDataSource>

@property (retain) AWEIMChatModel *latestChatModel;
@property (weak, nonatomic) id<AWEIMFakeStrangerChatDataManagerDelegate> delegate;
@property (nonatomic) BOOL ifkickOffStrangerBoxDataSource;
@property (readonly, nonatomic) long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_chatDataManager:(id)a0 chatDidUpdate:(id)a1;
- (void)iesim_chatDataManager:(id)a0 chatListDidUpdateWithDeletedChats:(id)a1 insertedChats:(id)a2 firstPage:(BOOL)a3 reason:(long long)a4;
- (void)iesim_chatDataManager:(id)a0 totalUnreadCountUpdate:(long long)a1;
- (void)iesim_chatDataManager:(id)a0 MessagePropertiesDidUpdate:(id)a1 chat:(id)a2 oldPropertyMap:(id)a3 newPropertyMap:(id)a4 reason:(long long)a5;
- (void)iesim_chatDataManager:(id)a0 unreadCountV2Update:(long long)a1;
- (void)loadRemainingChatListWithCompletion:(id /* block */)a0;
- (BOOL)iesim_shouldFilterConversation:(id)a0 chatDataControllerType:(long long)a1 filterReason:(id *)a2;
- (long long)chatCount;
- (id)strangerBoxChatDataManager;
- (long long)firstPageSize;
- (long long)iesim_compareConversationA:(id)a0 withConversationB:(id)a1;
- (BOOL)iesim_needUpdateSortOrder;
- (void)iesim_didEndUpdateSortOrder;
- (void)prepareForIMLogin;
- (void)prepareForIMLogout;
- (id)p_oldSortOrderVersionKey;
- (id)config;
- (void).cxx_destruct;
- (BOOL)hasMore;

@end
