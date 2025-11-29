@class NSMutableArray, NSMutableDictionary;
@protocol WCFinderNeayByStreamLayoutDelegate;

@interface WCFinderNeayByStreamLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *attrsArr;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (nonatomic) double maxContentHeight;
@property (retain, nonatomic) NSMutableArray *shouldAnimationArr;
@property (retain, nonatomic) NSMutableDictionary *headerAttrsArr;
@property (retain, nonatomic) NSMutableDictionary *footerAttrArr;
@property (retain, nonatomic) NSMutableDictionary *cellAttrArr;
@property (weak, nonatomic) id<WCFinderNeayByStreamLayoutDelegate> delegate;

- (void)prepareLayout;
- (void)clearData;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)finalizeCollectionViewUpdates;
- (void)setupSectionHeader:(unsigned long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)setupSectionFooter:(unsigned long long)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)setupDecorationViewatIndexPath:(id)a0 top:(double)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (double)maxYWithColumnHeights;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (id)cellAttributeAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
