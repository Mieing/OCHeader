@class NSTimer, UIView, NSString, AWEEnterprisePhoneNumberVerifyModel, UIImageView, UIButton, UITextField, UILabel;

@interface AWEEnterpriseVerfiyPhoneNumberAlertView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *phoneTextField;
@property (retain, nonatomic) UITextField *codeTextField;
@property (retain, nonatomic) UIImageView *cancelBtn;
@property (retain, nonatomic) UIButton *getCodeBtn;
@property (retain, nonatomic) UIButton *autoGetPhoneBtn;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) UIView *phoneBackView;
@property (retain, nonatomic) UIView *codeBackView;
@property (retain, nonatomic) NSTimer *codeTimer;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) AWEEnterprisePhoneNumberVerifyModel *model;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *codeNumber;
@property (retain, nonatomic) UILabel *policyLabel;
@property (copy, nonatomic) id /* block */ getCodeBlock;
@property (copy, nonatomic) id /* block */ submitBlock;
@property (copy, nonatomic) id /* block */ codeCallbackBlock;
@property (copy, nonatomic) id /* block */ autoGetPhoneBlock;
@property (copy, nonatomic) id /* block */ setPhoneNumberBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addObserver;
- (void)p_makeContrains;
- (id)convertSpecailFormateWithPhoneNumber:(id)a0;
- (void)p_clearTimer;
- (void)codeTextFieldDidChange;
- (void)p_updateCodeBtnTitle;
- (void)p_resetGetCode;
- (void)tapCancelAction;
- (void)tapGetCodeAction;
- (void)tapAutoGetPhone;
- (void)tapSubmitInfoAction;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;

@end
