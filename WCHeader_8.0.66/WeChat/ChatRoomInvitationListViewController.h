@class ChatRoomInvitationContactProfileLogic, UIView, CContact, NSString, UILabel, NSMutableArray, MMTableView;

@interface ChatRoomInvitationListViewController : MMUIViewController <ChatRoomInvitationMgrExt, UITableViewDelegate, UITableViewDataSource, IContactMgrExt, ChatRoomInvitationMultiMenuTableViewCellDelegate>

@property (nonatomic) unsigned int unReadCount;
@property (retain, nonatomic) ChatRoomInvitationContactProfileLogic *contactProfileLogic;
@property (retain, nonatomic) UILabel *emptyTipsLabel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *arrInvitations;
@property (retain, nonatomic) UIView *hasReadSectionHeaderView;
@property (retain, nonatomic) CContact *roomContact;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)reloadData;
- (void)updateContacts:(id)a0;
- (void)initView;
- (id)getChatRoomInvitationListEmptyTips;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)a0;
- (BOOL)shouldRestrictContentViewSize;
- (Class)getChatRoomInvitationMultiMenuTableViewCellClass;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 invitationWrap:(id)a1;
- (void)addMultiMenu:(id)a0 invitationWrap:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)handleTableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)shouldShowHasReadSectionHeaderViewForSection:(long long)a0;
- (void)makeHasReadSectionHeaderView;
- (void)onTapApproveForChatRoomInvitation:(id)a0;
- (void)onOpenContactProfile:(id)a0 invitationWrap:(id)a1;
- (void)onOpenMsgHistoryOfContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onReceiveNewChatRoomInvitation:(id)a0;
- (void)onChatRoomInvitationStatusUpdated:(id)a0;
- (void)onReplaceOldChatRoomInvitation:(id)a0 withNewInvitation:(id)a1;
- (void)onApproveChatRoomInvitation:(id)a0 success:(BOOL)a1 errInfo:(id)a2;
- (void)handelApproveChatRoomInvitation:(id)a0 success:(BOOL)a1 errInfo:(id)a2;
- (BOOL)checkCanTapApproveForChatRoomInvitation:(id)a0;
- (id)getCircleButtonImage:(id)a0 coler:(id)a1;
- (double)hasReadSectionHeaderHeight;
- (void).cxx_destruct;

@end
