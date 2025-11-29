@interface GCMinContentSizeFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) struct CGSize { double width; double height; } gcMinContentSize;
@property (nonatomic) double gcHorizonalAlignedPageWidth;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGSize { double x0; double x1; })gcRealContentSize;

@end
