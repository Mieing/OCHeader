@class NSString, NSMutableDictionary, UIButton, GroupSelectContactsViewController, NSMutableArray, ContactsDataLogic, MMTableView, ChatRoomBatchUpgradeOpenIMLogic;

@interface ChatRoomBatchUpgradeOpenIMViewController : ChatRoomBaseUpgradeOpenIMViewController <ChatRoomBatchUpgradeOpenIMLogicDelegate, UITableViewDataSource, UITableViewDelegate, ILinkEventExt, GroupSelectContactsViewControllerDelegate, ContactsDataLogicDelegate> {
    ChatRoomBatchUpgradeOpenIMLogic *m_chatRoomBatchUpgradeOpenIMLogic;
    MMTableView *m_tableView;
    NSMutableArray *m_needUpgradeOpenIMChatRoomAr;
    NSMutableDictionary *m_dicMultiSelect;
    GroupSelectContactsViewController *m_groupSelectContactsViewController;
    BOOL m_isHadCanUpgradeOpenIMGroupContact;
    UIButton *m_iSelectedBtn;
    NSMutableArray *m_upgradeOpenIMChatRoomUsrNameAr;
    NSMutableArray *m_normalChatRoomUsrNameAr;
    BOOL m_isDoAccept;
    BOOL m_isSeletedNormalChatRoom;
    ContactsDataLogic *m_contactsDataLogic;
    BOOL m_isHadReport;
}

@property (retain, nonatomic) NSString *chatRoomBatchUpgradeOpenIMTicket;
@property (retain, nonatomic) NSString *chatRoomBatchUpgradeOpenIMExtInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)initData;
- (void)layoutView;
- (void)layoutISelectedBtn;
- (void)resetSelectedBtnOriAcceptBtn;
- (void)reloadData;
- (BOOL)isSelected:(id)a0;
- (BOOL)checkMaxNeedUpgradeOpenIMChatRoomArCount;
- (id)getBeUpgradeContactsListMaxCount:(unsigned int)a0;
- (BOOL)checkIsShowEmptyTipCell;
- (void)reportBatchUpgradeAssociateChatRoom;
- (void)initTableView;
- (id)genHeaderView;
- (void)reloadTableData;
- (id)genFooterView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeAddSelectChatRoomCell:(id)a0 ForRowAtIndexPath:(id)a1;
- (void)makeEmptyTipCell:(id)a0 ForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 ForRowAtIndexPath:(id)a1;
- (id)getCellImage:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)doIAccept;
- (void)onCancel;
- (void)openSelectGroup;
- (BOOL)onShouldSelectContact:(id)a0;
- (void)onGroupSelectContactReturn:(id)a0;
- (void)OnGetChatRoomBatchUpgradeOpenIMInfoWithTopTitleText:(id)a0 andTitleText:(id)a1 andContentText:(id)a2;
- (void)showErrorMessage:(id)a0;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
