@class UIView, WCFinderFeedFlowView, WCFinderFavFeedListPageViewModel, WCFinderExtStatsReporter, NSString, WCFinderFavListViewModel, WCFinderRichTextView, WCSearchBar, NSMutableSet, UILabel, NSNumber;

@interface WCFinderFavFeedListViewController : MMUIViewController <WCFinderFavFeedListPageViewModelDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewMonitorDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFavListViewModelDelegate>

@property (retain, nonatomic) WCFinderFavListViewModel *viewModel;
@property (retain, nonatomic) WCFinderFavFeedListPageViewModel *pageViewModel;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCSearchBar *searchBar;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) NSMutableSet *exposedTags;
@property (retain, nonatomic) WCFinderRichTextView *richTextView;
@property (retain, nonatomic) UIView *customTitleView;
@property (retain, nonatomic) UILabel *subTitleView;
@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) WCFinderExtStatsReporter *extStatReporter;
@property (nonatomic) BOOL disableSearch;
@property (readonly, nonatomic) long long totalCount;
@property (retain, nonatomic) NSNumber *givingCommentScene;
@property (retain, nonatomic) NSNumber *givingListCommentScene;
@property (nonatomic) double topPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingTotalCount;
+ (BOOL)automaticallyNotifiesObserversOfTotalCount;

- (id)init;
- (id)initWithDismissBlock:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (void)setupNavigationBar;
- (id)getTitleViewText;
- (void)setupSubViews;
- (void)updateTitle;
- (void)updateCustomTitleViewLayout;
- (void)reload;
- (BOOL)finderFeedFlowView:(id)a0 isCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (double)finderFeedFlowView:(id)a0 heightForCustomSupplementaryViewOfKind:(id)a1 atSection:(long long)a2;
- (id)finderFeedFlowView:(id)a0 customSupplementaryViewOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (void)finderFeedFlowView:(id)a0 updateCell:(id)a1 atIndexPath:(id)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)finderFeedFlowView:(id)a0 reportExtStatsReportAtIndexPath:(id)a1;
- (void)reloadDataWrap;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (void)WCFinderFavFeedListVMfetchDataSucceesful;
- (void)WCFinderFavFeedListVMfetchDataFailed;
- (void)onClickCoverContact:(id)a0 contentVM:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
