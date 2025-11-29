@class UIButton, UILabel, UIView;

@interface IESLiveChargeManualAgreementAlert : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *protocolLabel;
@property (retain, nonatomic) UILabel *safetyLabel;
@property (retain, nonatomic) UILabel *conjunctionLabel;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (nonatomic) double startTime;

- (void)tapActionButton;
- (void)tapCancel;
- (void)tapProtocol;
- (void)tapSafeRemind;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
