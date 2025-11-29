@class CJPayGuideWithConfirmView, CJPayVerifyPasswordViewModel, CJPayPasswordBaseContentView;

@interface CJPayPasswordWithSkipPwdGuideView : UIView

@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayPasswordBaseContentView *baseContentView;
@property (retain, nonatomic) CJPayGuideWithConfirmView *guideView;
@property (nonatomic) double containerHeight;
@property (copy, nonatomic) id /* block */ onConfirmClickBlock;
@property (copy, nonatomic) id /* block */ protocolClickBlock;

- (BOOL)p_isShowGuideButton;
- (void)p_onConfirmClick;
- (id)initWithViewModel:(id)a0 containerHeight:(double)a1;
- (void)p_resetButtonTitle;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
