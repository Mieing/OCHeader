@class NSString, AWETransitionFullScreenPanGestureRecognizer;

@interface AWEUserRecommendCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) AWETransitionFullScreenPanGestureRecognizer *fullScreenPanGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
