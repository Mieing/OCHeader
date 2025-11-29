@class NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWESkyLightCaptureView : UIView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ touchBeganBlock;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) UIView *ignoreView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTouchBeganBlock:(id /* block */)a0;
- (void)tapGestureAction:(id)a0;
- (void)panGestureAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
