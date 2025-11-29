@class NSString, NSArray, MAOfflineMap, MAOfflineSearchView, NSMutableDictionary, UITableView, NSMutableSet, NSMutableArray;

@interface MAOfflineMapViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MAOfflineMapSectionHeaderViewDelegate, UIScrollViewDelegate, MAOfflineSearchViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSMutableArray *managedItems;
@property (retain, nonatomic) NSMutableArray *allCityItems;
@property (nonatomic, getter=isManagedItemsExpanded) BOOL managedItemsExpanded;
@property (nonatomic, getter=isCityItemsExpanded) BOOL cityItemsExpanded;
@property (retain, nonatomic) NSArray *expandedCityItems;
@property (retain, nonatomic) NSArray *expandedManagedItems;
@property (retain, nonatomic) NSMutableSet *downloadingItems;
@property (retain, nonatomic) NSMutableDictionary *downloadStages;
@property (retain, nonatomic) MAOfflineSearchView *searchView;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (retain, nonatomic) NSMutableArray *searchAllCityItems;
@property (retain, nonatomic) NSArray *searchExpandedCityItems;
@property (readonly, nonatomic) MAOfflineMap *offlineMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupTableData;
- (void)checkNewestVersionAction;
- (void)initTableView;
- (void)setUpManagedItems;
- (id)actionSheetTitlesForOfflineItem:(id)a0;
- (void)excuteActionWithListItem:(id)a0 forAction:(id)a1;
- (void)pauseItem:(id)a0;
- (void)downloadListItem:(id)a0;
- (void)updateManagedItemsWithListItem:(id)a0;
- (void)updateUIForListItem:(id)a0 downloadStatus:(long long)a1 downloadInfo:(id)a2;
- (id)indexPathForSender:(id)a0 event:(id)a1;
- (id)listDataItemWithIndexPath:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 atIndexPath:(id)a2;
- (unsigned long long)indexForItem:(id)a0 inList:(id)a1;
- (id)accessoryViewForOfflineItem:(id)a0;
- (id)createLabelWithText:(id)a0 color:(id)a1;
- (void)checkButtonTapped:(id)a0 event:(id)a1;
- (BOOL)shouldListItem:(id)a0 contanisItem:(id)a1;
- (void)toggleCollapseStatusWithItem:(id)a0 atIndexPath:(id)a1;
- (void)showActionSheetForListItem:(id)a0;
- (void)doSearchWithSearchString:(id)a0;
- (void)reloadDataForSearchResultItems:(id)a0 expandedSearchResultItems:(id)a1;
- (void)headerView:(id)a0 section:(long long)a1 expanded:(BOOL)a2;
- (void)offlineSearchView:(id)a0 searchStringDidChange:(id)a1;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)deleteItem:(id)a0;

@end
