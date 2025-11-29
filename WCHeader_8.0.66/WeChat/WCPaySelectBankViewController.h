@class WCPaySelectBankSearchResultViewController, NSMutableDictionary, NSString, MMTableView, NSMutableArray, UISearchController;
@protocol WCPaySelectBankViewControllerDelegate;

@interface WCPaySelectBankViewController : WCPayBaseViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource, WCPaySelectBankSearchResultViewControllerDelegate, MMTableViewIndexViewDelegate> {
    MMTableView *m_tableView;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) WCPaySelectBankSearchResultViewController *resultsController;
@property (retain, nonatomic) NSMutableArray *m_majorBankList;
@property (retain, nonatomic) NSMutableDictionary *m_allBankData;
@property (retain, nonatomic) NSMutableArray *m_indexArray;
@property (nonatomic) double searchBackgroundY;
@property (nonatomic) double searchBackgroundHeight;
@property (retain, nonatomic) NSMutableArray *m_allBankCardTypeList;
@property (weak, nonatomic) id<WCPaySelectBankViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)refreshViewWithData:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)reloadSelectBankView:(id)a0 allBankList:(id)a1;
- (void)OnGetBankListWithError:(id)a0 errorCode:(unsigned int)a1;
- (void)updateView;
- (void)updateSearch;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)onWCPaySelectBankSearchResultViewControllerDidSelectBankItem:(id)a0;
- (void)didSelectBankItem:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)didPresentSearchController:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (void)updateTableView;
- (void)updateNavigationBar;
- (void)OnCancel;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)layoutCell:(id)a0 bankItem:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (id)parseBankNameKey:(id)a0;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)a0;
- (void).cxx_destruct;

@end
