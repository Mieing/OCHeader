@class CJPayErrorButtonInfo, CJPayStandardButton, CJPayButton, UILabel;

@interface CJPayPasswordLockPopUpViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayStandardButton *forgetPwdBtn;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) CJPayButton *cancelBtn;
@property (copy, nonatomic) id /* block */ forgetPwdBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)p_cancel;
- (id)initWithButtonInfo:(id)a0;
- (void)p_forgetPwd;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
