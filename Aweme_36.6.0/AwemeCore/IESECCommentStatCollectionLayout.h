@class NSArray;
@protocol IESECCommentStatCellLayoutSizeDelegate;

@interface IESECCommentStatCollectionLayout : UICollectionViewFlowLayout

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id<IESECCommentStatCellLayoutSizeDelegate> sizeDelegate;

- (void).cxx_destruct;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
