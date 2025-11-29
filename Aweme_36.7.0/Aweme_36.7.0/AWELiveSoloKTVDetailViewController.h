@class UIView, AWELiveSoloKTVShareServiceImpl, NSString, AWELiveSoloKTVDetailViewManager, AWEAnimatedButton, AWEUILoadingView, NSMutableSet, IGListAdapter, AWELiveSoloKTVDetailViewModel, UILabel, UICollectionView;

@interface AWELiveSoloKTVDetailViewController : UIViewController <IGListAdapterDataSource, UIScrollViewDelegate, UICollectionViewDelegate>

@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWELiveSoloKTVDetailViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUILoadingView *detailLoadingView;
@property (retain, nonatomic) AWEUILoadingView *listLoadingView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAnimatedButton *actionButton;
@property (retain, nonatomic) NSMutableSet *cellDisplaySet;
@property (retain, nonatomic) AWELiveSoloKTVShareServiceImpl *shareImpl;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) AWELiveSoloKTVDetailViewManager *detailViewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (id)sectionControllerForObject:(id)a0;
- (void)bindViewModelOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (void)onActionButtonClicked:(id)a0;
- (id)headerInfoSectionController;
- (void)trackSoloKTVEntranceShow;
- (void)updateAwemeListSection;
- (void)trackDetailPageSoloKTVShowWithVideoInfo:(id)a0;
- (void)handleListFetchStateChange;
- (id)listSectionController;
- (void)enterAwemeDetailWithIndexPath:(id)a0;
- (void)trackDetailPageSoloKTVClickWithVideoInfo:(id)a0;
- (void)showLoadingView:(id)a0 onView:(id)a1;
- (void)removeLoadingView:(id)a0;
- (void)trackSoloKTVEntranceClick;
- (void)didClickBack;
- (void)didClickShare;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)initWithViewModel:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
