@interface WCAdSliderCardFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) long long align;
@property (nonatomic) struct CGSize { double width; double height; } topItemSize;
@property (nonatomic) double cardWidth;
@property (nonatomic) double cardHeight;
@property (nonatomic) BOOL hasFooter;
@property (nonatomic) double minScale;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) struct CGSize { double width; double height; } collectionViewContentSize;

- (id)initWithAlign:(long long)a0 cardWidth:(double)a1 cardHeight:(double)a2 hasFooter:(BOOL)a3;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutCenterAttributesForIndexPath:(id)a0 currentPage:(long long)a1 pageOffset:(double)a2 pageOffsetProgress:(double)a3;
- (double)parallaxProgressForVisibleIndex:(long long)a0 offsetProgress:(double)a1 minScale:(double)a2;
- (id)layoutBottomAttributesForIndexPath:(id)a0 currentPage:(long long)a1 pageOffset:(double)a2 pageOffsetProgress:(double)a3;
- (id)layoutFooterAttributesWithLastCardAttributes:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
