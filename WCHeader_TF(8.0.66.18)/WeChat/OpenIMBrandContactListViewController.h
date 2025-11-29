@class MMTableView, NSString, NSDictionary, UISearchBar, ContactsDataLogic, NSMutableArray, MMTitleView;

@interface OpenIMBrandContactListViewController : MMUIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, IOpenImResourceMgrExt> {
    MMTitleView *_titleView;
    MMTableView *_tableView;
    ContactsDataLogic *_contactsDataLogic;
    NSMutableArray *_sectionKeyArray;
    NSDictionary *_allOpenIMContactsDic;
    NSString *_openIMAcctype;
    UISearchBar *_searchBar;
    NSMutableArray *m_arrAccountDeletedOpenIMContact;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOpenIMAcctype:(id)a0 contactsDataSourceLogic:(id)a1;
- (void)tryUpdateResource;
- (void)initTitleView;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)a0;
- (void)reportEnter;
- (void)reportQuit;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)updateNewContactsItemCell:(id)a0 contact:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)getCContactUsingIndexPath:(id)a0;
- (BOOL)isAccountDeletedSession:(long long)a0;
- (id)getOpenIMContactClassifyInSession:(long long)a0;
- (void)showContactInfoView:(id)a0;
- (void)onGetOpenImResourceDone:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
