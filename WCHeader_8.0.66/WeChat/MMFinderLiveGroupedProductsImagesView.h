@class MMFinderLiveGroupedProductsViewModel, UICollectionView, NSString, UILabel;

@interface MMFinderLiveGroupedProductsImagesView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMFinderLiveGroupedProductsViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)spacing;
+ (double)preferHeightWithViewModel:(id)a0 inWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIndex;
- (void)updateWithViewModel:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (double)contentOffsetForIndex:(unsigned long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
