@class MMTableView, NSArray, NSString, MMTListAdapter, FTSVoiceSearchBarController, FTSBaseSectionController;
@protocol FTSDetailResultViewControllerDelegate;

@interface FTSDetailResultViewController : FTSBaseViewController <MMTListAdapterDataSource, MMTListAdapterDelegate, FTSResultPage, UITextFieldDelegate, UITableViewDelegate, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) MMTListAdapter *listAdapter;
@property (retain, nonatomic) NSArray *dataObject;
@property (nonatomic) unsigned long long sectionType;
@property (retain, nonatomic) FTSBaseSectionController *searchController;
@property (retain, nonatomic) MMTableView *tableView;
@property (copy, nonatomic) NSString *latestSearchQuery;
@property (weak, nonatomic) FTSVoiceSearchBarController *ftsPresenter;
@property (weak, nonatomic) id<FTSDetailResultViewControllerDelegate> delegate;
@property (nonatomic) BOOL needConvertPinyinSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSectionType:(unsigned long long)a0 context:(id)a1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)onNavigationCancelItemClick;
- (void)setDefaultQuery:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)cancelSearch;
- (void)__search:(id)a0 withSlowMode:(BOOL)a1;
- (id)genSectionControllerFor:(unsigned long long)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (void)onListWillReloadData:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)reloadList;
- (void)reloadListWithDataUpdate:(id)a0;
- (id)searchBarText;
- (void)setSearchBarText:(id)a0 isReplace:(BOOL)a1;
- (id)searchTextField;
- (void)setLoadingFooterView;
- (void)setNormalFooterView;
- (void)setNoResultFooterView;
- (void)setEmptyFooterView;
- (id)getNoResultView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
