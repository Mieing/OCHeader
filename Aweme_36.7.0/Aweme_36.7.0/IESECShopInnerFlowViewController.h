@class UIView, IESECShopInnerFlowDataController, NSString, IESECShopInnerFlowSectionController, UIImageView, UIButton, IESECShopInnerFlowContext, IGListAdapter, UICollectionView, IESECServiceProxy;
@protocol IESECShopSLIService, IESECShopDataService;

@interface IESECShopInnerFlowViewController : UIViewController <IGListAdapterDelegate, IGListAdapterDataSource, IGListDisplayDelegate, UIScrollViewDelegate, UICollectionViewDelegate, IESECShopSnapFlowLayoutDelegate, IESECShopSLIContainerProtocol> {
    double _lastContentOffset;
}

@property (retain, nonatomic) IESECShopInnerFlowContext *context;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIImageView *skeletonView;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *sliceNavBarView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECShopInnerFlowSectionController *sectionController;
@property (retain, nonatomic) IESECShopInnerFlowDataController *dataController;
@property (nonatomic) BOOL dataNeedsUpdate;
@property (retain, nonatomic) IESECServiceProxy<IESECShopSLIService> *SLIService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isViewOnTopScreen;

- (void)loadMore;
- (void)didTapBackButton;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplayObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 didEndDisplayingObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)addFooter;
- (void)initFetch;
- (void)trackPageShowIfNeeded;
- (void)moveToIndexPathFinished:(id)a0;
- (id)snapFlowLayout:(id)a0 indexPathBeforeIndexPath:(id)a1;
- (id)snapFlowLayout:(id)a0 indexPathAfterIndexPath:(id)a1;
- (double)snapFlowLayout:(id)a0 offsetWithCellSize:(struct CGSize { double x0; double x1; })a1 scrollToTop:(BOOL)a2 indexPath:(id)a3;
- (struct CGPoint { double x0; double x1; })snapFlowLayout:(id)a0 customOffsetIndexPath:(id)a1 originOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)configBTMTrackerV2;
- (void)setupNavBarIfNeeded;
- (void)didTapSearch;
- (id)cellViewAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupViews;
- (void)updateContext;
- (void)didTapShare;

@end
