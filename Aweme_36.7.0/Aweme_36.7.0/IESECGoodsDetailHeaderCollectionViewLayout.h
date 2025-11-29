@class NSMutableArray;
@protocol IESECGoodsDetailHeaderCollectionViewLayoutDelegate;

@interface IESECGoodsDetailHeaderCollectionViewLayout : UICollectionViewFlowLayout {
    double _contentWidth;
}

@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderCollectionViewLayoutDelegate> delegate;
@property (nonatomic) BOOL pagingEnabled;
@property (nonatomic) struct CGSize { double width; double height; } footerSize;
@property (readonly, nonatomic) NSMutableArray *layoutAttributes;

- (struct CGPoint { double x0; double x1; })targetOffsetForIndex:(id)a0;
- (id)closestCellIndexPathWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (id)closestCellIndexPathOfOffset:(struct CGPoint { double x0; double x1; })a0 WithVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
