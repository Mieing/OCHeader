@protocol BDXLynxViewPagerLightProtocol;

@interface BDXLynxViewPager : UICollectionView

@property (weak, nonatomic) id<BDXLynxViewPagerLightProtocol> uiDelegate;
@property (nonatomic) BOOL attachScroll;
@property (nonatomic) double gestureBeginOffset;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;

@end
