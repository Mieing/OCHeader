@class NSMutableArray;

@interface WCFinderPersonalCenterLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *decorationAttrs;

- (id)init;
- (void)setup;
- (id)flowDelegate;
- (void)prepareLayout;
- (void)prepareDecorationLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
