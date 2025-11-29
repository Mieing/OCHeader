@class NSString, UIView;

@interface BDXCategotyGestureCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL horizonScrollEnable;
@property (nonatomic) long long direction;
@property (weak, nonatomic) UIView *lynxView;
@property (nonatomic) double gestureBeginOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
