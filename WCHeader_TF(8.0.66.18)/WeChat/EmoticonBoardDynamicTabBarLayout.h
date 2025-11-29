@class UIColor, NSMutableArray, NSIndexPath;

@interface EmoticonBoardDynamicTabBarLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *indexPaths;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) double itemSpacing;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL useMaskSelection;
@property (retain, nonatomic) NSIndexPath *maskSelectedIndexPath;

- (id)init;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (double)virtualIndexForX:(double)a0;
- (id)getBackgroundView;
- (void)updateBackgroundView;
- (id)getSelectionMaskLayerAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
