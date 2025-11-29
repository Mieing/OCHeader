@class NSString, CJPayGuideWithConfirmView, CJPayChoosedPayMethodView, CJPayMarketingMsgView, CJPayVerifyPasswordViewModel, CJPayButton, CJPayErrorInfoActionView, CJPaySafeInputView;

@interface CJPayPasswordContentViewV2 : UIView <CJPaySafeInputViewDelegate, CJPayDynamicLayoutViewDelegate, CJPayPasswordViewProtocol>

@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) CJPayChoosedPayMethodView *choosedPayMethodView;
@property (retain, nonatomic) CJPaySafeInputView *inputPasswordView;
@property (retain, nonatomic) CJPayErrorInfoActionView *errorInfoActionView;
@property (retain, nonatomic) CJPayButton *forgetPasswordBtn;
@property (retain, nonatomic) CJPayGuideWithConfirmView *guideView;
@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (copy, nonatomic) id /* block */ clickedPayMethodBlock;
@property (copy, nonatomic) id /* block */ forgetPasswordBtnBlock;
@property (copy, nonatomic) id /* block */ otherVerifyPayBlock;
@property (copy, nonatomic) id /* block */ inputCompleteBlock;
@property (copy, nonatomic) id /* block */ confirmBtnClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideRecommendView;
- (void)showKeyBoardView;
- (void)retractKeyBoardView;
- (void)updateErrorText:(id)a0;
- (void)clearPasswordInput;
- (void)setPasswordInputAllow:(BOOL)a0;
- (double)getMarketViewBottomMargin;
- (BOOL)hasInputHistory;
- (void)inputView:(id)a0 completeInputWithCurrentInput:(id)a1;
- (void)inputView:(id)a0 textDidChangeWithCurrentInput:(id)a1;
- (void)updatePayConfigContent:(id)a0;
- (void)updateForChoosedPayMethod:(BOOL)a0;
- (id)buildProtocolModelBySkippwdGuide;
- (void)p_comfirmInputComplete;
- (id)buildProtocolModelByBioGuide;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
