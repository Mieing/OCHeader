@class NSString, NSMutableArray, NSMutableDictionary;
@protocol AWEListKitBaseLayoutDelegate, AWEListKitBaseWaterfallLayoutDelegate;

@interface AWEBaseListBaseWaterfallLayout : UICollectionViewLayout <AWEListKitLayoutBaseProtocol>

@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *headersAttributes;
@property (retain, nonatomic) NSMutableDictionary *footersAttributes;
@property (retain, nonatomic) NSMutableArray *unionRects;
@property (weak, nonatomic) id<AWEListKitBaseWaterfallLayoutDelegate> waterFallDelegate;
@property (weak, nonatomic) id<AWEListKitBaseLayoutDelegate> baseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awelistkit_updateInitialLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isInserted:(BOOL)a2;
- (void)awelistkit_updateFinalLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isDeleted:(BOOL)a2;
- (id)awelistkit_extraLayoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)awelistkit_supplementaryKindForHeader;
- (id)awelistkit_supplementaryKindForFooter;
- (void)buildUnionRects;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;

@end
