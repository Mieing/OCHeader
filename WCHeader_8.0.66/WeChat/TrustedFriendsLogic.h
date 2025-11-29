@class NSString, TrustedFriendsCgi, NSMutableArray;
@protocol TrustedFriendsLogicDelegate;

@interface TrustedFriendsLogic : MMObject <MultiSelectContactsViewControllerDelegate, TrustedFriendsCgiDelegate>

@property (weak, nonatomic) id<TrustedFriendsLogicDelegate> m_delegate;
@property (retain, nonatomic) TrustedFriendsCgi *m_trustedFriendCgi;
@property (retain, nonatomic) NSMutableArray *m_trustedFriendList;
@property (nonatomic) unsigned int m_maxTrustedFriendCount;
@property (nonatomic) BOOL m_isListHadChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (id)getTrustedFriendViewController;
- (unsigned long long)getTrustedFriendsCount;
- (unsigned long long)getMaxLimit;
- (id)getTrustedFriends;
- (BOOL)canAddFriendToTrustedFriendList;
- (BOOL)shouldNofityUserForCurrentFriendNotEnough;
- (BOOL)shouldSyncTrustedFriendList;
- (void)startChooseTrustedFriendsForAdding;
- (void)startChooseTrustedFriendsForRemoving:(id)a0;
- (void)startGetTrustedFriends;
- (void)startSyncTrustedFriends;
- (id)getContactsFromTrustedFriendContacts:(id)a0;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onGetTrustedFriendsListSuccess:(id)a0;
- (void)onSyncTrustedFriendsSuccess:(id)a0;
- (void)onCgiFailed:(unsigned int)a0 error:(int)a1 msg:(id)a2;
- (BOOL)showErrorTips:(id)a0 forReason:(unsigned int)a1;
- (void).cxx_destruct;

@end
