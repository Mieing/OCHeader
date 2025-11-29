@interface AWESearchStackLayout : UICollectionViewFlowLayout

@property (nonatomic) unsigned long long visibleItemsCount;
@property (nonatomic) double itemOffset;
@property (nonatomic) double itemScale;
@property (nonatomic) double leftMargin;
@property (nonatomic) double topItemWidth;
@property (readonly, nonatomic) long long currentPage;

- (struct CGSize { double x0; double x1; })collectionBounds;
- (id)layoutAttributesForIndexPath:(id)a0 currentPage:(long long)a1 offset:(double)a2 offsetProgress:(double)a3;
- (double)parallaxProgressForVisibleIndex:(long long)a0 offsetProgress:(double)a1 minScale:(double)a2;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)itemsCount;

@end
