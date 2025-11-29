@class CJPayGuideWithConfirmView, CJPayVerifyPasswordViewModel, CJPayPasswordBaseContentView;

@interface CJPayPasswordWithOpenBioGuideView : UIView

@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (retain, nonatomic) CJPayPasswordBaseContentView *baseContentView;
@property (retain, nonatomic) CJPayGuideWithConfirmView *guideView;
@property (copy, nonatomic) id /* block */ onConfirmClickBlock;

- (void)p_onConfirmClick;
- (void)p_resetButtonTitle;
- (void)p_resetButtonTitleWithIsFirstAppear:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
