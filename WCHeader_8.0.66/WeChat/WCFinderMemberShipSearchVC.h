@class UITableView, NSString, WCFinderAnimationLoadingView, WCFinderFeedContentTextViewConfig, UIView, UILabel, WCFinderMemberShipSearchViewModel;

@interface WCFinderMemberShipSearchVC : WCSearchViewController <WCFinderMemberShipSearchViewModelDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) WCFinderMemberShipSearchViewModel *viewModel;
@property (retain, nonatomic) UITableView *resTableView;
@property (nonatomic) unsigned long long searchKey;
@property (copy, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *emptyLoadingView;
@property (retain, nonatomic) WCFinderFeedContentTextViewConfig *textViewConfig;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)displayOnViewController:(id)a0 finderUserName:(id)a1 closeCallback:(id /* block */)a2;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (id)createResTableView;
- (void)_dismiss:(unsigned long long)a0;
- (void)onNavigationCancelItemClick;
- (double)searchBarHeight;
- (id)customSearchBar;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)onTextFieldChanged:(id)a0;
- (void)_delaySearch;
- (void)_doSerach:(long long)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onDataChanged;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
