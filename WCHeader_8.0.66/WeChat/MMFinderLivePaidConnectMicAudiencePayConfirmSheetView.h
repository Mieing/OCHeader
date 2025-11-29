@class NSString, RichTextView, MMUIButton;

@interface MMFinderLivePaidConnectMicAudiencePayConfirmSheetView : MMFinderLiveGenericPayConfirmSheetView <ILinkEventExt>

@property (retain, nonatomic) MMUIButton *exchangeNeedToKnowButton;
@property (retain, nonatomic) MMUIButton *commonQuestionButton;
@property (nonatomic) BOOL wecoinEnough;
@property (retain, nonatomic) RichTextView *agreementTextView;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (copy, nonatomic) id /* block */ clickCommonQuestionAction;
@property (copy, nonatomic) id /* block */ clickAgreementAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)helpButtonWithTitle:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutUI;
- (void)updateWithPrice:(unsigned long long)a0;
- (void)onClickNeedToKnown;
- (void)onClickCommonQuestion;
- (void)onClickActionButton;
- (void)customInitActionButton:(id)a0;
- (void)customInitTipLabel:(id)a0;
- (void)customInitMoneyLabel:(id)a0;
- (void)customInit;
- (void)onWecoinBalanceUpdated:(long long)a0;
- (void)onCheckBoxClicked;
- (void)setAgreementSelected:(BOOL)a0;
- (void)showAgreementToast;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)needToShowAgreement;
- (void).cxx_destruct;

@end
