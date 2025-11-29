@class NSDictionary, NSString, UIPanGestureRecognizer;

@interface IESECSliceXCartSlideContainerView : IESECSliceXViewElementView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) long long panOffsetLimit;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (nonatomic) struct CGPoint { double x; double y; } slidingCenter;
@property (copy, nonatomic) NSDictionary *attrs;
@property (nonatomic) BOOL bottomButtonClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interruptGesture:(id)a0;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)cartSlideContainerDidSlide:(id)a0;
- (void)cartBottomButtonClick:(id)a0;
- (BOOL)displayingBottomButtons;
- (void)handlePanToRight:(id)a0;
- (void)handlePanToLeft:(id)a0;
- (BOOL)shouldPanToLeftWhenGestureEnds:(id)a0;
- (void)trackWithSlideMenuShow;
- (BOOL)shouldPanToRightWhenGestureEnds:(id)a0;
- (BOOL)shouldInterruptGestureWhenPanToLeft;
- (BOOL)shouldInterruptGestureWhenPanToRight;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)handlePanGesture:(id)a0;
- (void)resetSlideState;

@end
