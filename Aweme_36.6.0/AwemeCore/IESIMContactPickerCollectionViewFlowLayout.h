@class NSMutableArray;
@protocol IESIMContactPickerCollectionViewDelegateFlowLayout;

@interface IESIMContactPickerCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *decorationViewAttrs;
@property (weak, nonatomic) id<IESIMContactPickerCollectionViewDelegateFlowLayout> delegate;

- (void)setupDecorationViewAttributes;
- (void).cxx_destruct;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
