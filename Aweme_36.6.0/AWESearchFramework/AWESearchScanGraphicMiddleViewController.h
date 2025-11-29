@class UITableView, AWESearchScanGraphicMiddleDataContext, NSString, AWESearchScanGraphicSearchBar, UIButton;

@interface AWESearchScanGraphicMiddleViewController : UIViewController <UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) AWESearchScanGraphicSearchBar *searchBar;
@property (retain, nonatomic) UITableView *guessWordsTableView;
@property (nonatomic) unsigned long long popType;
@property (nonatomic) BOOL supportDrakTheme;
@property (retain, nonatomic) AWESearchScanGraphicMiddleDataContext *dataContext;
@property (copy, nonatomic) id /* block */ searchGraphicBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickBackButton;
- (id)initWithDataContext:(id)a0;
- (void)clickSearchButton;
- (void)setupSubViews;
- (void)rightSlidPopBack;
- (void)guessWordsShow:(BOOL)a0;
- (void)trackSearchBoxSuggestTrendingIsShow:(BOOL)a0;
- (void)setupGuessWordTableView;
- (void)trackClickSearchBarEvent:(id)a0;
- (void)searchGraphicImpleWithSearchWord:(id)a0 andWordType:(unsigned long long)a1;
- (void)trackClickGuessWordEvent:(id)a0 andIndex:(unsigned long long)a1;
- (void)trackShowGuessWordEvent:(id)a0 andIndex:(unsigned long long)a1;
- (id)p_getJumpType:(unsigned long long)a0;
- (void)jumpToSearchMiddleBaseWithType:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)didMoveToParentViewController:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)colorNamed:(id)a0;

@end
