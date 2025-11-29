@interface AWEIMTabSkeletonCollectionView : UICollectionView

@property (nonatomic) long long cellSwipeType;

- (BOOL)p_enableCellSwipe;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
