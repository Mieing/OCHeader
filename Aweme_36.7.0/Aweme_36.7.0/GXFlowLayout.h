@class NSString, NSMutableArray;
@protocol GXFlowLayoutDelegate;

@interface GXFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *itemAttributes;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (retain, nonatomic) NSString *gravity;
@property (nonatomic) double containerHeight;
@property (weak, nonatomic) id<GXFlowLayoutDelegate> delegate;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
