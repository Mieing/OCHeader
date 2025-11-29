@class MMTableView, NSMutableArray, NSString, MMFinderLiveTaskId, MMFinderLiveTask, MMFinderLiveCommentSensitiveSearchTableViewModel;

@interface MMFinderLiveSensitiveSearchViewController : WCSearchViewController <MMTableViewDelegate, UITextFieldDelegate, MMFinderLiveCommentSensitiveSearchTableDelegate>

@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMFinderLiveCommentSensitiveSearchTableViewModel *tableViewModel;
@property (retain, nonatomic) NSMutableArray *sourceDataItemList;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (copy, nonatomic) id /* block */ onSensitiveSearchDataItemDeleteCallback;
@property (nonatomic) unsigned long long overrideOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSourceDataItems:(id)a0;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (BOOL)isHalfPage;
- (void)loadTableView;
- (void)resignSearchBar;
- (void)searchWithQuery:(id)a0;
- (void)updateSourceDataItems:(id)a0;
- (void)searchTableViewDidScroll:(id)a0;
- (void)onSearchResultSensitiveDataItemDelete:(id)a0;
- (void)mmTableView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (void)reportForSearchTextFieldExp;
- (void)reportForSearchTextFieldClick;
- (void)commonInit;
- (BOOL)shouldOverrideMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didAskSearchControllerShouldBeginWithResult:(BOOL)a0;
- (void)didAppearFromSearchController;
- (void)toggleLandscapeNavBarHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
