@class NSString, UIView;

@interface BDPScreenProtectTextField : UITextField <UITextFieldDelegate>

@property (retain, nonatomic) UIView *secView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateScreenProtectContentView;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
