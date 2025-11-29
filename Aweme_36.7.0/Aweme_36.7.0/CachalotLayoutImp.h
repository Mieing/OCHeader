@class NSMutableArray, CachalotCollectionViewLayoutInvalidationContext;
@protocol CachalotLayoutModelProvider;

@interface CachalotLayoutImp : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *layoutCache;
@property (retain, nonatomic) NSMutableArray *attributesCache;
@property (retain, nonatomic) NSMutableArray *stickingLayoutCache;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) CachalotCollectionViewLayoutInvalidationContext *customInvalidationContext;
@property (nonatomic) BOOL contextConflictFlag;
@property (weak, nonatomic) id<CachalotLayoutModelProvider> layoutProvider;
@property (nonatomic) BOOL syncAtMainThread;
@property (nonatomic) BOOL forceInvalidateLayoutChange;
@property (nonatomic) BOOL useNewUpdateHeightTransaction;

+ (Class)invalidationContextClass;

- (struct CGPoint { double x0; double x1; })p_lockingContentOffset;
- (double)p_contentWidth;
- (void)p_mergeCurrentContextWithContext:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
