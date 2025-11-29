@class NSString, NSMutableDictionary, WCSearcher, UILabel, NSMutableArray, MMTableView;
@protocol contactsDelegate;

@interface ContactsGenericViewController : MMUIViewController <WCSearchDelegate, MMTableViewIndexViewDelegate, UITableViewDelegate, UITableViewDataSource, contactInfoDelegate, IContactMgrExt> {
    MMTableView *m_tableView;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_arrAllKey;
    BOOL m_bSearching;
    WCSearcher *_searcher;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableDictionary *_dicMatchTip;
    UILabel *m_emptyStateLabel;
}

@property (weak, nonatomic) id<contactsDelegate> m_delegate;
@property (nonatomic) long long m_iViewType;
@property (retain, nonatomic) NSString *m_nsDomain;
@property (nonatomic) BOOL m_bPopUp;
@property (retain, nonatomic) NSString *reportSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupReportBlackListData;
- (void)reportClickBlackListContactWithUserName:(id)a0 contactIndex:(unsigned int)a1;
- (unsigned int)getPositionWithIndexPath:(id)a0;
- (void)processContact:(id)a0;
- (id)parseContactKey:(id)a0;
- (void)deleteContact:(id)a0 deleteInDB:(BOOL)a1;
- (void)tryDeleteContactInSection:(id)a0;
- (void)addContactInternal:(id)a0;
- (void)processNewContact:(id)a0;
- (void)addToContactsFromContactInfo:(id)a0;
- (void)newMessageFromContactInfo:(id)a0;
- (void)reloadData;
- (void)showContactInfoView:(id)a0;
- (id)addSectionKey:(id)a0;
- (void)loadContacts;
- (void)onDone:(id)a0;
- (void)initData;
- (void)initTitleArea;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)createEmptyStateLabel;
- (void)updateEmptyStateLabelVisibility;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (void)doSearch:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)wcsSearchBarCancelButtonClicked:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (double)getVisibleHeight;
- (void).cxx_destruct;

@end
