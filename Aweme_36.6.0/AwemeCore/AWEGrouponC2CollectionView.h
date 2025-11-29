@class UIView;

@interface AWEGrouponC2CollectionView : UICollectionView

@property (nonatomic) long long pageType;
@property (retain, nonatomic) UIView *searchContainer;
@property (retain, nonatomic) UIView *buble;
@property (nonatomic) BOOL didViewTouched;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
