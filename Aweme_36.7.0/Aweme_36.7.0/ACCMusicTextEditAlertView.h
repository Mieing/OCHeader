@class NSString, UITextField, UILabel, UIView, ACCAnimatedButton;

@interface ACCMusicTextEditAlertView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCAnimatedButton *confirmButton;
@property (retain, nonatomic) ACCAnimatedButton *cancelButton;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) ACCAnimatedButton *clearButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showAlertOnView:(id)a0 withTitle:(id)a1 confirmButtonTitle:(id)a2 cancelButtonTitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;

- (void)didClickConfirmButton;
- (void)showOnView:(id)a0;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)didClickCancelButton;
- (void)p_dismiss;
- (void)didUpdateKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 willShowKeyboard:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTitle:(id)a1 confirmButtonTitle:(id)a2 cancelButtonTitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)handleTapViewGes:(id)a0;
- (void)handlePanViewGes:(id)a0;
- (void)clickClearBtn;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
