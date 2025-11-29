@class NSMutableArray;
@protocol AWEEcomSearchWaterfallFlowLayoutDataSource;

@interface AWEEcomSearchWaterfallFlowLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *itemLayoutAttributes;
@property (retain, nonatomic) NSMutableArray *headerLayoutAttributes;
@property (retain, nonatomic) NSMutableArray *footerLayoutAttributes;
@property (retain, nonatomic) NSMutableArray *heightOfSections;
@property (nonatomic) double contentHeight;
@property (weak, nonatomic) id<AWEEcomSearchWaterfallFlowLayoutDataSource> dataSource;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) BOOL sectionHeadersPinToVisibleBounds;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetForSection:(long long)a0;
- (double)minimumLineSpacingForSection:(long long)a0;
- (double)minimumInteritemSpacingForSection:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDataSource:(id)a0;

@end
