@class RxCollectionCompositionalLayoutSolver, UICollectionView;

@interface RxCollectionViewOrthogonalScrollingSubLayout : UICollectionViewLayout

@property (readonly, copy, nonatomic) id /* block */ getter;
@property (readonly, nonatomic) RxCollectionCompositionalLayoutSolver *solver;
@property (readonly, weak, nonatomic) UICollectionView *masterCollectionView;
@property (readonly, nonatomic) long long sectionIndex;

- (int)rx_layoutAxis;
- (id)initWithSolverGetter:(id /* block */)a0 masterCollectionView:(id)a1 sectionIndex:(long long)a2;
- (id)__mutableProcessingCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)description;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
