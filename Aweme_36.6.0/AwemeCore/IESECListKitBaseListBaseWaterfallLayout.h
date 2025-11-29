@class NSMutableArray, NSMutableDictionary;

@interface IESECListKitBaseListBaseWaterfallLayout : IESECListKitBaseLayout

@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *headersAttributes;
@property (retain, nonatomic) NSMutableDictionary *footersAttributes;
@property (retain, nonatomic) NSMutableArray *unionRects;

- (void)buildUnionRects;
- (id)ieseclistkit_extraLayoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)ieseclistkit_updateInitialLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isInserted:(BOOL)a2;
- (void)ieseclistkit_updateFinalLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isDeleted:(BOOL)a2;
- (void)lifecycleForPrepareForCollectionViewUpdates:(id)a0;
- (void)lifecycleForFinalizeCollectionViewUpdates;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;

@end
