@class UIColor, CJPayStyleTextField, NSString, UILabel, UIButton;
@protocol CJPayVerifySMSInputModuleDelegate;

@interface CJPayVerifySMSInputModule : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayStyleTextField *textField;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL isTextFieldAvailable;
@property (weak, nonatomic) id<CJPayVerifySMSInputModuleDelegate> delegate;
@property (nonatomic) unsigned long long textCount;
@property (copy, nonatomic) NSString *bigTitle;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly, copy, nonatomic) NSString *textValue;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (retain, nonatomic) UIColor *cursorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonClicked;
- (void)setFrames;
- (void)setButtonEnable:(BOOL)a0 title:(id)a1;
- (void)clearText;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)textFieldTextDidChange:(id)a0;

@end
