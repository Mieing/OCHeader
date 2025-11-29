@class MMTableView, NSString, CContactVerifyLogic, CContactVerifyPreCheckBusinessLogic, AddressBookFriend, UIButton, NSMutableDictionary, UITextField, NSMutableArray, ContactInfoViewController, WCSearcher;

@interface AddressBookFriendViewController : MMUIViewController <WCSearchDelegate, MMTableViewIndexViewDelegate, ContactVerifyPreCheckBusinessLogicDelegate, IContactMgrExt, UITableViewDataSource, UITableViewDelegate, IAddressBookFriendMgrExt, contactInfoDelegate, VerifyPhoneDelegate, ContactInfoViewControllerDelegate, ContactsItemViewDelegate, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate> {
    MMTableView *m_tableView;
    UITextField *m_searchTextField;
    UIButton *m_searchBtn;
    NSMutableArray *m_arrAddressBookFriendList;
    NSMutableDictionary *m_dicNicknameToFriends;
    NSMutableArray *m_arrFilteredFriendList;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrKey;
    NSMutableDictionary *m_dicFriendList;
    CContactVerifyPreCheckBusinessLogic *m_verifyPreCheckBusinessLogic;
    NSMutableDictionary *m_cacheContactDic;
}

@property (retain, nonatomic) AddressBookFriend *m_oCurrentFriendWrap;
@property (retain, nonatomic) ContactInfoViewController *m_CurrentFriendItemView;
@property (retain, nonatomic) WCSearcher *searcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isForbidPageSheet;
- (id)init;
- (void)dealloc;
- (BOOL)canSyncAddressBook;
- (void)startLoading;
- (void)stopLoading;
- (void)sortFriendList;
- (void)trySyncAddressBook;
- (void)loadData:(BOOL)a0;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)goToAddContactWhenHadContactVerify:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)newAddressBookFriendArrived;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)openContactInfoViewController:(id)a0;
- (void)makeAddressBookFriendCell:(id)a0 row:(unsigned long long)a1 section:(unsigned long long)a2 tableView:(id)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)a0;
- (void)contactSendRequestOk:(id)a0;
- (void)onSendVerifyMsgCancel;
- (void)onContactVerifyFillVerifyMsg:(id)a0;
- (void)verifyContact:(id)a0;
- (void)onContactsItemViewRightButtonClick:(id)a0;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)a0 opcode:(unsigned int)a1;
- (id)getVerifyPreCheckBusinessLogic;
- (void)onAddContact;
- (void)onRemoveContact;
- (void)onUpdateContact:(id)a0;
- (void)onNewContact:(id)a0;
- (void)addToContactsFromContactInfo:(id)a0;
- (void)newMessageFromContactInfo:(id)a0;
- (void)bindPhoneReturn;
- (void)doSearch:(id)a0;
- (void)wcsSearchBarTextDidBeginEditing:(id)a0;
- (BOOL)wcsSearchBarShouldBeginEditing:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)wcsSearchBarCancelButtonClicked:(id)a0;
- (id)getViewController;
- (void).cxx_destruct;

@end
