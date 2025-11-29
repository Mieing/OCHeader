@class NSArray, AWECycleCollectionView;

@interface AWECycleCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSArray *attributes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (weak, nonatomic) AWECycleCollectionView *cycleView;

- (id)calculateLayoutAttributes;
- (struct CGSize { double x0; double x1; })calculateContentSizeWithLayoutAttributes:(id)a0;
- (struct CGSize { double x0; double x1; })layoutContentSize;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
