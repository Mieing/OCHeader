@class UIButton, NSString, CGXTextField;

@interface CGXKeyboardTextInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) CGXTextField *inputTextField;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ editCallback;
@property (copy, nonatomic) NSString *originalText;
@property (nonatomic) BOOL fixTextInputViewPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fixAutoLayoutSafeArea;
- (void)s_onSendButtonClicked;
- (void)emptyTextFieldDeleteKeyPressed;
- (void)createTextInputViewWith:(id /* block */)a0 completion:(id /* block */)a1;
- (void)showTextFieldWithCurrentText:(id)a0;
- (void)adjustTextFieldSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)resignTextInputView;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
