@class UIColor, NSMutableArray;

@interface WCCardCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) UIColor *sectonColor;
@property (retain, nonatomic) NSMutableArray *decorationViewAttrs;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
