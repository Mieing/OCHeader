@class UIView;
@protocol AWESearchHomePageInspirationViewDelegate;

@interface AWESearchHomePageInspirationView : UIView

@property (weak, nonatomic) id<AWESearchHomePageInspirationViewDelegate> delegate;
@property (retain, nonatomic) UIView *lynxView;

- (void).cxx_destruct;
- (void)handleTouchEvent:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
