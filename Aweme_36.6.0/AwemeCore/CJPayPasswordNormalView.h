@class CJPayFixKeyboardView, CJPayVerifyPasswordViewModel, UILabel, CJPayPasswordBaseContentView;

@interface CJPayPasswordNormalView : UIView

@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayPasswordBaseContentView *baseContentView;
@property (retain, nonatomic) CJPayFixKeyboardView *ipadKeyboardView;
@property (retain, nonatomic) UILabel *ipadTitleLabel;
@property (nonatomic) BOOL isForceNormal;

- (id)initWithViewModel:(id)a0 isForceNormal:(BOOL)a1;
- (void)ipad_setupUI;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
