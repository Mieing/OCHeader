@class MMHDHeadImageView, NSString, NSArray, WCOutInviteFriendLogic, NSMutableArray, WCOutPhoneContact, MMTableView, CContactVerifyLogic;

@interface WCOutContactProfileViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate, WCOutInviteFriendLogicDelegate> {
    WCOutPhoneContact *m_contact;
    MMTableView *m_tableView;
    NSMutableArray *m_sectionKeyArray;
    NSMutableArray *m_cellKeyForOtherSectionArray;
    NSArray *m_recentCallLists;
    NSArray *m_phoneLists;
    double m_nameLabel_X;
    BOOL m_isShowAllRecentCallCell;
    BOOL m_isShowGreenBtn;
    CContactVerifyLogic *m_oContactVerifyLogic;
    MMHDHeadImageView *m_HDHeadImageView;
}

@property (retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWCOutPhoneContact:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)configData;
- (void)configTableView;
- (void)configTableViewHeaderView;
- (void)configTableViewFooterView;
- (void)configModel;
- (void)savePhoneNumToAddressBook;
- (void)showAllRecentCallItems;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)showAllRecentCallCell;
- (id)baseInfoCellWithInfo:(id)a0;
- (id)phoneWithLabelCellAtRow:(unsigned long long)a0 InTableView:(id)a1;
- (id)recentCallCellAtRow:(unsigned long long)a0;
- (int)numberOfRowForRecentCallSection;
- (void)onContactVerifyFail;
- (void)contactSendRequestOk:(id)a0;
- (void)contactAddContactOk:(id)a0;
- (void)onContactVerifyFillVerifyMsg:(id)a0;
- (void)onSendVerifyMsgOK;
- (void)onSendVerifyMsgCancel;
- (void)addNewCall:(id)a0;
- (void)updateWCOutContacts:(id)a0;
- (void)updateWCOutContactsInfo;
- (void).cxx_destruct;

@end
