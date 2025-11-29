@class RichTextView;

@interface WCRedEnvelopesSelectSkinFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) RichTextView *expiredTimeLabel;
@property (nonatomic) struct CGPoint { double x; double y; } lastOffset;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cellWidth;
- (double)cellHeight;
- (double)expiredLableHeight;
- (float)cellMargin;
- (double)collectionInset;
- (double)minimumLineSpacing;
- (struct CGSize { double x0; double x1; })itemSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getCopyOfAttributes:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (double)stepSpace;
- (void).cxx_destruct;

@end
