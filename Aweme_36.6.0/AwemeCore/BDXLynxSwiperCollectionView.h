@class NSString, UIView;

@interface BDXLynxSwiperCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView *bounceBeginView;
@property (weak, nonatomic) UIView *bounceEndView;
@property (nonatomic) double customDuration;
@property (nonatomic) BOOL duringCustomScroll;
@property (nonatomic) unsigned long long touchBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 withDuration:(double)a1 interception:(id /* block */)a2;
- (void)addBouncesView:(id)a0 and:(id)a1;
- (void)decelerateToContentOffset:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
