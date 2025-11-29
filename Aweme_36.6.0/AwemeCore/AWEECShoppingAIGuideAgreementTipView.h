@class UILabel, UIButton;

@interface AWEECShoppingAIGuideAgreementTipView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *agreementButton;
@property (copy, nonatomic) id /* block */ didTapAgreement;

- (void)tapAgreement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
