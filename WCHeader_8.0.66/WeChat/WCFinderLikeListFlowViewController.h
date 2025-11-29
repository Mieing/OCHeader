@class WCFinderExtStatsReporter, UIView, WCFinderFeedFlowView, NSString, WCSearchBar, RichTextView, UILabel, WCFinderLikeListFlowViewModel;

@interface WCFinderLikeListFlowViewController : MMUIViewController <WCFinderStreamFooterViewActionDelegate, WCFinderLikeListFlowViewModelDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate>

@property (retain, nonatomic) WCFinderLikeListFlowViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) WCSearchBar *searchBar;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) double kWCFinderSafeHeight;
@property (retain, nonatomic) UIView *customTitleView;
@property (retain, nonatomic) UILabel *subTitleView;
@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) WCFinderExtStatsReporter *extStatReporter;
@property (readonly, nonatomic) long long totalCount;
@property (nonatomic) BOOL disableSearch;
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
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (void)setupNavigationBar;
- (id)getTitleViewText;
- (void)setupSubViews;
- (void)updateTitle;
- (void)updateCustomTitleViewLayout;
- (void)reload;
- (void)fetchData;
- (void)fetchNextPage;
- (void)reloadDataWrap;
- (void)finderLikeListFLowVMfetchDataSucceesful;
- (void)finderLikeListFlowVMfetchDataFailed;
- (void)finderLikeListFLowVMMegaVideoFavStatusChangedRet:(BOOL)a0 videoId:(id)a1 isLike:(BOOL)a2;
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
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)finderFeedFlowView:(id)a0 reportExtStatsReportAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })finderFeedFlowView:(id)a0 edgeInsetsAtSection:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })finderFeedFlowView:(id)a0 cellSpaceAtSection:(unsigned long long)a1;
- (void)onClickCoverContact:(id)a0 contentVM:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
