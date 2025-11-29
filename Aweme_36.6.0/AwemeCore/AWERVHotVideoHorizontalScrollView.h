@class NSString, UICollectionView, AWERVHotVideoElementHeadView, AWERVHotVideoViewModel, AWERVDetailPageContext, AWERVHeaderFooterView;

@interface AWERVHotVideoHorizontalScrollView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWERVHotVideoElementHeadView *headView;
@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) AWERVHeaderFooterView *footer;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWERVHotVideoViewModel *viewModel;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isPreloadingData;
@property (nonatomic) BOOL isLoadingMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserves;
- (void)preloadDataDidScroll:(id)a0;
- (void)registerCellClass;
- (void)configWithModel:(id)a0 hostSpot:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1 viewModel:(id)a2;
- (void)scrollToVideoAtIndex:(long long)a0 animated:(BOOL)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
