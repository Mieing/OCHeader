@class NSString, UITextField, UILabel, UIView, UIButton;

@interface AWEIMGroupNameAlertView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *verticalSepView;
@property (retain, nonatomic) UIView *horizontalSepView;
@property (retain, nonatomic) UIButton *clearButton;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)p_dismiss;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShowKeyboard:(BOOL)a1;
- (void)clickCancelBtn:(id)a0;
- (void)handleTapViewGes:(id)a0;
- (void)handlePanViewGes:(id)a0;
- (void)clickConfirmBtn:(id)a0;
- (void)clickClearBtn:(id)a0;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)textFieldDidChange:(id)a0;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
