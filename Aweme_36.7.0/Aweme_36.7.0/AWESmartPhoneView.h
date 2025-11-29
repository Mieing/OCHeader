@class AWESmartPhoneTextField, NSString, UILabel, UIView, UIButton;

@interface AWESmartPhoneView : UIView <UITextFieldDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESmartPhoneTextField *textField;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *sureButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *verticalLine;
@property (retain, nonatomic) UIView *horizontalLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithCompletion:(id /* block */)a0;

- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)p_dismiss;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShowKeyboard:(BOOL)a1;
- (void)textFiledEditChanged:(id)a0;
- (void)gradientMaskViewTapAction:(id)a0;
- (void)cancelButtonClick:(id)a0;
- (void)sureButtonClick:(id)a0;
- (void)shakeAnimationForTipLabel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)p_addObservers;

@end
