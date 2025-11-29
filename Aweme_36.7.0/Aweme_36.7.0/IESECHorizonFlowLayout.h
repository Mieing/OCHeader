@class NSArray, IESECHorizonFlowLayoutConfig;
@protocol IESECHorizonFlowItemSizeDelegate;

@interface IESECHorizonFlowLayout : UICollectionViewLayout

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (retain, nonatomic) IESECHorizonFlowLayoutConfig *config;
@property (weak, nonatomic) id<IESECHorizonFlowItemSizeDelegate> itemSizeDelegate;

- (void)updateConfig:(id)a0;
- (id)initWithLayoutConfig:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
