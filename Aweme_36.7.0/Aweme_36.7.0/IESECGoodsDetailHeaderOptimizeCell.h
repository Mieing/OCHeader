@class IESECGoodsDetailHeaderServiceProvider, NSArray, UICollectionView, NSString;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderOptimizeCellDelegate, IESECGoodsDetailHeaderEventHandlerService;

@interface IESECGoodsDetailHeaderOptimizeCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *models;
@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderEventHandlerService> handler;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderOptimizeCellDelegate> delegate;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL didLockIndexChange;
@property (nonatomic) double offsetXWhenPageIsHalf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(long long)a0;
- (void)reloadCollectionView;
- (void)configWithModels:(id)a0 serviceProvider:(id)a1 delegate:(id)a2;
- (void)resetCurrentOffsetX;
- (void)headerViewSizeChangeWithPercent:(double)a0;
- (void)headerIndexDidChange:(long long)a0;
- (void)tryRecordCurrentOffsetX;
- (struct CGSize { double x0; double x1; })calculateCellSizeWithPercent:(double)a0;
- (double)calculateHalfStartOffsetX;
- (void)scrollToIndex:(long long)a0 percent:(double)a1 withCenterOffset:(double)a2;
- (void)tryUpdateCurrentIndex;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
