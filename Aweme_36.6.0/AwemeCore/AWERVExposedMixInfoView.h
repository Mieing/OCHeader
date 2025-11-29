@class AWERVHeaderFooterView, AWERVStrengthenMixInfoLoadingView, UICollectionView, AWERVExposedMixInfoViewModel, NSString, AWERVDetailPageContext, AWERVExposedMixInfoHeadView;

@interface AWERVExposedMixInfoView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWERVExposedMixInfoHeadView *headView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWERVHeaderFooterView *header;
@property (retain, nonatomic) AWERVHeaderFooterView *footer;
@property (retain, nonatomic) AWERVStrengthenMixInfoLoadingView *loadingView;
@property (retain, nonatomic) AWERVExposedMixInfoViewModel *viewModel;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isPreloadData;
@property (nonatomic) BOOL isRequestLeft;
@property (nonatomic) BOOL isRequestLeftFail;
@property (nonatomic) BOOL isRequestRight;
@property (nonatomic) BOOL isRequestRightFail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleConnectionChanged:(id)a0;
- (id)currentDataController;
- (void)refreshModel:(id)a0;
- (void)preloadDataDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1;
- (void)scrollToCurrentVideo:(id)a0 animated:(BOOL)a1;
- (void)loadRight:(id /* block */)a0;
- (void)requestLeft:(id /* block */)a0;
- (void)silentScrollWhenRequestLeftWithList:(id)a0 scrollView:(id)a1 isScroll:(BOOL)a2;
- (double)getItemWidth;
- (double)getMinimumLineSpacing;
- (void)registerCellClass;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)startLoading;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)stopLoading;
- (void)setupUI;
- (void)addObservers;

@end
