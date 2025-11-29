@class UIWindow, UIView;
@protocol BDPFullWindowDelegate;

@interface BDPFullWindow : UIWindow

@property (weak, nonatomic) UIWindow *previousKeyWindow;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UIView *bubbleView;
@property (weak, nonatomic) id<BDPFullWindowDelegate> delegate;

- (BOOL)shouldAffectStatusBarAppearance;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeKeyWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
