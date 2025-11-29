@interface AFDCardStackFeedCollectionLayout : UICollectionViewLayout

@property (nonatomic) struct CGSize { double width; double height; } itemSize;

+ (Class)layoutAttributesClass;

- (id)attributeForItemAtIndex:(long long)a0 offset:(long long)a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 progress:(double)a3;
- (long long)indexFromIndexPath:(id)a0;
- (id)indexPathOfIndex:(long long)a0;
- (double)offsetYForOffset:(long long)a0 progress:(double)a1;
- (double)scaleForOffset:(long long)a0 progress:(double)a1;
- (id)maskColorForOffset:(long long)a0 progress:(double)a1;
- (double)maskAlphaForOffset:(long long)a0 progress:(double)a1;
- (double)cornerRadiusForOffset:(long long)a0 progress:(double)a1;
- (id)mixColorWithLeft:(id)a0 right:(id)a1 progress:(double)a2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)totalItemCount;

@end
