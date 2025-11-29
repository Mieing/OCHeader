@interface AWEIMGrowthImpl.StreakConversationSharedSyncedExtDataSource : AWEIMGrowthImpl.StreakBaseDataSource <IESIMChatDataManagerDelegate, AWEUserMessage> {
    void /* unknown type, empty encoding */ streakStringCache;
    void /* unknown type, empty encoding */ heavyUserOptV1Enable;
}

- (void)iesim_chatDataManager:(id)a0 chatDidUpdate:(id)a1;
- (void)iesim_chatDataManager:(id)a0 chatListDidUpdateWithDeletedChats:(id)a1 insertedChats:(id)a2 firstPage:(BOOL)a3 reason:(long long)a4;
- (void)iesim_chatDataManager:(id)a0 totalUnreadCountUpdate:(long long)a1;
- (void)iesim_chatDataManager:(id)a0 chatsDidUpdate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
