@class CJPayVerifyPasswordViewModel, CJPayPasswordWithSkipPwdGuideView;

@interface CJPayHalfVerifyPasswordWithSkipPwdGuideViewController : CJPayHalfVerifyPasswordBaseViewController

@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayPasswordWithSkipPwdGuideView *baseContentView;

- (void)trackWithEventName:(id)a0 params:(id)a1;
- (id)initWithAnimationType:(unsigned long long)a0 viewModel:(id)a1;
- (BOOL)p_isShowCombinePay;
- (BOOL)p_isShowGuideButton;
- (void)p_onConfirmClick;
- (BOOL)p_isShowMarketing;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (double)containerHeight;

@end
