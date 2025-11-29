@class UICollectionViewLayoutAttributes;

@interface ACCAIGCRecordListCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) UICollectionViewLayoutAttributes *footerAttributes;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *headerAttributes;
@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL addFooter;
@property (nonatomic) long long sectionForContentCell;
@property (nonatomic) BOOL isFromInspiration;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
