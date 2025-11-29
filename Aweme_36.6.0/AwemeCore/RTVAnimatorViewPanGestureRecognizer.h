@protocol RTVAnimatorViewPanGestureRecognizerDelegate, RxInjector, RTVVoipContextManagerInterface;

@interface RTVAnimatorViewPanGestureRecognizer : UIPanGestureRecognizer

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameBeforeKeyboardShow;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (weak, nonatomic) id<RTVAnimatorViewPanGestureRecognizerDelegate> delegate;
@property (nonatomic) BOOL autoResetDragView;

- (void)rxAwakeFromPropertyInjection;
- (void)__keyboardWillShow:(id)a0;
- (double)__heightInNoti:(id)a0;
- (void)refreshGestureViewFrame;
- (void)__handlePanGesture:(id)a0;
- (void)__keyboardDidHide:(id)a0;
- (BOOL)__isInFullScreenState;
- (void)__animateGestureView:(id)a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)__animatorByGestureInvoke:(id)a0;
- (void)__animateGestureView:(id)a0;
- (void)refreshGestureViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__moveTargetViewWithGesture:(id)a0;
- (id)__configAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__gestureVisibleArea;
- (void)__gestureEnded:(id)a0;
- (id)__gestureEndAnimatorWithAnimation:(id /* block */)a0;
- (void).cxx_destruct;

@end
