@class WCFinderRecommendCollectionViewModel, WCFinderAnimationLoadingView, NSString, WCFinderFeedFlowViewAdapter, UILabel, WCFinderFeedFlowView;

@interface WCFinderRecommendCollectionViewController : WCFinderCustomPanelSheet <WCFinderRecommendCollectionViewModelDelegate, WCFinderFeedFlowViewAdapterDeleagte, WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol>

@property (retain, nonatomic) WCFinderFeedFlowViewAdapter *flowViewAdapter;
@property (retain, nonatomic) WCFinderRecommendCollectionViewModel *viewModel;
@property (nonatomic) int customCommentScene;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (nonatomic) unsigned long long enterTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (id)loadContentView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)layoutUI;
- (void)initFlowViewAdapter;
- (void)finderRecommendCollectionHeaderChanged:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)feedListViewControllerWillAppear:(id)a0;
- (id)getHalfContainerView;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void).cxx_destruct;

@end
