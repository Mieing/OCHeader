@protocol WCPayWalletCollectionViewFlowLayoutDelegate;

@interface WCPayWalletCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) id<WCPayWalletCollectionViewFlowLayoutDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
