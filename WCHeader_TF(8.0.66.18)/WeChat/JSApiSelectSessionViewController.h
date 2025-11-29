@class NSString, NSMutableDictionary, WCDataSearcher, UIView, ContactsDataLogic, MMTableView;
@protocol JSApiSelectSessionViewControllerDelegate;

@interface JSApiSelectSessionViewController : WCPayBaseViewController <WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate> {
    id<JSApiSelectSessionViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_titleView;
    ContactsDataLogic *m_contactsDataLogic;
    NSMutableDictionary *m_dicContactsData;
    WCDataSearcher *_searcher;
}

@property (nonatomic) unsigned int m_uiScene;
@property (nonatomic) BOOL m_bSupportSectionIndex;
@property (nonatomic) BOOL m_isSession;
@property (copy, nonatomic) NSString *navTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)onCancelBack:(id)a0;
- (void)initData;
- (void)viewDidDisappear:(BOOL)a0;
- (void)initTitleArea;
- (void)setExtraCellLineHidden:(id)a0;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeNewSessionCell:(id)a0;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (id)cellForSearchViewTable:(id)a0 index:(id)a1;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (void)cancelSearch;
- (void).cxx_destruct;

@end
