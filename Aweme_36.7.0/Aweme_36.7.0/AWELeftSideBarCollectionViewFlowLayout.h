@class NSMutableArray;

@interface AWELeftSideBarCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *decorationViewAttrs;
@property (retain, nonatomic) NSMutableArray *positionItemViewAttrs;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateOriginalFrameWithSectionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateBorderFrameWithSectionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void).cxx_destruct;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setup;

@end
