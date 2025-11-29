@class NSMutableArray;

@interface SectionColorCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *decorationViewAttrs;

- (void).cxx_destruct;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setup;

@end
