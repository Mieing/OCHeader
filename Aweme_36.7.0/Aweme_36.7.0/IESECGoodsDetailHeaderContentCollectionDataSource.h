@class IESECGoodsDetailHeaderServiceProvider, NSArray, IESECGoodsDetailHeaderFooter, IESECGoodsDetailHeaderOptimizeCell, NSString;
@protocol IESECGoodsDetailHeaderOptimizeCellDelegate;

@interface IESECGoodsDetailHeaderContentCollectionDataSource : NSObject <UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *cells;
@property (retain, nonatomic) IESECGoodsDetailHeaderFooter *footerModel;
@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (nonatomic) long long headerImageCount;
@property (nonatomic) BOOL didHitPDPHalfOptimize;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderOptimizeCellDelegate> delegate;
@property (retain, nonatomic) IESECGoodsDetailHeaderOptimizeCell *optimizeCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowOptimizedHeader;
- (void)reloadOptimizeCellIfNeeded;
- (id)initWithCells:(id)a0 serviceProvider:(id)a1 headerImageCount:(long long)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
