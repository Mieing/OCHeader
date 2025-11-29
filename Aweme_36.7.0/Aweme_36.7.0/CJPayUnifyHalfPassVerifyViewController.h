@class CJPayStandardSwitch, NSDictionary, CJPaySafeInputView, UILabel, UIButton;

@interface CJPayUnifyHalfPassVerifyViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPaySafeInputView *inputPasswordView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *forgetPwdBtn;
@property (retain, nonatomic) UILabel *bioReopenMsg;
@property (retain, nonatomic) CJPayStandardSwitch *reopenSwitch;
@property (nonatomic) BOOL hasInputPassword;
@property (copy, nonatomic) NSDictionary *tokenParamDic;
@property (copy, nonatomic) id /* block */ inputCompletionBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)inputView:(id)a0 completeInputWithCurrentInput:(id)a1;
- (void)inputView:(id)a0 textDidChangeWithCurrentInput:(id)a1;
- (void)p_forgetButtonTapped;
- (void)p_switchClicked;
- (void)updateTipsWithText:(id)a0;
- (void)p_setupUI;
- (void)clearInput;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)reset;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end
