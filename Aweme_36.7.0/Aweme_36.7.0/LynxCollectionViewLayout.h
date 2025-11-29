@class LynxCollectionViewLayoutSectionModel, NSIndexPath, LynxCollectionScroll;

@interface LynxCollectionViewLayout : UICollectionViewLayout

@property (retain, nonatomic) LynxCollectionViewLayoutSectionModel *sectionModel;
@property (nonatomic) BOOL enableSticky;
@property (weak, nonatomic) LynxCollectionScroll *scroll;
@property (nonatomic) BOOL indexAsZIndex;
@property (retain, nonatomic) NSIndexPath *targetIndexPathAfterBatchUpdate;
@property (nonatomic) double targetOffsetDeltaAfterBatchUpdate;
@property (nonatomic) BOOL needsAdjustContentOffsetForSelfSizingCells;
@property (nonatomic) BOOL needUpdateValidLayoutAttributesAfterDiff;
@property (nonatomic) BOOL enableAlignHeight;

+ (Class)invalidationContextClass;

- (BOOL)isStickyItem:(id)a0;
- (id)layoutAttributesForStickItemAtIndexPath:(id)a0;
- (void)setFixSelfSizingOffsetFromStart:(BOOL)a0;
- (void)setUseOldSticky:(BOOL)a0;
- (void)setStickyWithBounces:(BOOL)a0;
- (void)calculateTargetIndexPathWithContext:(id)a0;
- (void)prepareForCellLayoutUpdate;
- (void)setStickyOffset:(double)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForPreferredLayoutAttributes:(id)a0 withOriginalAttributes:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setHorizontalLayout:(BOOL)a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;

@end
