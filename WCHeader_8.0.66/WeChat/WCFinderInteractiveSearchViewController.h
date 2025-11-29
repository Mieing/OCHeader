@class NSString, WCFinderFeedArray, WCFinderFeedFlowView, WCFinderInteractiveSearchViewModel;

@interface WCFinderInteractiveSearchViewController : WCSearchViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedBaseViewControllerProtocol, UITextFieldDelegate, WCFinderStreamLoadingStateDelegate>

@property (retain, nonatomic) WCFinderInteractiveSearchViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (nonatomic) unsigned long long searchKey;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)displayOnViewController:(id)a0 tabType:(int)a1 closeCallback:(id /* block */)a2;
+ (void)displayOnViewController:(id)a0 tabType:(int)a1 subTabType:(int)a2 selectTab:(int)a3 closeCallback:(id /* block */)a4;

- (void)viewDidLoad;
- (void)_onDataChanged;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (id)createFeedFlowView;
- (void)_dismiss;
- (void)onNavigationCancelItemClick;
- (double)searchBarHeight;
- (id)customSearchBar;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)onTextFieldChanged:(id)a0;
- (void)_delaySearch;
- (void)_doSearch:(long long)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)a0;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (unsigned long long)makeFlowViewState;
- (void)onLoadingStateChanged:(id)a0;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)finderFeedFlowViewWillBeginDragging:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;

@end
