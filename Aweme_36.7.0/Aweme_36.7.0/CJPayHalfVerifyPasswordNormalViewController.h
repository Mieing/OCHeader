@class NSString, CJPayVerifyPasswordViewModel, CJPayPasswordNormalView, CJPayBioVerifyToPasswordUtil;

@interface CJPayHalfVerifyPasswordNormalViewController : CJPayHalfVerifyPasswordBaseViewController

@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayPasswordNormalView *baseContenView;
@property (nonatomic) BOOL nonFirstAppear;
@property (retain, nonatomic) CJPayBioVerifyToPasswordUtil *bioVerifyUtil;
@property (nonatomic) BOOL isForceNormal;
@property (copy, nonatomic) NSString *customPageTitleStr;

- (id)initWithAnimationType:(unsigned long long)a0 viewModel:(id)a1;
- (BOOL)p_isShowCombinePay;
- (void)showPasswordVerifyKeyboard;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)containerHeight;

@end
