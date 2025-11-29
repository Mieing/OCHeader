@class NSString, FBFilesSearchViewController, NSArray, UIImageView, WCDataSearcher, NSMutableArray, MMUILabel, MMTableView, UIColor;
@protocol FBFilesViewControllerDelegate;

@interface FBFilesViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFileBrowseCellDelegate, WCSearchDelegate, WCDataSearchDelegate, WCFileBrowseServiceExt, FBFilesSearchViewControllerDelegate>

@property (retain, nonatomic) MMTableView *mainTableView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) NSMutableArray *selectedFileBrowseArray;
@property (retain, nonatomic) MMUILabel *emptyTipLabel;
@property (retain, nonatomic) WCDataSearcher *searcher;
@property (retain, nonatomic) FBFilesSearchViewController *searchViewController;
@property (retain, nonatomic) NSArray *itemTitleArr;
@property (nonatomic) unsigned long long currentDataType;
@property (nonatomic) BOOL bLoadingChatLogFile;
@property (nonatomic) BOOL bLoadingFavFile;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) BOOL bInSearch;
@property (weak, nonatomic) id<FBFilesViewControllerDelegate> delegate;
@property (nonatomic) unsigned int maxFileCount;
@property (retain, nonatomic) UIColor *customNavigationBarBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithChatName:(id)a0;
- (id)initWithVCType:(unsigned long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (void)addLogoImageOnTableView;
- (void)initSearchBar;
- (void)initEmptyView;
- (void)updateSelectFileType:(unsigned long long)a0;
- (void)unselectFile:(id)a0;
- (void)updateSelect;
- (void)updateLoadingState;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)whetherFileBrowseInfoSelect:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)wcsDidPresentSearch:(id)a0;
- (void)wcsWillDismissSearch:(id)a0;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (id)cellForIndex:(id)a0 ForSearchViewTable:(id)a1;
- (long long)numberOfSectionsForSearchViewTable:(id)a0;
- (long long)numberOfRowsInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (double)heightForHeaderInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (id)viewForHeaderInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (id)titleForHeaderInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (void)onFileBrowseCellTouchIndexPath:(id)a0;
- (void)onFileBrowseDataLoading:(unsigned long long)a0;
- (void)onFileBrowseDataLoadEnd:(unsigned long long)a0;
- (void).cxx_destruct;

@end
