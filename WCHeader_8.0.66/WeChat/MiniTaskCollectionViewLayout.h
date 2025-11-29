@class NSMutableSet, NSMutableDictionary, NSMutableArray;
@protocol MiniTaskCollectionViewLayoutDelegate;

@interface MiniTaskCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) double collectionContentHeight;
@property (retain, nonatomic) NSMutableDictionary *itemAttributes;
@property (retain, nonatomic) NSMutableArray *headerAttrs;
@property (retain, nonatomic) NSMutableDictionary *footerAttrs;
@property (retain, nonatomic) NSMutableSet *changedCells;
@property (weak, nonatomic) id<MiniTaskCollectionViewLayoutDelegate> delegate;

- (id)init;
- (struct CGSize { double x0; double x1; })itemSizeForIndexPath:(id)a0;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)calculateLayoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)finalizeCollectionViewUpdates;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForCellSnapshot;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)stringFromIndexPath:(id)a0;
- (BOOL)isOutdateSectionEmpty;
- (BOOL)isSectionCanLoadMore:(long long)a0;
- (BOOL)shouldShowSectionHeader:(long long)a0;
- (void).cxx_destruct;

@end
