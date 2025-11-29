@class WeToast, NSString, TrustedFriendsLogic, MMTableViewInfo, SetTrustedFriendTipsView;

@interface SetTrustedFriendsViewController : MMUIViewController <ChatRoomMemberGridViewDelegate, TrustedFriendsLogicDelegate, SetTrustedFriendTipsViewDelegate, ILinkEventExt>

@property (retain, nonatomic) MMTableViewInfo *m_tableViewInfo;
@property (retain, nonatomic) TrustedFriendsLogic *m_trustedFriendsLogic;
@property (retain, nonatomic) WeToast *m_toastView;
@property (retain, nonatomic) SetTrustedFriendTipsView *m_tipsView;
@property (nonatomic) BOOL m_isDeleting;
@property (copy, nonatomic) NSString *tipWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onPressBackBtn;
- (void)addMember;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(id)a0;
- (void)didStartCGI:(unsigned int)a0;
- (void)didFailedCGI:(unsigned int)a0 error:(unsigned int)a1 msg:(id)a2;
- (void)didFinishGetTrustedFriends:(id)a0 contacts:(id)a1;
- (void)didFinishSyncTrustedFriends:(id)a0 contacts:(id)a1;
- (void)didAddTrustedFriendsLocally:(id)a0 contacts:(id)a1;
- (void)didRemoveTrustedFriendsLocally:(id)a0 contacts:(id)a1;
- (BOOL)hasSetTrustedFriend;
- (void)onPressDoneBtn;
- (void)didAlertViewWithReason:(unsigned int)a0 isCancelButton:(BOOL)a1;
- (void)goBackToMySetting;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)initNavigationBar;
- (void)initTableView;
- (id)makeHeaderView;
- (void)initMemberView;
- (void)reloadMemberView;
- (void)makeMemListCell:(id)a0 CellInfo:(id)a1;
- (void)makeWhiteCell:(id)a0 CellInfo:(id)a1;
- (void)makeMemListSection:(id)a0;
- (unsigned long long)getMemberViewColumnCount;
- (void)relayoutNaviBarButton:(BOOL)a0;
- (void)tryShowNotEnoughTips;
- (void)onClose;
- (void).cxx_destruct;

@end
