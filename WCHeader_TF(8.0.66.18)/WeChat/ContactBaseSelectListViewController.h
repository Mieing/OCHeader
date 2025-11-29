@class NSMutableDictionary, NSDictionary, WCSearcher, NSString, NSMutableArray, MMTableView;
@protocol ContactSelectListViewControllerDelegate;

@interface ContactBaseSelectListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCSearchDelegate, MMTableViewIndexViewDelegate, contactInfoDelegate> {
    NSMutableArray *m_arrAllKey;
    BOOL m_bSearching;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableDictionary *_dicMatchTip;
}

@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) WCSearcher *m_searcher;
@property (retain, nonatomic) NSDictionary *m_dicExistContact;
@property (retain, nonatomic) NSMutableDictionary *m_dicMultiSelect;
@property (retain, nonatomic) NSMutableDictionary *m_dicAllContacts;
@property (nonatomic) BOOL m_isMultiple;
@property (nonatomic) BOOL m_isHiddenAccessory;
@property (weak, nonatomic) id<ContactSelectListViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initData;
- (void)initTitleArea;
- (void)initTableView;
- (void)initSearchBar;
- (void)initTableHeaderView;
- (void)initView;
- (double)getTableViewHeight;
- (double)getCellHeight;
- (void)processContact:(id)a0;
- (id)parseContactKey:(id)a0;
- (void)addContactInternal:(id)a0;
- (void)processNewContact:(id)a0;
- (void)tryDeleteContactInSection:(id)a0;
- (void)reloadDataTablew;
- (void)showContactInfoView:(id)a0;
- (unsigned int)getContactInfoViewFromScene;
- (id)addSectionKey:(id)a0;
- (void)loadContacts;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isExisted:(id)a0;
- (BOOL)isSelected:(id)a0;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (void)doSearch:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)wcsSearchBarCancelButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
