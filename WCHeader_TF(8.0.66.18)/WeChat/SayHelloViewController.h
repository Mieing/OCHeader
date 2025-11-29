@class FindContactSearchViewCellInfo, NSString, MMTableViewInfo, UIView, MMNearByHeaderView, SayHelloDataLogic, CPushContact, SeePeopleNearByLogicController, NSMutableSet, SendVerifyMsgLogicController, MMTableView, UILabel;

@interface SayHelloViewController : MMUIViewController <SeePeopleNearByUIDelegate, IOpenImResourceMgrExt, FindContactSearchViewCellInfoDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, SayHelloDataLogicDelegate, WCActionSheetDelegate, ContactsItemViewDelegate, VerifyPhoneDelegate> {
    MMTableView *m_tableView;
    MMTableViewInfo *m_tableViewInfoNoHello;
    UIView *m_headerSearchView;
    FindContactSearchViewCellInfo *m_searchInfo;
    SayHelloDataLogic *m_DataLogic;
    UILabel *m_labelTip;
    CPushContact *m_selectedContact;
    MMNearByHeaderView *m_nearByHeaderView;
    SeePeopleNearByLogicController *m_peopleNearByLogicController;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
}

@property (retain, nonatomic) NSMutableSet *expandedContacts;
@property (nonatomic) unsigned int m_uiScene;
@property (nonatomic) BOOL fromSayHelloButton;
@property (retain, nonatomic) NSString *reportSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)OnViewDetail:(id)a0 prarentViewController:(id)a1;
+ (void)reportFriendAssistAction:(unsigned long long)a0 forContact:(id)a1;

- (void)setupReportData;
- (void)reportClickSayHelloMobileContactsAdd;
- (void)reportClickSayHelloSearchAccount;
- (void)reportClickSayHelloFriendsAddButtonAddressbook;
- (void)reportClickSayHello:(id)a0 extraDic:(id)a1;
- (void)initData;
- (void)initTableView;
- (void)onClearNearHeaderClicked:(id)a0;
- (void)onClearMyLbsDataFinishedWithResult:(BOOL)a0;
- (BOOL)shouldShowNearByHeaderView;
- (id)makeNearByHeaderView;
- (id)makeNewFriendHeaderView;
- (void)updateHeaderView;
- (void)addMobileFriend;
- (void)updateNoHello;
- (void)onAddContact;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)willAppear;
- (BOOL)isSeachActive;
- (BOOL)shouldInteractivePop;
- (void)OnSayHelloDataChange;
- (id)getViewController;
- (void)bindPhoneReturn;
- (void)updateOpenImContactResource;
- (void)onGetOpenImResourceDone:(id)a0;
- (id)GetClearTip;
- (void)OnClear:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onContactsItemViewRightButtonClick:(id)a0;
- (void)onContactsItemViewHeightChanged:(id)a0;
- (void)makeHelloCell:(id)a0 helloMsg:(id)a1 delegate:(id)a2;
- (void)OnSayHelloDataVerifyContactOK:(id)a0;
- (void)OnSayHelloDataSendVerifyMsg:(id)a0;
- (double)getCellDescLabelRightMargin;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onMainWindowFrameChanged;
- (void)onFindContactSearchViewDidPresentSearch:(id)a0;
- (void)onFindContactSearchViewSearchBar:(id)a0 textDidChange:(id)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
