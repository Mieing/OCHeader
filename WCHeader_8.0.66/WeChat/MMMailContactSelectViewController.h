@class NSString, NSMutableDictionary, NSMutableSet, WCSearcher, NSMutableArray, MMTableView;
@protocol MMMailContactSelectViewDelegate;

@interface MMMailContactSelectViewController : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource> {
    NSMutableArray *arrMailContact;
    NSMutableArray *arrKeys;
    NSMutableDictionary *dicContacts;
    NSMutableArray *arrSelection;
    BOOL m_bSearching;
    MMTableView *m_tableView;
    NSMutableArray *m_arrFilteredContacts;
}

@property (retain, nonatomic) NSMutableSet *setSelectedContacts;
@property (weak, nonatomic) id<MMMailContactSelectViewDelegate> m_delegate;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) WCSearcher *searcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithMailContacts:(id)a0;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initSearchBar;
- (void)onCancel:(id)a0;
- (void)onDone:(id)a0;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)doSearch:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarTextDidBeginEditing:(id)a0;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
