@class NSString, UICollectionView, AWEGDBussneissModel, UICollectionViewFlowLayout, AWEGDImageVOModel;
@protocol AWEGDImageItemClickProtocol, AWEGDImageHeightChangeDelegate, AWEGDImageItemLoaderProtocol;

@interface AWEGDItemContainer : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) long long targetPage;
@property (retain, nonatomic) AWEGDImageVOModel *imageVO;
@property (retain, nonatomic) AWEGDBussneissModel *businessModel;
@property (nonatomic) double currentContainerHeight;
@property (copy, nonatomic) id /* block */ onScrollBlock;
@property (weak, nonatomic) id<AWEGDImageHeightChangeDelegate> delegate;
@property (weak, nonatomic) id<AWEGDImageItemClickProtocol> itemActionDelegate;
@property (weak, nonatomic) id<AWEGDImageItemLoaderProtocol> imageLoaderDelegate;
@property (copy, nonatomic) id /* block */ trackEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateScreenStatus:(BOOL)a0;
- (void)updateCollectionViewHeight;
- (double)heightForImageAtIndex:(long long)a0;
- (void)onClickItemWithIndex:(long long)a0;
- (long long)calculateCurrentPage:(id)a0;
- (void)updateCollectionViewWithTargetHeight:(double)a0;
- (void)didScrollItemContainer:(double)a0;
- (double)itemContainerHeight;
- (void)updateModel:(id)a0 businessModel:(id)a1;
- (void)scrollToTargetPic:(long long)a0 animated:(unsigned char)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (long long)cellCount;

@end
