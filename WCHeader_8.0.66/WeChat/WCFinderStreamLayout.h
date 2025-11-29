@class NSValue, NSMutableDictionary;

@interface WCFinderStreamLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableDictionary *caches;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) struct CGSize { double width; double height; } cellSpace;
@property (nonatomic) double cellHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cellEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } footerEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } decorationEdgeInsets;
@property (nonatomic) BOOL sectionHeadersPinToVisibleBounds;
@property (nonatomic) BOOL sectionFootersPinToVisibleBounds;
@property (nonatomic) long long crossPinHeaderIndex;
@property (retain, nonatomic) NSValue *contentInsetValue;
@property (nonatomic) struct CGSize { double width; double height; } minSize;

+ (Class)invalidationContextClass;
+ (id)makeDecorationAttributes:(long long)a0;

- (id)init;
- (id)delegate;
- (double)contentHeightToSection:(double)a0;
- (unsigned long long)numberOfSections;
- (BOOL)headerPinToVisibleBoundsInSection:(unsigned long long)a0;
- (BOOL)footerPinToVisibleBoundsInSection:(unsigned long long)a0;
- (void)prepareLayout;
- (void)prepareLayoutForSection:(unsigned long long)a0;
- (void)prepareHeaderLayoutForSection:(unsigned long long)a0;
- (long long)cellCountForSection:(unsigned long long)a0;
- (void)prepareCellLayoutForSection:(unsigned long long)a0;
- (void)prepareFooterLayoutForSection:(unsigned long long)a0;
- (void)prepareDecorationLayoutForSection:(unsigned long long)a0;
- (id)copyAttributes:(id)a0 withDeltaTop:(double)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (unsigned long long)topVisibleSectionInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)invalidateLayout;
- (void).cxx_destruct;

@end
