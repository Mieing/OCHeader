@interface SearchListCollection : UICollectionView

@property (nonatomic) BOOL enablePagePanBackGesture;
@property (nonatomic) double panBackGestureLeftEdge;
@property (nonatomic) BOOL enableSearchListPagePanBack;
@property (nonatomic) BOOL enableSearchListPagePanBackSwitch;

- (BOOL)edgePan:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;

@end
