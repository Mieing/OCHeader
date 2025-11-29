@class NSMutableArray;
@protocol CameraScanCombineGoodsListViewLayoutDelegate;

@interface CameraScanCombineGoodsListViewExpandLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *attributesArray;
@property (weak, nonatomic) id<CameraScanCombineGoodsListViewLayoutDelegate> delegate;

- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)gradienLayerMaskHeight;
- (double)contentHeight;
- (double)topBlankAreaHeight;
- (void).cxx_destruct;

@end
