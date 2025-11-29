@class NSString;

@interface FirstCellNoRightSwipeCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ enterProductDetailBlock;
@property (nonatomic) BOOL hasVideoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;

@end
