@class UIButton, UITextView;

@interface BDPBootLoggerView : UIView

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *exitButton;
@property (nonatomic) BOOL isShowing;

- (void)onExitClicked:(id)a0;
- (void)showOrHide:(BOOL)a0 complete:(id /* block */)a1;
- (void)updateButtonIcon;
- (void)udpateLog:(id)a0;
- (void)destory;
- (void)hide:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show:(id /* block */)a0;

@end
