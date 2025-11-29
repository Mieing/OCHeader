@class UILabel, IESLiveChargeKeyBoardView, NSString, UIImageView, UITextField, IESLiveChargeCustomViewModel, NSNumber, IESLiveBaseChargeAgreementView;

@interface IESLiveChargeCustomView : UIView <IESLiveCustomViewReaction>

@property (retain, nonatomic) IESLiveChargeCustomViewModel *viewModel;
@property (retain, nonatomic) UITextField *inputTextFiled;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipIcon;
@property (retain, nonatomic) UILabel *chargeRemindLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) IESLiveChargeKeyBoardView *keyboardView;
@property (retain, nonatomic) IESLiveBaseChargeAgreementView *agreementView;
@property (retain, nonatomic) NSNumber *amount;
@property (copy, nonatomic) id /* block */ manualAgreementChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectRange;
- (void)updateAmountStringWithChargeModel:(id)a0;
- (void)setNewSelectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateManualAgreementStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)updateInputString:(id)a0;

@end
