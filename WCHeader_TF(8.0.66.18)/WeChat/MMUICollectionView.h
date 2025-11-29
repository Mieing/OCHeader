@protocol MMUICollectionViewGestureRecognizerDelegate;

@interface MMUICollectionView : UICollectionView

@property (weak, nonatomic) id<MMUICollectionViewGestureRecognizerDelegate> gestureDelegate;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
