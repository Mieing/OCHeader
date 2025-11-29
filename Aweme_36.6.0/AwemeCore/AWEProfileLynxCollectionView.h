@class UIScrollView, NSString;

@interface AWEProfileLynxCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIScrollView *lynxScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
