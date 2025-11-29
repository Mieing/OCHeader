@protocol TrustedFriendsCgiDelegate;

@interface TrustedFriendsCgi : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<TrustedFriendsCgiDelegate> m_delegate;

- (BOOL)getTrustedFriendsList;
- (BOOL)syncFriendsToTrustedList:(id)a0;
- (void)handleGetTrustedFriendsResp:(id)a0;
- (void)handleSyncTrustedFriendsResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
