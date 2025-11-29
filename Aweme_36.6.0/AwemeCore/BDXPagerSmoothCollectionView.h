@class NSString, UIView;

@interface BDXPagerSmoothCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *pagerHeaderContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
