@class NSArray, NSString, WCSearcher, NSMutableDictionary, NSMutableArray, UITableView;

@interface WCOutMobleContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, WCSearchDelegate, WCDataSearchDelegate>

@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) NSArray *fliterContacts;
@property (retain, nonatomic) WCSearcher *searcher;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSMutableArray *sectionKeyArray;
@property (retain, nonatomic) NSMutableDictionary *allContactsDic;
@property (retain, nonatomic) UITableView *tableview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)configView;
- (void)configureBackBarButtomItem;
- (void)configTableView;
- (void)configData;
- (void)configSearchDisplayController;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 filtercontactCellAtIndexPath:(id)a1;
- (id)contactCellAtIndexPath:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void)updateWCOutContacts:(id)a0;
- (void)updateWCOutContactsInfo;
- (id)allContacts;
- (void)search:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)wcsSearchBarCancelButtonClicked:(id)a0;
- (BOOL)wcsSearchBarShouldBeginEditing:(id)a0;
- (void)wcsWillPresentSearch:(id)a0;
- (void)showProfileForContact:(id)a0 AndIsFromLastCallContact:(BOOL)a1;
- (void).cxx_destruct;

@end
